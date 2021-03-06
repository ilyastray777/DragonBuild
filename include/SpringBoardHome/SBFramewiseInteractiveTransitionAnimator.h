//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBViewControllerInteractiveAnimatedTransitioning-Protocol.h>

@protocol SBFramewiseInteractiveTransitionAnimatorDelegate;

@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning>
{
    double _percentComplete;
    BOOL _presenting;
    id <SBFramewiseInteractiveTransitionAnimatorDelegate> _delegate;
}

@property(nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <SBFramewiseInteractiveTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double percentVisible;
- (BOOL)supportsRestarting;
- (double)percentComplete;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;

@end

