//
//  BAWebserviceResponse.m
//  Batch
//
//  https://batch.com
//  Copyright (c) 2014 Batch SDK. All rights reserved.
//

#import <ONSBatch/BAWSResponse.h>

#import <ONSBatch/BAResponseHelper.h>

@implementation BAWSResponse

// Default constructor.
- (instancetype)initWithResponse:(NSDictionary *)response {
    self = [super init];

    if ([BANullHelper isNull:self] == YES) {
        return self;
    }

    if ([BANullHelper isDictionaryEmpty:response] == YES) {
        return nil;
    }

    // Reference is the ID of the query this response references
    NSString *reference = [response objectForKey:kWebserviceKeyQueryIdentifier];

    if ([BANullHelper isStringEmpty:reference] == YES) {
        return nil;
    }

    _reference = reference;

    return self;
}

@end
