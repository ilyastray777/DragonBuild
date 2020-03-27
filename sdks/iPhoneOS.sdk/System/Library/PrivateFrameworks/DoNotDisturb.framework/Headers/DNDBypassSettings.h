//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSUInteger _immediateBypassEventSourceType;
    NSString *_immediateBypassCNGroupIdentifier;
    NSUInteger _repeatEventSourceBehaviorEnabledSetting;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger repeatEventSourceBehaviorEnabledSetting; // @synthesize repeatEventSourceBehaviorEnabledSetting=_repeatEventSourceBehaviorEnabledSetting;
@property(readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier; // @synthesize immediateBypassCNGroupIdentifier=_immediateBypassCNGroupIdentifier;
@property(readonly, nonatomic) NSUInteger immediateBypassEventSourceType; // @synthesize immediateBypassEventSourceType=_immediateBypassEventSourceType;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)_initWithImmediateBypassEventSourceType:(NSUInteger)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(NSUInteger)arg3;
- (id)_initWithSettings:(id)arg1;
- (id)init;

@end
