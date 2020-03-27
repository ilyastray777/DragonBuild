//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AVTAvatarColorVariationStore, NSDictionary;

@interface AVTEditingModelColors : NSObject <NSCopying>
{
    AVTAvatarColorVariationStore *_variationStore;
    NSDictionary _storage;
}

+ (void)createColorsForPaletteCategory:(long long)arg1 inCache:(id)arg2 withDerivedPaletteCategories:(id)arg3;
+ (id)buildAllColors;
@property(readonly, nonatomic) NSDictionary *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) AVTAvatarColorVariationStore *variationStore; // @synthesize variationStore=_variationStore;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)colorsForSettingKind:(CDStruct_597dd055)arg1;
- (id)colorForSettingKind:(CDStruct_597dd055)arg1 identifier:(id)arg2;
- (id)initWithStorage:(NSDictionary )arg1 variationStore:(id)arg2;
- (id)init;

@end
