//
//  BAMSGImageView.h
//  Batch
//
//  Copyright © 2016 Batch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <ONSBatch/BAMSGGradientView.h>
#import <ONSBatch/BAMSGStylableView.h>

@interface BAMSGImageView : BAMSGGradientImageView <BAMSGStylableView>

@property UIRectCorner roundedCorners;
@property BOOL alwaysShowImage;
@property BOOL enableIntrinsicContentSize;

- (void)setup;

@end
