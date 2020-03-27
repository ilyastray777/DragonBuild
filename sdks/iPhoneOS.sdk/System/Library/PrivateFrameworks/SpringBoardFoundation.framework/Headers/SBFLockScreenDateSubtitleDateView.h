//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

@class NSDate, NSTimeZone, SBFLockScreenAlternateDateLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView
{
    NSTimeZone *_timeZone;
    BOOL _useCompactDateFormat;
    NSDate *_date;
    SBFLockScreenAlternateDateLabel *_alternateDateLabel;
    double _alignmentPercent;
}

+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;
+ (double)subtitleLabelToLunarDateLabelBaselineDifferenceY;
+ (CDStruct_91d2e2b9)dateTimeLunarDateFontMetrics;
+ (id)dateTimeLunarDateFont;
@property(nonatomic) BOOL useCompactDateFormat; // @synthesize useCompactDateFormat=_useCompactDateFormat;
@property(nonatomic) double alignmentPercent; // @synthesize alignmentPercent=_alignmentPercent;
@property(retain, nonatomic) SBFLockScreenAlternateDateLabel *alternateDateLabel; // @synthesize alternateDateLabel=_alternateDateLabel;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (double)_lunarDateLabelYOffsetFromDateLabel;
- (void)_updateDateLabelForCompact;
- (CGRect)alternateDateLabelFrame;
- (CGRect)subtitleLabelFrame;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setStrength:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)_setDate:(id)arg1 inTimeZone:(id)arg2;
- (void)dealloc;
- (void)_setupAlternateDateLabel;
- (void)_overlayCalendarDidChange;
- (id)initWithDate:(id)arg1;

@end
