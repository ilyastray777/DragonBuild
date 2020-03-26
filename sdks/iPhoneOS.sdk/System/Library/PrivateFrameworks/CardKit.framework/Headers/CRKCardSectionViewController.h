//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CardKit/CRKCardSectionViewControllingDelegate-Protocol.h>
#import <CardKit/CRKEventResponding-Protocol.h>
#import <CardKit/CRKFeedbackDelegate-Protocol.h>
#import <CardKit/SFFeedbackListener-Protocol.h>

@class CRKCardSectionViewConfiguration, CRKOverlayButton, INUIRemoteViewController, NSArray;
@protocol CRCardSection, CRKCardSectionViewControllerDelegate;

@interface CRKCardSectionViewController : UIViewController <CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding>
{
    CRKOverlayButton *_overlayButton;
    BOOL _loading;
    id <CRKCardSectionViewControllerDelegate> _delegate;
    id <CRCardSection> _cardSection;
    NSArray *_extraCommands;
    INUIRemoteViewController *__remoteViewController;
    CRKCardSectionViewConfiguration *_viewConfiguration;
}

+ (void)_registerWithCardKit;
+ (id)cardSectionViewControllerForViewConfiguration:(id)arg1;
+ (void)registerCardSectionViewController;
+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)arg1;
@property(retain, nonatomic) CRKCardSectionViewConfiguration *viewConfiguration; // @synthesize viewConfiguration=_viewConfiguration;
@property(readonly, nonatomic) INUIRemoteViewController *_remoteViewController; // @synthesize _remoteViewController=__remoteViewController;
@property(retain, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands; // @synthesize extraCommands=_extraCommands;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) __weak id <CRKCardSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (BOOL)shouldHandleEngagement:(id)arg1 forCardSection:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (BOOL)performCommand:(id)arg1 forViewController:(id)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)willDismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2;
- (void)didEngageCardSection:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupCardSectionButtons;
- (void)_setViewExternally:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)_generateCardSectionViewAppearanceFeedback;
- (BOOL)_checkIfCardSectionIsNull:(id)arg1;
- (id)_backingCardSection;
- (BOOL)_shouldHideButtonOverlay;
- (BOOL)_isIndicatingActivity;
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;
- (void)_buttonOverlayWasTouchedDown:(id)arg1;
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;
- (void)_cardSectionTapped;
- (id)_preferredPunchoutCommand;
- (id)_destinationPunchout;
- (id)_commands;
- (BOOL)_shouldRenderButtonOverlay;
- (void)_resumeTouchesIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (void)_finishLoadingViewIfNecessary;
- (void)_loadCardSectionView;
- (void)_performAllCommands;
- (BOOL)_isLoadedWithIntentsUIView;
- (BOOL)_expectsSearchUIView;
- (BOOL)_hasCorrespondingSearchUIView;
- (void)_performCommand:(id)arg1;
- (id)_initWithCardSection:(id)arg1;
- (void)cardEventDidOccur:(NSUInteger)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;

@end
