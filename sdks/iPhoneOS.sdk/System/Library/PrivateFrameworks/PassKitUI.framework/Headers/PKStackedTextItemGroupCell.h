//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKStackedTextItemGroup, PKStackedTextItemGroupView;

@interface PKStackedTextItemGroupCell : PKTableViewCell
{
    PKStackedTextItemGroupView *_groupView;
    long long _style;
    BOOL _animated;
}

// - (void).cxx_destruct;
- (void)setContent:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) PKStackedTextItemGroup *content;
- (CGRect)_separatorFrame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (id)initWithGroupViewStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;

@end
