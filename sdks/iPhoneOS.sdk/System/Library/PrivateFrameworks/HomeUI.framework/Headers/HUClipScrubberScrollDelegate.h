//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HFCameraPlaybackEngine, HMCameraClip, HUClipScrubberDataSource, UICollectionView;

@interface HUClipScrubberScrollDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    BOOL _shouldIgnoreScrolling;
    BOOL _isUserScrubbing;
    BOOL _hasUserInteractedWithScrubber;
    HUClipScrubberDataSource *_dataSource;
    UICollectionView *_clipCollectionView;
    HFCameraPlaybackEngine *_playbackEngine;
    double _lastContentWidth;
    HMCameraClip *_currentClip;
    double _targetScrollOffset;
}

@property(nonatomic) double targetScrollOffset; // @synthesize targetScrollOffset=_targetScrollOffset;
@property(retain, nonatomic) HMCameraClip *currentClip; // @synthesize currentClip=_currentClip;
@property(nonatomic) double lastContentWidth; // @synthesize lastContentWidth=_lastContentWidth;
@property(nonatomic) BOOL hasUserInteractedWithScrubber; // @synthesize hasUserInteractedWithScrubber=_hasUserInteractedWithScrubber;
@property(nonatomic) BOOL isUserScrubbing; // @synthesize isUserScrubbing=_isUserScrubbing;
@property(nonatomic) BOOL shouldIgnoreScrolling; // @synthesize shouldIgnoreScrolling=_shouldIgnoreScrolling;
@property(nonatomic) __weak HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(nonatomic) __weak UICollectionView *clipCollectionView; // @synthesize clipCollectionView=_clipCollectionView;
@property(nonatomic) __weak HUClipScrubberDataSource *dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)_interpolatedDateFromClip:(id)arg1 toClip:(id)arg2 insideRect:(CGRect)arg3 atTimelinePosition:(float)arg4;
- (id)_selectedDateForYesterdayFromPreviousClip:(id)arg1 percentDuration:(float)arg2;
- (id)_selectedDateForTodayFromClip:(id)arg1 percentDuration:(float)arg2;
- (id)_selectedDateForClipInRect:(CGRect)arg1;
- (float)playheadPosition;
- (id)_selectedDateForAreaOfNoActivityAtPoint:(CGPoint)arg1 inScrollView:(id)arg2;
- (void)_handleOutOfBoundsTimelinePosition:(float)arg1;
- (BOOL)_shouldScrollBypassPlaybackEngineUpdate;
- (BOOL)_indexPathContainsClip:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)updateCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (BOOL)_spacerPrecedingClipSpansMultipleDays:(id)arg1;
- (void)finishEditing;
- (void)beginEditing;
- (void)updatePlaybackEngineDate:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end
