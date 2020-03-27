//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying>
{
    NSSet *_keys;
}

+ (void)resetRegisteredBagKeySets;
+ (id)registeredBagKeySetForProfile:(id)arg1 profileVersion:(id)arg2;
+ (void)registerBagKeySet:(id)arg1 forProfile:(id)arg2 profileVersion:(id)arg3;
+ (id)bagKeySetCacheAccessQueue;
+ (id)bagKeySetCache;
@property(readonly, nonatomic) NSSet *keys; // @synthesize keys=_keys;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)hasKey:(id)arg1;
- (id)description;
- (id)bagKeyInfoForKey:(id)arg1;
@property(readonly, nonatomic) NSUInteger count;

@end
