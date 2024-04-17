//
//  BAWSResponseTracking.m
//  Batch
//
//  https://batch.com
//  Copyright (c) 2014 Batch SDK. All rights reserved.
//

#import <ONSBatch/BAWSResponseTracking.h>

@implementation BAWSResponseTracking

// Default constructor.
- (instancetype)initWithResponse:(NSDictionary *)response {
    self = [super initWithResponse:response];

    if ([BANullHelper isNull:self] == YES) {
        return nil;
    }

    return self;
}

@end
