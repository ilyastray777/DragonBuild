//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/TVAppTemplateController-Protocol.h>

@class IKViewElement, UIView;

@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController>
{
    id _imageProxy;
    BOOL _loaded;
    UIView *_rightLargeTitleButton;
    struct {
        BOOL respondsToBackroundImageProxy;
        BOOL respondsToBackgroundImageRequiresBlur;
        BOOL respondsToBackdropNeeded;
        BOOL respondsToImageProxySize;
        BOOL respondsToBlurEffectStyle;
        BOOL respondsToPurgeBgImages;
        BOOL respondsToConfigureBgImageBackdropImage;
        BOOL respondsToShouldLoadBackgroundImageAsynchronously;
    } _bgImageLoadingOptions;
    BOOL _appliedNavigationItem;
    IKViewElement *_navigationItemElement;
}

+ (id)_decorateImage:(id)arg1 decorator:(id)arg2;
@property(nonatomic) BOOL appliedNavigationItem; // @synthesize appliedNavigationItem=_appliedNavigationItem;
@property(retain, nonatomic) IKViewElement *navigationItemElement; // @synthesize navigationItemElement=_navigationItemElement;
// - (void).cxx_destruct;
- (id)_stackViewWithMinSpacing:(double)arg1 layoutMargin:(UIEdgeInsets)arg2;
- (void)_updateNavigationItem;
- (void)_updateNavigationBarPadding;
- (void)_reparentNavigationItem:(id)arg1;
- (BOOL)_isNewiOSTVApp;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_dismissViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateNavigationItem:(id)arg1;
- (void)loadFromViewController:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)configureAppearanceTransition;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateWithViewElement:(id)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)_shouldLoadBackgroundImageAsynchronously;
- (long long)_blurEffectStyle;
- (CGSize)_backgroundImageProxySize;
- (BOOL)_isBackdropNeeded;
- (BOOL)_backgroundImageRequiresBlur;
- (id)_backgroundImageProxy;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
