//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, NSString;

@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_complications;
    NSMutableDictionary *_editModeConfigurations;
    NSMutableDictionary *_metrics;
    BOOL _resourceDirectoryExists;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL resourceDirectoryExists; // @synthesize resourceDirectoryExists=_resourceDirectoryExists;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)_dateMetricsKeys;
- (void)_applyMetrics:(id)arg1;
- (void)_applyComplicationsDescription:(id)arg1;
- (void)_applyCustomizationDescription:(id)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3;
- (void)addConfigurationKeysToJSONDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_enumerateComplicationsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateEditModeConfigurationsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)setMetricsFromConfiguration:(id)arg1;
- (void)incrementMetricForKey:(id)arg1;
- (void)setMetric:(id)arg1 forKey:(id)arg2;
- (id)metricForKey:(id)arg1;
- (void)appendEditModesToDailySnapshotKey:(id)arg1;
- (id)validationString;
- (id)description;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (id)complicationForSlot:(id)arg1;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)init;

@end
