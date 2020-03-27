//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NUCrossFadeViewAnimator, NUTextAndGlyphView, NUTitleViewUpdate, UIImageView, UILabel;
@protocol NUTitleViewStyler;

@interface NUCrossFadeTitleView : UIView
{
    id <NUTitleViewStyler> _styler;
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    NUTextAndGlyphView *_textAndGlyphView;
    NSUInteger _displayValueType;
    NUCrossFadeViewAnimator *_animator;
    NUTitleViewUpdate *_update;
}

@property(retain, nonatomic) NUTitleViewUpdate *update; // @synthesize update=_update;
@property(readonly, nonatomic) NUCrossFadeViewAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) NSUInteger displayValueType; // @synthesize displayValueType=_displayValueType;
@property(readonly, nonatomic) NUTextAndGlyphView *textAndGlyphView; // @synthesize textAndGlyphView=_textAndGlyphView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) id <NUTitleViewStyler> styler; // @synthesize styler=_styler;
// - (void).cxx_destruct;
- (id)_applyStylesToTextAndGlyph:(id)arg1 styleType:(NSUInteger)arg2;
- (id)_applyStylesToText:(id)arg1 styleType:(NSUInteger)arg2;
- (id)applyStylesToValueFromTitleViewUpdate:(id)arg1;
- (id)viewForValueType:(NSUInteger)arg1;
- (void)relayoutWithAnimation:(BOOL)arg1;
@property(readonly, nonatomic) CGRect visibleFrame;
- (void)updateTitleViewWithUpdate:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithStyler:(id)arg1;

@end
