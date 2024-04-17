//
//  BatchEventDispatcher.m
//  Batch
//
//  https://batch.com
//  Copyright (c) 2019 Batch SDK. All rights reserved.
//

#import <ONSBatch/BAEventDispatcherCenter.h>
#import <ONSBatch/BAInjection.h>
#import <ONSBatch/BatchEventDispatcher.h>

@implementation BatchEventDispatcher

+ (BOOL)isNotificationEvent:(BatchEventDispatcherType)eventType {
    return eventType == BatchEventDispatcherTypeNotificationOpen;
}

+ (BOOL)isMessagingEvent:(BatchEventDispatcherType)eventType {
    return ![self isNotificationEvent:eventType];
}

+ (void)addDispatcher:(id<BatchEventDispatcherDelegate>)dispatcher {
    [[BAInjection injectClass:BAEventDispatcherCenter.class] addEventDispatcher:dispatcher];
}

+ (void)removeDispatcher:(id<BatchEventDispatcherDelegate>)dispatcher {
    [[BAInjection injectClass:BAEventDispatcherCenter.class] removeEventDispatcher:dispatcher];
}

@end
