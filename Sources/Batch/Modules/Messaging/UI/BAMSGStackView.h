//
//  BAMSGStackView.h
//  ViewTest
//
//  Copyright © 2016 Batch. All rights reserved.
//

#import <ONSBatch/BAMSGBaseContainerView.h>
#import <ONSBatch/BAMSGStackViewHorizontalItem.h>
#import <ONSBatch/BAMSGStackViewItem.h>
#import <ONSBatch/BAMSGStylableView.h>
#import <UIKit/UIKit.h>

@class BAMSGStackView;

@protocol BAMSGStackViewDelegate <NSObject>

- (nonnull NSString *)separatorPrefixForStackView:(nonnull BAMSGStackView *)stackView;

- (nonnull BACSSRules *)stackView:(nonnull BAMSGStackView *)stackView
              rulesForSeparatorID:(nonnull NSString *)separatorID;

@end

@interface BAMSGStackView : BAMSGBaseContainerView

@property (readonly, nonnull) NSArray<BAMSGStackViewItem *> *items;

@property (weak, nullable) id<BAMSGStackViewDelegate> delegate;

@property bool horizontal;

- (void)addItem:(nonnull BAMSGStackViewItem *)item;

// Size all items equally depending on the orientation
// Mostly used for the CTA horizontal stack view
// Call this _after_ you've added everything
- (void)sizeAllItemsEqually;

@end

@interface BAMSGStackSeparatorView : BAMSGGradientView

@end
