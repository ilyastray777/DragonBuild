//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDSearchableIndexManager.h>

#import <Message/EDSearchableIndexReasonProvider-Protocol.h>

@class EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSSet;

@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager <EDSearchableIndexReasonProvider>
{
//     struct os_unfair_lock_s _indexLock;
    EDSearchableIndex *_index;
    EDSearchableIndexPersistence *_persistence;
    EDSearchableIndexScheduler *_scheduler;
}

@property(retain, nonatomic) EDSearchableIndexScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) EDSearchableIndexPersistence *persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) EDSearchableIndex *index; // @synthesize index=_index;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *currentReasons;
@property(readonly, copy, nonatomic) NSSet *exclusionReasons;
@property(readonly, copy, nonatomic) NSSet *purgeReasons;
@property(readonly, copy, nonatomic) NSSet *dataSourceRefreshReasons;
- (void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2;
- (void)enableIndexingAndBeginScheduling:(BOOL)arg1;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;

@end
