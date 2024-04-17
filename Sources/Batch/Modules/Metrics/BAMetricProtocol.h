//
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//
#import <ONSBatch/BAMetric.h>

@protocol BAMetricProtocol <NSObject>

@required
/// Initialize a new metric child
- (id)newChild:(NSMutableArray<NSString *> *)labels;

@required
/// Reset metric values
- (void)reset;

@end
