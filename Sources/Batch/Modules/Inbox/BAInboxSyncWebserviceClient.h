//
//  BAInboxSyncWebserviceClient.h
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//

#import <ONSBatch/BAInbox.h>
#import <ONSBatch/BAInboxWebserviceClientType.h>
#import <ONSBatch/BAInboxWebserviceResponse.h>
#import <ONSBatch/BAWebserviceJsonClient.h>
#import <Foundation/Foundation.h>

@interface BAInboxSyncWebserviceClient : BAWebserviceJsonClient <BAConnectionDelegate>

- (nullable instancetype)initWithIdentifier:(nonnull NSString *)identifier
                                       type:(BAInboxWebserviceClientType)type
                          authenticationKey:(nullable NSString *)authKey
                                      limit:(NSUInteger)limit
                                  fetcherId:(long long)fetcherId
                                 candidates:(nonnull NSArray<BAInboxCandidateNotification *> *)candidates
                                  fromToken:(nonnull NSString *)from
                                    success:
                                        (void (^_Nullable)(BAInboxWebserviceResponse *_Nonnull response))successHandler
                                      error:(void (^_Nullable)(NSError *_Nonnull error))errorHandler;

@end
