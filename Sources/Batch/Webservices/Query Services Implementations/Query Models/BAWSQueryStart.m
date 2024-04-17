//
//  BAWebserviceQueryNewStart.m
//  Batch
//
//  https://batch.com
//  Copyright (c) 2014 Batch SDK. All rights reserved.
//

#import <ONSBatch/BAWSQueryStart.h>

#import <ONSBatch/BAThreading.h>

@implementation BAWSQueryStart

// Standard constructor.
- (instancetype)init {
    self = [super initWithType:kQueryWebserviceTypeStart];
    self.isSilent = false;
    return self;
}

// Build the basic object to send to the server as a query.
- (NSMutableDictionary *)objectToSend;
{
    NSMutableDictionary *dictionary = [super objectToSend];
    [dictionary setValue:@(self.isSilent) forKey:kWebserviceKeyQuerySilentStart];

    return dictionary;
}

@end
