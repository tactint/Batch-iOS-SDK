//
//  BAMSGPannableContainerView.h
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//

#import <ONSBatch/BAMSGBaseContainerView.h>

@protocol BAMSGPannableContainerViewDelegate <NSObject>

- (void)pannableContainerWasDismissed:(BAMSGBaseContainerView *_Nonnull)container;

@end

@protocol BAMSGPannableContainerView <NSObject>

@property (weak, nullable) id<BAMSGPannableContainerViewDelegate> delegate;

@end
