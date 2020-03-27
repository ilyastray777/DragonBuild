//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADShade.h>

__attribute__((visibility("hidden")))
@interface OADLinearShade : OADShade
{
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isScaledOverridden;
- (void)setScaled:(BOOL)arg1;
- (BOOL)scaled;
- (BOOL)isAngleOverridden;
- (void)setAngle:(float)arg1;
- (float)angle;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)isAnythingOverridden;
- (id)initWithDefaults;
// - (id)copyWithZone:(_NSZone )arg1;

@end
