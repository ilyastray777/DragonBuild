//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCornerTextCustomView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKWellnessRichComplicationCornerView : NTKRichComplicationCornerTextCustomView
{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_updateLabelWithTemplate:(id)arg1;
- (void)_updateRingWithTemplate:(id)arg1;
- (void)_showEmptyViewsWithString:(id)arg1 shortText:(id)arg2;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)_outerView;

@end
