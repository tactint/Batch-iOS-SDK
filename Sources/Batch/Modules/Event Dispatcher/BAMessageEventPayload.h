//
//  BAMessageEventPayload.h
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//

#import <ONSBatch/BatchEventDispatcher.h>
#import <ONSBatch/BatchMessaging.h>
#import <ONSBatch/BatchMessagingModels.h>
#import <ONSBatch/BatchMessagingPrivate.h>

@interface BAMessageEventPayload : NSObject <BatchEventDispatcherPayload>

@property (readonly, nullable) NSString *trackingId;
@property (readonly, nullable) NSString *deeplink;
@property (readonly) BOOL isPositiveAction;
@property (readonly, nullable) BatchMessage *sourceMessage;
@property (readonly, nullable) NSDictionary<NSString *, NSObject *> *notificationUserInfo;
@property (readonly, nullable) NSString *webViewAnalyticsIdentifier;

- (nonnull instancetype)initWithMessage:(nonnull BatchMessage *)message action:(nullable BAMSGAction *)action;
- (nonnull instancetype)initWithMessage:(nonnull BatchMessage *)message
                                 action:(nullable BAMSGAction *)action
             webViewAnalyticsIdentifier:(nullable NSString *)webViewAnalyticsIdentifier;

@end
