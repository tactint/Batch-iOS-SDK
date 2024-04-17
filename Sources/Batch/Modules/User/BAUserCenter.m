//
//  BAUserCenter.m
//  Batch
//
//  https://batch.com
//  Copyright (c) 2015 Batch SDK. All rights reserved.
//

#import <ONSBatch/BALogger.h>
#import <ONSBatch/BANotificationCenter.h>
#import <ONSBatch/BAOptOut.h>
#import <ONSBatch/BAParameter.h>
#import <ONSBatch/BAUserCenter.h>
#import <ONSBatch/BAUserDataManager.h>

/*
 @abstract Class responsible
 */
@implementation BAUserCenter

+ (void)batchWillStart {
    [BAUserDataManager startAttributesCheckWSWithDelay:[kParametersUserStartCheckInitialDelay longLongValue]];
    [[BANotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(optOutValueDidChange:)
                                                 name:kBATOptOutChangedNotification
                                               object:nil];

    NSNumber *lastFailure = [BAParameter objectForKey:kParametersCipherV2LastFailure
                                          kindOfClass:[NSNumber class]
                                             fallback:nil];
    if (lastFailure != nil) {
        double now = [[NSDate date] timeIntervalSince1970] - kCipherFallbackResetTime; // 2 days
        if ([lastFailure doubleValue] < now) {
            [BAParameter removeObjectForKey:kParametersCipherV2LastFailure];
        }
    }
}

+ (void)optOutValueDidChange:(NSNotification *)notification {
    if ([@(true) isEqualToNumber:[notification.userInfo objectForKey:kBATOptOutWipeDataKey]]) {
        [BALogger debugForDomain:@"BAUserCenter" message:@"Wiping user data"];
        [BAUserDataManager clearData];
    }
}

@end
