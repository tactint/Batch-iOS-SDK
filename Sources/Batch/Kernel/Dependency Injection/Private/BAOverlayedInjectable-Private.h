//
//  BAOverlayedInjectable-Private.h
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//
#import <ONSBatch/BAOverlayedInjectable.h>

@interface BAOverlayedInjectable ()

- (nonnull instancetype)initWithCallback:(nonnull BAOverlayedInjectableCallback)callback;

- (nullable id)resolveWithOriginalInstance:(nullable id)originalInstance;

@end
