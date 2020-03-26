//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class GKBubbleFlowContainerView, NSMutableDictionary, NSString, OBBoldTrayButton, OBPrivacyLinkController, UILabel, UIView;
@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingViewController : UIViewController <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    BOOL _presenting;
    id <GKOnboardingFlowDelegate> _delegate;
    NSString *_lastPersonalizationVersionDisplayed;
    NSUInteger _lastPrivacyNoticeVersionDisplayed;
    NSMutableDictionary *_analyticsPayload;
    UIView *_privacyContainer;
    UIView *_bubblePlaceholder;
    UIView *_buttonContainer;
    OBBoldTrayButton *_nextButton;
    GKBubbleFlowContainerView *_bubblesContainerView;
    UIView *_bubblesAnchorView;
    UILabel *_mainTitle;
    UILabel *_subTitle;
    OBPrivacyLinkController *_privacyLink;
    double _transitionDuration;
}

@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UIView *bubblesAnchorView; // @synthesize bubblesAnchorView=_bubblesAnchorView;
@property(retain, nonatomic) GKBubbleFlowContainerView *bubblesContainerView; // @synthesize bubblesContainerView=_bubblesContainerView;
@property(retain, nonatomic) OBBoldTrayButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) UIView *bubblePlaceholder; // @synthesize bubblePlaceholder=_bubblePlaceholder;
@property(retain, nonatomic) UIView *privacyContainer; // @synthesize privacyContainer=_privacyContainer;
@property(retain, nonatomic) NSMutableDictionary *analyticsPayload; // @synthesize analyticsPayload=_analyticsPayload;
@property(nonatomic) NSUInteger lastPrivacyNoticeVersionDisplayed; // @synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed;
@property(retain, nonatomic) NSString *lastPersonalizationVersionDisplayed; // @synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed;
@property(nonatomic) __weak id <GKOnboardingFlowDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)removeConstraintsForView:(id)arg1;
- (id)basicAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)updateBubbleRectsWithScale:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)didDisplayPrivacyNotice;
- (void)viewSafeAreaInsetsDidChange;
- (void)showSignOutAlert;
- (void)presentPersonalizationScreen;
- (BOOL)shouldPresentPersonalizationScreen;
- (void)nextPressed:(id)arg1;
- (void)signOutPressed:(id)arg1;
- (void)constrainTextInView:(id)arg1 toFontSize:(double)arg2;
- (void)addPrivacyLink;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end
