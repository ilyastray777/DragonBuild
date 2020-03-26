//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSAnimationSettings, SBWorkspaceApplicationSceneTransitionContext;

@protocol SBSwitcherAnimatedTransitioning <NSObject>
@property(readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property(readonly, nonatomic) BOOL canInterruptActiveTransition;
- (void)performTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(void (^)(void (^)(BOOL, BOOL) (^)(NSString *)))arg3 completion:(void (^)(BOOL))arg4;
@end
