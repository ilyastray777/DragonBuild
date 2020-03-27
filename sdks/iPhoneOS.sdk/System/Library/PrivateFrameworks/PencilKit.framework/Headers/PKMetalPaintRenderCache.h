//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKStrokeRenderCache-Protocol.h>

@class NSArray, NSMutableArray;

@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache>
{
    NSMutableArray *_buffers;
    NSUInteger _totalCost;
}

// - (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)arg1;
- (NSUInteger)inkVersion;
- (BOOL)needsCompute;
- (NSUInteger)cacheCost;
@property(readonly, nonatomic) NSArray *buffers; // @dynamic buffers;
- (void)addBuffer:(id)arg1;
- (id)init;

@end
