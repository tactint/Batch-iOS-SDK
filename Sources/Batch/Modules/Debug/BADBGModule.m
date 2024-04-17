#import <ONSBatch/BADBGModule.h>

#import <ONSBatch/BADBGDebugViewController.h>

@implementation BADBGModule

+ (UIViewController *)debugViewController {
    return [[UINavigationController alloc] initWithRootViewController:[BADBGDebugViewController new]];
}

@end
