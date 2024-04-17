//
//  BAEventDispatcherCenter.h
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//

#import <ONSBatch/BACenterMulticastDelegate.h>
#import <ONSBatch/BAMSGAction.h>
#import <ONSBatch/BAMessageEventPayload.h>
#import <ONSBatch/BAOptOut.h>
#import <ONSBatch/BAPushEventPayload.h>
#import <ONSBatch/BAPushPayload.h>
#import <ONSBatch/BatchEventDispatcher.h>

@interface BAEventDispatcherCenter : NSObject <BACenterProtocol>

@property (readonly, nonnull) NSMutableSet<id<BatchEventDispatcherDelegate>> *dispatchers;

+ (nullable BAMessageEventPayload *)messageEventPayloadFromMessage:(nonnull BatchMessage *)message;

+ (nullable BAMessageEventPayload *)messageEventPayloadFromMessage:(nonnull BatchMessage *)message
                                                            action:(nullable BAMSGAction *)msgAction;

+ (nullable BAMessageEventPayload *)messageEventPayloadFromMessage:(nonnull BatchMessage *)message
                                                            action:(nullable BAMSGAction *)msgAction
                                        webViewAnalyticsIdentifier:(nullable NSString *)webViewAnalyticsIdentifier;

- (void)addEventDispatcher:(nonnull id<BatchEventDispatcherDelegate>)dispatcher;

- (void)removeEventDispatcher:(nonnull id<BatchEventDispatcherDelegate>)dispatcher;

- (nonnull NSDictionary *)dispatchersAnalyticRepresentation;

- (void)dispatchEventWithType:(BatchEventDispatcherType)type payload:(nonnull id<BatchEventDispatcherPayload>)payload;

@end
