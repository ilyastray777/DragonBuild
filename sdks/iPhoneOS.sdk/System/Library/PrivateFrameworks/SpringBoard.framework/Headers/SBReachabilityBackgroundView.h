//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBHomeGrabberDelegate-Protocol.h>

@class CAShapeLayer, SBHomeGrabberView, SBWallpaperEffectView, UIViewFloatAnimatableProperty;

@interface SBReachabilityBackgroundView : UIView <SBHomeGrabberDelegate>
{
    UIView *_wallpaperContainerView;
    SBWallpaperEffectView *_topWallpaperEffectView;
    SBWallpaperEffectView *_bottomWallpaperEffectView;
    UIView *_hitTestBlockerView;
    long long _wallpaperVariant;
    SBHomeGrabberView *_homeGrabberView;
    CAShapeLayer *_chevronLayer;
    UIViewFloatAnimatableProperty *_chevronShapeAnimatableProperty;
    double _containerViewYOffset;
    double _homeGrabberAdditionalOffset;
}

@property(nonatomic) double homeGrabberAdditionalOffset; // @synthesize homeGrabberAdditionalOffset=_homeGrabberAdditionalOffset;
@property(nonatomic) double containerViewYOffset; // @synthesize containerViewYOffset=_containerViewYOffset;
@property(nonatomic) long long wallpaperVariant; // @synthesize wallpaperVariant=_wallpaperVariant;
// - (void).cxx_destruct;
- (void)_setupHitTestBlockerView;
- (void)_setupHomeGrabberView;
- (void)_updateChevronPathForUpFraction:(double)arg1;
- (void)_setupChevron;
- (void)_setupCornerContentsImageForWallpaperEffectView:(id)arg1;
- (double)_displayCornerRadius;
- (void)_updateWallpaperEffectViewAnimated:(BOOL)arg1;
- (id)_newWallpaperEffectViewForVariant:(long long)arg1;
- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
@property(nonatomic) double chevronAlpha;
@property(nonatomic) double homeGrabberAlpha;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 wallpaperVariant:(long long)arg2;

@end
