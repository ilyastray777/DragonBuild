//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSWPPadding;

@protocol TSWPColumnMetrics
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property(readonly, nonatomic) NSUInteger columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) CGSize adjustedInsets;
- (double)positionForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2 outWidth:(double )arg3 outGap:(double )arg4;
- (double)gapForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;

@optional
@property(readonly, nonatomic) double textScaleFactor;
@end
