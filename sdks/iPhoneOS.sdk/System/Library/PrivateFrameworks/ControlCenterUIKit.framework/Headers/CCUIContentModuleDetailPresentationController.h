//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>


@class UIViewController;

@interface CCUIContentModuleDetailPresentationController : UIPresentationController <UIGestureRecognizerDelegate>
{
    UIViewController *_anchoringViewController;
}

// - (void).cxx_destruct;
- (double)_preferredExpandedContentHeightForViewController:(id)arg1;
- (double)_preferredExpandedContentWidthForViewController:(id)arg1;
- (void)_handleBackgroundTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (void)containerViewWillLayoutSubviews;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 anchoringViewController:(id)arg3;

@end
