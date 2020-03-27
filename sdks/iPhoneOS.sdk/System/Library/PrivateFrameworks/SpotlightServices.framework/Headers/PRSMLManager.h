//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PRSMLManager : NSObject
{
    NSMutableDictionary *_mapPredictionEnginesToClasses;
    NSMutableDictionary *_mapPredictionEnginesToCounts;
    NSMutableDictionary *_mapPredictionEnginesToCountFiles;
    NSMutableDictionary *_mapPredictionEnginesToPredictedTopHit;
    NSMutableDictionary *_dictCoreDuetInfo;
    NSArray *_categoryList;
    NSMutableDictionary *_combinedTopScoreOrder;
    NSMutableDictionary *_combinedBottomScoreOrder;
}

+ (id)createPathToSpotlightPrefFile;
+ (id)getSPMLSharedInstance;
@property(retain) NSMutableDictionary *combinedBottomScoreOrder; // @synthesize combinedBottomScoreOrder=_combinedBottomScoreOrder;
@property(retain) NSMutableDictionary *combinedTopScoreOrder; // @synthesize combinedTopScoreOrder=_combinedTopScoreOrder;
@property(retain) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain) NSMutableDictionary *dictCoreDuetInfo; // @synthesize dictCoreDuetInfo=_dictCoreDuetInfo;
@property(retain) NSMutableDictionary *mapPredictionEnginesToPredictedTopHit; // @synthesize mapPredictionEnginesToPredictedTopHit=_mapPredictionEnginesToPredictedTopHit;
@property(retain) NSMutableDictionary *mapPredictionEnginesToCountFiles; // @synthesize mapPredictionEnginesToCountFiles=_mapPredictionEnginesToCountFiles;
@property(retain) NSMutableDictionary *mapPredictionEnginesToCounts; // @synthesize mapPredictionEnginesToCounts=_mapPredictionEnginesToCounts;
@property(retain) NSMutableDictionary *mapPredictionEnginesToClasses; // @synthesize mapPredictionEnginesToClasses=_mapPredictionEnginesToClasses;
// - (void).cxx_destruct;
- (void)dumpPredictionStatsToFlatFiles;
- (void)saveLastRankingForCategories:(id)arg1;
- (id)getRankedCategoriesAsDictionaryForDays:(long long)arg1;
- (NSUInteger)getCountForCategory:(id)arg1;
- (NSUInteger)getTotalResultsUsedCountForDuet;
- (id)getLastSavedCategoryRankings;
- (void)addCategoryAndGroupNameToTrainCategories:(id)arg1 groupName:(id)arg2;
- (id)initManager;

@end
