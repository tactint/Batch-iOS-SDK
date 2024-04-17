//
//  BADelegatedUIAlertController.m
//  Batch
//
//  Copyright © 2016 Batch. All rights reserved.
//

#import <ONSBatch/BADelegatedUIAlertController.h>
#import <ONSBatch/BatchMessagingPrivate.h>

#import <ONSBatch/BAInjection.h>
#import <ONSBatch/BAMessagingCenter.h>

@implementation BADelegatedUIAlertController {
    id<BAMessagingAnalyticsDelegate> _messagingAnalyticsDelegate;
}

+ (instancetype)alertControllerWithMessage:(BAMSGMessageAlert *_Nonnull)message {
    return [[BADelegatedUIAlertController alloc] initWithMessage:message];
}

- (instancetype)initWithMessage:(BAMSGMessageAlert *_Nonnull)message {
    self = [super init];

    if (self) {
        self.messageDescription = message;

        self.title = message.titleText;
        self.message = message.bodyText;

        UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:message.cancelButtonText
                                                               style:UIAlertActionStyleCancel
                                                             handler:^(UIAlertAction *_Nonnull action) {
                                                               [self cancelPressed];
                                                             }];
        [self addAction:cancelAction];

        if (message.acceptCTA) {
            UIAlertAction *acceptAction = [UIAlertAction actionWithTitle:message.acceptCTA.label
                                                                   style:UIAlertActionStyleDefault
                                                                 handler:^(UIAlertAction *_Nonnull action) {
                                                                   [self acceptPressed];
                                                                 }];

            [self addAction:acceptAction];
        }

        _messagingAnalyticsDelegate = [BAInjection injectProtocol:@protocol(BAMessagingAnalyticsDelegate)];
    }
    return self;
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];

    [_messagingAnalyticsDelegate messageShown:self.messageDescription];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];

    [_messagingAnalyticsDelegate messageDismissed:self.messageDescription];
}

- (UIAlertControllerStyle)preferredStyle {
    return UIAlertControllerStyleAlert;
}

- (BOOL)shouldDisplayInSeparateWindow {
    return false;
}

- (void)cancelPressed {
    [self dismissViewControllerAnimated:YES completion:nil];

    [_messagingAnalyticsDelegate messageClosed:self.messageDescription];
}

- (void)acceptPressed {
    [self dismissViewControllerAnimated:YES completion:nil];

    [_messagingAnalyticsDelegate messageButtonClicked:self.messageDescription
                                             ctaIndex:0
                                               action:self.messageDescription.acceptCTA];

    // We don't need to handle BAMSGCTAActionKindClose since we did that earlier
    [BAMessagingCenter.instance performAction:self.messageDescription.acceptCTA
                                       source:self.messageDescription.sourceMessage
                                  actionIndex:0
                            messageIdentifier:self.messageDescription.sourceMessage.devTrackingIdentifier];
}

@end
