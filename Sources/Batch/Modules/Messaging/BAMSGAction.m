//
//  BAMSGAction.m
//  Batch
//
//  Copyright © 2017 Batch. All rights reserved.
//

#import <ONSBatch/BAMSGAction.h>

@implementation BAMSGAction

- (BOOL)isDismissAction {
    return self.actionIdentifier == nil || [@"batch.dismiss" isEqualToString:self.actionIdentifier];
}

@end
