//
//  BAStandardQueryWebserviceIdentifiersProvider.m
//  Batch
//
//  Copyright © Batch.com. All rights reserved.
//

#import <ONSBatch/BAStandardQueryWebserviceIdentifiersProvider.h>

#import <ONSBatch/BABundleInfo.h>
#import <ONSBatch/BACoreCenter.h>
#import <ONSBatch/BAParameter.h>
#import <ONSBatch/BAPropertiesCenter.h>

@implementation BAStandardQueryWebserviceIdentifiersProvider

+ (instancetype)sharedInstance {
    static BAStandardQueryWebserviceIdentifiersProvider *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      instance = [BAStandardQueryWebserviceIdentifiersProvider new];
    });
    return instance;
}

- (NSDictionary<NSString *, NSString *> *)identifiers {
    NSMutableDictionary *ids = [[NSMutableDictionary alloc] init];
    // Always add the installation id
    NSString *di = [BAPropertiesCenter valueForShortName:@"di"];
    if (![BANullHelper isStringEmpty:di]) {
        ids[@"di"] = di;
    }

    // Grab the identifiers list.
    NSString *idsList = [BAParameter objectForKey:kParametersIDsPatternKey fallback:kParametersIDsPatternValue];
    NSArray *baseIds = [idsList componentsSeparatedByString:@","];

    NSString *advancedIdsList = [BAParameter objectForKey:kParametersAdvancedIDsPatternKey
                                                 fallback:kParametersAdvancedIDsPatternValue];
    NSArray *advancedIds = nil;

    if (![BANullHelper isStringEmpty:advancedIdsList] &&
        [[BACoreCenter instance].configuration useAdvancedDeviceInformation]) {
        advancedIds = [advancedIdsList componentsSeparatedByString:@","];
    }

    NSMutableArray<NSString *> *idsToFetch =
        [[NSMutableArray alloc] initWithCapacity:(baseIds.count + advancedIds.count)];
    if (baseIds) {
        [idsToFetch addObjectsFromArray:baseIds];
    }
    if (advancedIds) {
        [idsToFetch addObjectsFromArray:advancedIds];
    }

    // Add references.
    for (NSString *idName in idsToFetch) {
        if (![BANullHelper isStringEmpty:idName]) {
            NSString *propertyValue = [BAPropertiesCenter valueForShortName:idName];
            if (![BANullHelper isStringEmpty:propertyValue]) {
                [ids setObject:propertyValue forKey:idName];
            }
        }
    }

    return ids;
}

@end
