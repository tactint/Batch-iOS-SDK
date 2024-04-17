//
//  BAWSResponseTracking.h
//  Batch
//
//  https://batch.com
//  Copyright (c) 2014 Batch SDK. All rights reserved.
//

#import <ONSBatch/BAWSResponse.h>

/*!
 @class BAWSResponseTracking
 @abstract Response of a BAWebserviceQueryTracking.
 @discussion Build and serialize the response to the query.
 */
@interface BAWSResponseTracking : BAWSResponse <BAWSResponse>

/*!
 @method init
 @warning Never call this method.
 */
- (instancetype)init NS_UNAVAILABLE;

@end
