//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler>
{
    NSUInteger _clock;
    NSUInteger _nextSchedulableTick;
    NSUInteger _stopTime;
    CNQueue *_queue;
    BOOL _isStarted;
    BOOL _isPerforming;
}

+ (NSUInteger)timeWithDelay:(double)arg1 fromClock:(NSUInteger)arg2;
+ (id)providerWithScheduler:(id)arg1;
@property(readonly, nonatomic) BOOL isPerforming; // @synthesize isPerforming=_isPerforming;
@property(readonly, nonatomic) BOOL isStarted; // @synthesize isStarted=_isStarted;
@property(readonly, nonatomic) CNQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSUInteger stopTime; // @synthesize stopTime=_stopTime;
@property(readonly, nonatomic) NSUInteger nextSchedulableTick; // @synthesize nextSchedulableTick=_nextSchedulableTick;
@property(readonly) NSUInteger clock; // @synthesize clock=_clock;
// - (void).cxx_destruct;
- (BOOL)hasJobsScheduled;
- (void)stop;
- (BOOL)_performJobs;
- (void)advanceTo:(NSUInteger)arg1;
- (void)advanceBy:(NSUInteger)arg1;
- (void)start;
- (NSUInteger)_nextSchedulableTick;
- (id)_scheduleBlock:(id /* CDUnknownBlockType */)arg1 atTime:(NSUInteger)arg2;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(id /* CDUnknownBlockType */)arg2 qualityOfService:(NSUInteger)arg3;
- (id)afterDelay:(double)arg1 performBlock:(id /* CDUnknownBlockType */)arg2;
- (id)performCancelableBlock:(id /* CDUnknownBlockType */)arg1 qualityOfService:(NSUInteger)arg2;
- (id)performCancelableBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1 qualityOfService:(NSUInteger)arg2;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

@end
