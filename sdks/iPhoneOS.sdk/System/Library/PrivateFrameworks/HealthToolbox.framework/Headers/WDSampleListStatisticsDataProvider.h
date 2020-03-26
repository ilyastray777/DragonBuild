//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/WDDataListViewControllerDataProvider-Protocol.h>

@class HKDisplayType, HKUnitPreferenceController, NSMutableArray, NSMutableSet, NSPredicate, WDProfile;

__attribute__((visibility("hidden")))
@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider>
{
    BOOL _hasCompleteDataSet;
    NSPredicate *defaultQueryPredicate;
    NSMutableArray *_data;
    NSMutableArray *_activeDataQueries;
    NSMutableSet *_activeQueryTypes;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKUnitPreferenceController *_unitController;
}

@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSMutableSet *activeQueryTypes; // @synthesize activeQueryTypes=_activeQueryTypes;
@property(retain, nonatomic) NSMutableArray *activeDataQueries; // @synthesize activeDataQueries=_activeDataQueries;
@property(retain) NSMutableArray *data; // @synthesize data=_data;
@property BOOL hasCompleteDataSet; // @synthesize hasCompleteDataSet=_hasCompleteDataSet;
@property(retain, nonatomic) NSPredicate *defaultQueryPredicate; // @synthesize defaultQueryPredicate;
// - (void).cxx_destruct;
- (id)_predicateForTheLastMonth;
- (void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(id /* CDUnknownBlockType */)arg2;
- (void)viewControllerIsNearEndOfScreen;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(NSUInteger)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)deleteAllData;
- (void)removeObjectAtIndex:(NSUInteger)arg1 forSection:(NSUInteger)arg2 sectionRemoved:(BOOL )arg3;
- (void)stopCollectingData;
- (NSUInteger)_statisticsOptionsForSampleType:(id)arg1;
- (void)startCollectingDataWithUpdateHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_handleResultsCollection:(id)arg1 fromQuery:(id)arg2 sampleType:(id)arg3 areComplete:(BOOL)arg4 withError:(id)arg5 updateHandler:(id /* CDUnknownBlockType */)arg6;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
@property(readonly, nonatomic) double customEstimatedCellHeight;
@property(readonly, nonatomic) double customCellHeight;
- (void)customizeTableView:(id)arg1;
@property(readonly, nonatomic) BOOL textAdjustsFontSizeToFitWidth;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)objectAtIndex:(NSUInteger)arg1 forSection:(NSUInteger)arg2;
- (NSUInteger)numberOfObjectsForSection:(NSUInteger)arg1;
- (id)titleForSection:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger numberOfSections;
@property(readonly, nonatomic) long long cellStyle;
- (id)_statisticsAtIndexPath:(id)arg1;
- (id)sampleTypes;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

@end
