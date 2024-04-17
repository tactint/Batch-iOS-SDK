#import <ONSBatch/BACSS.h>
#import <ONSBatch/BACSSParser.h>
#import <ONSBatch/BAMSGAction.h>
#import <ONSBatch/BAMSGMessage.h>
#import <ONSBatch/BAMSGOverlayWindow.h>
#import <ONSBatch/BAMSGPannableAnchoredContainerView.h>
#import <ONSBatch/BAMSGStackView.h>
#import <ONSBatch/BAMSGViewController.h>
#import <ONSBatch/BAMSGWindowHolder.h>
#import <ONSBatch/BatchMessaging.h>
#import <ONSBatch/BatchMessagingModels.h>
#import <UIKit/UIKit.h>

/**
 Handles banner display

 This is also the view controller used for Modal view, as they're basically a centered banner.
 Sadly, we don't have a better name for it, so we'll call it banner. Sorry.
 */
@interface BAMSGBaseBannerViewController : BAMSGViewController <BatchMessagingViewController,
                                                                BAMSGStackViewDelegate,
                                                                BAMSGPannableContainerViewDelegate,
                                                                BAMSGWindowHolder,
                                                                UIGestureRecognizerDelegate>

@property (nullable) NSString *titleText;
@property (nullable) NSString *bodyText;
@property (nullable) BAMSGHTMLText *bodyHtml;
@property BAMSGBannerCTADirection ctaStackDirection;
@property (nullable) BAMSGAction *globalTapAction;
@property NSTimeInterval globalTapDelay;
@property BOOL allowSwipeToDismiss;
@property (nullable) NSString *imageURL;
@property (nullable) NSString *imageDescription;

@property (nullable, weak) BAMSGOverlayWindow *presentingWindow;
@property (nullable, weak) UIWindow *overlayedWindow;

@property (nullable) BAMSGMessageBaseBanner *messageDescription;

- (nonnull instancetype)initWithStyleRules:(nonnull BACSSDocument *)style;

- (BOOL)canBeClosed;

- (void)didDetectGlobalTap:(nullable UIGestureRecognizer *)gestureRecognizer;

@end
