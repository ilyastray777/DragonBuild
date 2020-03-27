//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsStrategy-Protocol.h>

@class MapsSuggestionsManager, NSString;

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy>
{
    NSMutableSet _preFilters;
    NSMutableArray _improvers;
    NSMutableArray _dedupers;
    NSMutableSet _postFilters;
    NSMutableArray _previousResults;
    MapsSuggestionsManager *_manager;
}

@property(nonatomic) __weak MapsSuggestionsManager *manager; // @synthesize manager=_manager;
// - (void).cxx_destruct;
- (void)removeAllDedupers;
- (void)addDeduper:(id)arg1;
- (void)removeAllImprovers;
- (void)addImprover:(id)arg1;
- (void)removeAllFilters;
- (void)removeFilter:(id)arg1;
- (void)addPostFilter:(id)arg1;
- (void)addPreFilter:(id)arg1;
- (void)_addFilter:(id)arg1 processingType:(long long)arg2;
- (NSArray )topSuggestionsWithSourceEntries:(NSDictionary )arg1 error:(id )arg2;
- (NSMutableArray )_filteredPreviousResultsCrosscheckingStorage:(NSDictionary )arg1;
- (BOOL)_entry:(id)arg1 existsInStorage:(NSDictionary )arg2;
- (BOOL)_dedupeByEnrichingEntries:(NSMutableArray )arg1 withEntry:(id)arg2;
- (BOOL)_improveEntry:(id)arg1;
- (BOOL)postFiltersKept:(id)arg1;
- (BOOL)preFiltersKept:(id)arg1;
- (NSMutableSet )_filtersForprocessingType:(long long)arg1;
- (void)clearData;
- (id)init;
@property(readonly, nonatomic) NSString *uniqueName;

@end
