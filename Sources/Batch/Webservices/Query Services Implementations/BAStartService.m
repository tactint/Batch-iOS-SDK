//
//  BAStartService.m
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//

#import <ONSBatch/BAStartService.h>

#import <ONSBatch/BAWebserviceURLBuilder.h>

#import <ONSBatch/BAWSQueryPushToken.h>
#import <ONSBatch/BAWSQueryStart.h>
#import <ONSBatch/BAWSResponsePushToken.h>
#import <ONSBatch/BAWSResponseStart.h>

#import <ONSBatch/BACoreCenter.h>
#import <ONSBatch/BANullHelper.h>
#import <ONSBatch/BAParameter.h>

@implementation BAStartServiceDatasource

- (instancetype)init {
    self = [super init];
    if (self) {
        self.isSilent = false;
    }
    return self;
}

- (NSURL *)requestURL {
    return [BAWebserviceURLBuilder webserviceURLForShortname:self.requestShortIdentifier];
}

- (NSString *)requestIdentifier {
    return @"start";
}

- (NSString *)requestShortIdentifier {
    return @"st";
}

- (NSArray<id<BAWSQuery>> *)queriesToSend {
    NSMutableArray *queries = [[NSMutableArray alloc] initWithCapacity:2];

    BAWSQueryStart *startQuery = [[BAWSQueryStart alloc] init];
    startQuery.isSilent = self.isSilent;

    [queries addObject:startQuery];

    id<BAWSQuery> tokenQuery = [self tokenQuery];
    if (tokenQuery) {
        [queries addObject:tokenQuery];
    }

    return queries;
}

- (nullable BAWSResponse *)responseForQuery:(BAWSQuery *)query content:(NSDictionary *)content {
    if ([query isKindOfClass:[BAWSQueryStart class]]) {
        return [[BAWSResponseStart alloc] initWithResponse:content];
    } else if ([query isKindOfClass:[BAWSQueryPushToken class]]) {
        return [[BAWSResponsePushToken alloc] initWithResponse:content];
    }
    return nil;
}

- (nullable id<BAWSQuery>)tokenQuery {
    NSString *token = [BAParameter objectForKey:kParametersPushTokenKey fallback:@""];

    if ([BANullHelper isStringEmpty:token]) {
        return nil;
    }

    BOOL usesProductionEnvironment = true;
    id savedUsesProductionEnv = [BAParameter objectForKey:kParametersPushTokenIsProductionKey fallback:nil];
    if ([savedUsesProductionEnv isKindOfClass:[NSNumber class]]) {
        usesProductionEnvironment = [savedUsesProductionEnv boolValue];
    } else {
        usesProductionEnvironment = [BACoreCenter.instance.status isLikeProduction];
    }

    return [[BAWSQueryPushToken alloc] initWithToken:token andIsProduction:usesProductionEnvironment];
}

@end
