//
//  batchPushCenterTests.m
//  Batch
//
//  https://batch.com
//  Copyright (c) 2014 Batch SDK. All rights reserved.
//

#import <XCTest/XCTest.h>

@import Batch;
@import Batch.Batch_Private;

@interface batchPushCenterTests : XCTestCase

@end

@implementation batchPushCenterTests

- (void)testBasics {
    XCTAssertNotNil([BAPushCenter instance], @"Failed to create a Batch push center instance.");
}

- (void)testIsBatchPush {
    NSDictionary *comBatch = @{@"i" : @(2)};
    NSDictionary *validPayload = @{@"foo" : @"bar", @"foundation.p.ons" : comBatch};
    XCTAssertTrue([BAPushCenter isBatchPush:validPayload]);
    validPayload = @{@"foo" : @"bar", @"foundation.p.ons" : comBatch};
    XCTAssertTrue([BAPushCenter isBatchPush:validPayload]);

    XCTAssertFalse([BAPushCenter isBatchPush:@{@"foundation.p.ons" : @{}}]);
    XCTAssertFalse([BAPushCenter isBatchPush:@{@"foundation.p.ons" : [NSNull null]}]);
    XCTAssertFalse([BAPushCenter isBatchPush:@{@"foundation.p.ons" : @(2)}]);
    XCTAssertFalse([BAPushCenter isBatchPush:@{@"foo" : @"bar"}]);
    XCTAssertFalse([BAPushCenter isBatchPush:@{}]);
    // Force a bad cast to silence the warnings, we still want to test those cases
    XCTAssertFalse([BAPushCenter isBatchPush:(NSDictionary *)@(2)]);
    XCTAssertFalse([BAPushCenter isBatchPush:(NSDictionary *)[NSNull null]]);
    XCTAssertFalse([BAPushCenter isBatchPush:nil]);
}

- (void)testIsBatchPush_public {
    NSDictionary *comBatch = @{@"i" : @(2)};
    NSDictionary *validPayload = @{@"foo" : @"bar", @"foundation.p.ons" : comBatch};
    XCTAssertTrue([BatchPush isBatchPush:validPayload]);
    validPayload = @{@"foo" : @"bar", @"foundation.p.ons" : comBatch};
    XCTAssertTrue([BatchPush isBatchPush:validPayload]);

    XCTAssertFalse([BatchPush isBatchPush:@{@"foundation.p.ons" : @{}}]);
    XCTAssertFalse([BatchPush isBatchPush:@{@"foundation.p.ons" : [NSNull null]}]);
    XCTAssertFalse([BatchPush isBatchPush:@{@"foundation.p.ons" : @(2)}]);
    XCTAssertFalse([BatchPush isBatchPush:@{@"foo" : @"bar"}]);
    XCTAssertFalse([BatchPush isBatchPush:@{}]);
    // Force a bad cast to silence the warnings, we still want to test those cases
    XCTAssertFalse([BatchPush isBatchPush:(NSDictionary *)@(2)]);
    XCTAssertFalse([BatchPush isBatchPush:(NSDictionary *)[NSNull null]]);
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnonnull"
    XCTAssertFalse([BatchPush isBatchPush:nil]);
#pragma clang diagnostic pop
}

@end
