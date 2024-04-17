//
//  BALocalCampaignsService.h
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <ONSBatch/BAQueryWebserviceClientDatasource.h>
#import <ONSBatch/BAQueryWebserviceClientDelegate.h>

#import <ONSBatch/BALocalCampaignCountedEvent.h>

#import <ONSBatch/BALocalCampaignsCenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface BALocalCampaignsServiceDatasource : NSObject <BAQueryWebserviceClientDatasource>

- (instancetype)initWithViewEvents:(nullable NSDictionary<NSString *, BALocalCampaignCountedEvent *> *)viewEvents;

@end

@interface BALocalCampaignsServiceDelegate : NSObject <BAQueryWebserviceClientDelegate>

- (instancetype)initWithLocalCampaignsCenter:(BALocalCampaignsCenter *)center;

@end

NS_ASSUME_NONNULL_END
