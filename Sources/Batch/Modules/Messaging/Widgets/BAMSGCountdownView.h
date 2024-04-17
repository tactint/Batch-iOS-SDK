#import <UIKit/UIKit.h>

#import <ONSBatch/BAMSGStylableView.h>

@interface BAMSGCountdownView : UIView <BAMSGStylableView>

/**
 Set the progression percentage, between 0 and 1
 */
- (void)setPercentage:(float)percentage;

- (void)setColor:(nonnull UIColor *)color;

@end
