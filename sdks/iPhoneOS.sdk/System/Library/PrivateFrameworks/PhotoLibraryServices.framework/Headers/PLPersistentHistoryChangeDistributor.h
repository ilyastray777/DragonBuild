//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, PLCoreDataChangeMerger;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject
{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSPersistentHistoryToken *_lastToken;
    int _notifyToken;
}

// - (void).cxx_destruct;
- (id)localEventFromTransactions:(id)arg1;
- (void)distributeTransactions:(id)arg1;
- (void)forceUserInterfaceReload;
- (id)makeManagedObjectContext;
- (id)fetchTransactionsSinceLastToken;
- (void)distributeNewTransactionsSinceLastToken;
- (void)_inq_stopObservingRemoteNotifications;
- (void)stopObservingRemoteNotifications;
- (void)_inq_startObservingRemoteNotifications;
- (void)startObservingRemoteNotifications;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2;

@end
