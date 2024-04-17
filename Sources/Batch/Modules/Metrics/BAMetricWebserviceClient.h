//
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//
#import <Foundation/Foundation.h>

#import <ONSBatch/BAWebserviceMsgPackClient.h>

@interface BAMetricWebserviceClient : BAWebserviceMsgPackClient <BAConnectionDelegate>

- (nullable instancetype)initWithMetrics:(nonnull NSArray *)metrics
                                 success:(void (^_Nullable)(void))successHandler
                                   error:(void (^_Nullable)(NSError *_Nonnull error))errorHandler;

@end
