//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl, UISegmentedControl;

@interface _HKReportSegmentControl : UIView
{
    UISegmentedControl *_segmentControl;
    UIView *_dividerView;
    UIControl *_rightControl;
}

@property(readonly, nonatomic) UIControl *rightControl; // @synthesize rightControl=_rightControl;
@property(readonly, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(readonly, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
// - (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4;

@end
