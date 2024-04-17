//
//  BAWSResponseAttributesCheck.m
//  Batch
//
//  https://batch.com
//  Copyright (c) 2014 Batch SDK. All rights reserved.
//

#import <ONSBatch/BAWSResponseAttributesCheck.h>

@implementation BAWSResponseAttributesCheck

// Default constructor.
- (instancetype)initWithResponse:(NSDictionary *)response {
    self = [super initWithResponse:response];

    if ([BANullHelper isNull:self] == YES) {
        return nil;
    }

    _actionString = [response objectForKey:@"action"];
    _version = [response objectForKey:@"ver"];
    _time = [response objectForKey:@"t"];

    // Sanity checks yay
    if (![_actionString isKindOfClass:[NSString class]]) {
        _actionString = nil;
    }

    if (![_version isKindOfClass:[NSNumber class]]) {
        _version = nil;
    }

    if (![_time isKindOfClass:[NSNumber class]]) {
        _time = nil;
    }

    return self;
}

- (BAWSResponseAttrCheckAction)action {
    NSString *action = [_actionString uppercaseString];

    if ([@"OK" isEqualToString:action]) {
        return BAWSResponseAttrCheckActionOk;
    } else if ([@"BUMP" isEqualToString:action]) {
        return BAWSResponseAttrCheckActionBump;
    } else if ([@"RECHECK" isEqualToString:action]) {
        return BAWSResponseAttrCheckActionRecheck;
    } else if ([@"RESEND" isEqualToString:action]) {
        return BAWSResponseAttrCheckActionResend;
    }

    return BAWSResponseAttrCheckActionUnknown;
}

@end
