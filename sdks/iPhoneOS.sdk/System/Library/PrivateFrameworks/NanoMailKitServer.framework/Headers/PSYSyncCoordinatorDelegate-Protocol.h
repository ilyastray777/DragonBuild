//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PSYServiceSyncSession, PSYSyncCoordinator;

@protocol PSYSyncCoordinatorDelegate <NSObject>

@optional
- (void)syncCoordinatorDidReceiveStartSyncCommand:(PSYSyncCoordinator *)arg1;
- (void)supportsMigrationSync;
- (void)syncCoordinatorDidChangeSyncRestriction:(PSYSyncCoordinator *)arg1;
- (void)syncCoordinator:(PSYSyncCoordinator *)arg1 didInvalidateSyncSession:(PSYServiceSyncSession *)arg2;
- (void)syncCoordinator:(PSYSyncCoordinator *)arg1 beginSyncSession:(PSYServiceSyncSession *)arg2;
@end
