//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SYAtomicFIFO : NSObject
{
//     struct os_unfair_lock_s _lock;
    NSMutableArray *_store;
}

// - (void).cxx_destruct;
@property(readonly) id tail;
@property(readonly) id head;
- (void)removeAllObjects;
- (id)dequeueUntil:(id /* CDUnknownBlockType */)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;

@end
