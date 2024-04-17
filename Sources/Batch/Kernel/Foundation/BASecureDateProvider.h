//
//  BASecureDateProvider.h
//  Batch
//
//  Copyright © 2016 Batch. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <ONSBatch/BADateProviderProtocol.h>
#import <ONSBatch/BASystemDateProvider.h>

/**
 Secure Date provider implementation of the BADateProviderProtocol.
 Will return the secure date unless unavailable, otherwise returns the system date
 */
@interface BASecureDateProvider : BASystemDateProvider <BADateProviderProtocol>

@end
