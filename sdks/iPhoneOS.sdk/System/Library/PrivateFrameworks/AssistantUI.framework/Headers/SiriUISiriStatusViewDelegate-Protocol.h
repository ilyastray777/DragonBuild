//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SiriUISiriStatusView;

@protocol SiriUISiriStatusViewDelegate <NSObject>
- (UIEdgeInsets)safeAreaInsetsForSiriStatusView:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidEnd:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidBegin:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewWasTapped:(SiriUISiriStatusView *)arg1;
- (float)audioLevelForSiriStatusView:(SiriUISiriStatusView *)arg1;
@end
