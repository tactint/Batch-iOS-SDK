//
//  BAQueryWebserviceClient.h
//  Batch
//
//  https://batch.com
//  Copyright (c) 2014 Batch SDK. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <ONSBatch/BAConnectionDelegate.h>
#import <ONSBatch/BAWSQuery.h>
#import <ONSBatch/BAWSResponse.h>
#import <ONSBatch/BAWebserviceJsonClient.h>

#import <ONSBatch/BAQueryWebserviceClientDatasource.h>
#import <ONSBatch/BAQueryWebserviceClientDelegate.h>
#import <ONSBatch/BAQueryWebserviceIdentifiersProviding.h>

/*!
 @class BAQueryWebservice
 @abstract The unique webservice consumer.
 @discussion Adaptive webservice object.
 */
@interface BAQueryWebserviceClient : BAWebserviceJsonClient <BAConnectionDelegate>

/*!
 @method init
 @warning Never call this method.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nonnull instancetype)initWithDatasource:(nonnull id<BAQueryWebserviceClientDatasource>)datasource
                                  delegate:(nullable id<BAQueryWebserviceClientDelegate>)delegate;

- (nonnull instancetype)initWithDatasource:(nonnull id<BAQueryWebserviceClientDatasource>)datasource
                                  delegate:(nullable id<BAQueryWebserviceClientDelegate>)delegate
                       identifiersProvider:(nonnull id<BAQueryWebserviceIdentifiersProviding>)identifiersProvider;

@end
