//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class BSPortDeathWatcher, CAContext, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSnapshotCATransactionHandler : HMFObject <HMFLogging>
{
    CAContext *_snapshotContext;
    NSObject<OS_dispatch_queue> *_clientQueue;
    BSPortDeathWatcher *_backboardServicesWatcher;
}

+ (id)logCategory;
+ (id)sharedHandler;
@property(retain, nonatomic) BSPortDeathWatcher *backboardServicesWatcher; // @synthesize backboardServicesWatcher=_backboardServicesWatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) CAContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
// - (void).cxx_destruct;
- (CGImage )createSnapshotCGImageRef:(id)arg1;
- (void)_deleteSlot:(id)arg1 filePath:(id)arg2 snapshotCATransaction:(id)arg3;
- (void)deleteSlot:(id)arg1 filePath:(id)arg2;
- (id)_createSlot:(id)arg1 snapshotCATransaction:(id)arg2;
- (id)createSlot:(id)arg1;
- (void)_backboardServicesRelaunched;
- (void)_createSnapshotContext;
- (id)init;

@end
