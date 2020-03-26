//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKChallengeDataSource, GKCollectionMultiDataSource, GKDashboardHeaderView, GKGameRecord, NSArray, NSMutableDictionary, NSString;

@interface GKDashboardViewController : GKDashboardCollectionViewController
{
    BOOL _shouldShowPlayForChallenge;
    BOOL _shouldShowPlayForTurnBasedMatch;
    BOOL _shouldShowQuitForTurnBasedMatch;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    GKGameRecord *_gameRecord;
    GKDashboardHeaderView *_headerView;
    GKCollectionMultiDataSource *_multiDataSource;
    NSMutableDictionary *_viewStateIndexes;
    NSArray *_titles;
    GKChallengeDataSource *_challengeDataSource;
}

@property(nonatomic) GKChallengeDataSource *challengeDataSource; // @synthesize challengeDataSource=_challengeDataSource;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSMutableDictionary *viewStateIndexes; // @synthesize viewStateIndexes=_viewStateIndexes;
@property(retain, nonatomic) GKCollectionMultiDataSource *multiDataSource; // @synthesize multiDataSource=_multiDataSource;
@property(retain, nonatomic) GKDashboardHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) BOOL shouldShowQuitForTurnBasedMatch; // @synthesize shouldShowQuitForTurnBasedMatch=_shouldShowQuitForTurnBasedMatch;
@property(nonatomic) BOOL shouldShowPlayForTurnBasedMatch; // @synthesize shouldShowPlayForTurnBasedMatch=_shouldShowPlayForTurnBasedMatch;
@property(nonatomic) BOOL shouldShowPlayForChallenge; // @synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void)selectedSegmentChanged:(id)arg1;
- (void)showLeaderboardVC;
@property(nonatomic) long long leaderboardTimeScope;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)loadData;
- (void)selectDataSourceAtIndex:(long long)arg1 updateCollectionView:(BOOL)arg2;
- (void)addDataSource:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3;
- (void)setupSegmentedControl;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1;

@end
