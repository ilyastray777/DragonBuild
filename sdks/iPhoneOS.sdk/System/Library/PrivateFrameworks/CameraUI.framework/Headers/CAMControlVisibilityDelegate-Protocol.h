//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol CAMControlVisibilityDelegate <NSObject>
@property(readonly, nonatomic) BOOL shouldShiftPreviewForUtilityBar;
@property(readonly, nonatomic) BOOL shouldLayoutLightingNameBadgeAtBottom;
@property(readonly, nonatomic) BOOL shouldHideLightingControl;
@property(readonly, nonatomic) BOOL shouldHideFilterNameBadge;
@property(readonly, nonatomic) BOOL shouldHideQRCodeInstructionLabel;
@property(readonly, nonatomic) BOOL shouldHidePortraitModeInstructionLabel;
@property(readonly, nonatomic) BOOL shouldHideLivePhotoButton;
@property(readonly, nonatomic) BOOL shouldHideElapsedTimeView;
@property(readonly, nonatomic) BOOL shouldHideFlipButton;
@property(readonly, nonatomic) BOOL shouldHideTimerButton;
@property(readonly, nonatomic) BOOL shouldHideHDRButton;
@property(readonly, nonatomic) BOOL shouldHideFlashButton;
@property(readonly, nonatomic) BOOL shouldHideTopBar;
- (BOOL)shouldHideLightingNameBadgeForOrientation:(long long)arg1;
@end
