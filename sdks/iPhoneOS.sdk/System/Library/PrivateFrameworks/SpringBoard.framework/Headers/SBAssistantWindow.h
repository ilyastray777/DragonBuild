//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWindow.h>

@class SBAssistantRootViewController;

@interface SBAssistantWindow : SBWindow
{
}

+ (BOOL)_isSecure;
+ (BOOL)sb_autorotates;
+ (id)defaultLayoutStrategy;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)isOpaque;
@property(readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController; // @dynamic assistantRootViewController;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;

@end
