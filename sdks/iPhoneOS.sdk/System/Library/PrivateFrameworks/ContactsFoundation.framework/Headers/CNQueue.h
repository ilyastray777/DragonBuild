//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol CNQueueingStrategy;

@interface CNQueue : NSObject
{
    NSMutableArray *_buffer;
    id <CNQueueingStrategy> _strategy;
}

+ (id)boundedQueueWithCapacity:(NSUInteger)arg1 overflowHandler:(id /* CDUnknownBlockType */)arg2;
+ (id)boundedQueueWithCapacity:(NSUInteger)arg1;
+ (id)priorityQueueWithComparator:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) id <CNQueueingStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
// - (void).cxx_destruct;
- (id)drain;
- (void)dequeueObject:(id)arg1;
- (id)dequeue;
- (id)peek;
- (void)enqueueObjectsFromArray:(id)arg1;
- (void)enqueue:(id)arg1;
@property(readonly) NSArray *allObjects;
@property(readonly) NSUInteger count;
- (id)initWithStrategy:(id)arg1;
- (id)init;

@end
