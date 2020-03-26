//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSURL, UIImageView, UILabel;

@interface NUArticleExcerptReadMoreButton : UIButton
{
    NSUInteger _excerptLenthType;
    NSURL *_domainURL;
    UILabel *_readStoryLabel;
    UILabel *_domainLabel;
    UIImageView *_arrowImageView;
}

+ (id)arrowImage;
+ (double)readMoreButtonHeight;
@property(readonly, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(readonly, nonatomic) UILabel *domainLabel; // @synthesize domainLabel=_domainLabel;
@property(readonly, nonatomic) UILabel *readStoryLabel; // @synthesize readStoryLabel=_readStoryLabel;
@property(retain, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
@property(nonatomic) NSUInteger excerptLenthType; // @synthesize excerptLenthType=_excerptLenthType;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end
