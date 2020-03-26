//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WLKArtworkVariantListing : NSObject
{
    NSArray *_artworkVariants;
}

@property(readonly, copy, nonatomic) NSArray *artworkVariants; // @synthesize artworkVariants=_artworkVariants;
// - (void).cxx_destruct;
- (id)artworkVariantOfType:(long long)arg1;
- (id)bestArtworkVariantOfType:(long long)arg1 forSize:(CGSize)arg2;
- (id)bestArtworkVariantForSize:(CGSize)arg1;
- (id)initWithArtworkDictionary:(id)arg1;

@end
