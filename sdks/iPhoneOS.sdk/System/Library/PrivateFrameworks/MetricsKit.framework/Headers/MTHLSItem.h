//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTMediaPlaylistItem-Protocol.h>

@class NSArray;

@interface MTHLSItem : NSObject <MTMediaPlaylistItem>
{
    NSUInteger _startOverallPosition;
    long long _startPosition;
    NSArray *_eventData;
}

+ (id /* CDUnknownBlockType */)comparator;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) long long startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) NSUInteger startOverallPosition; // @synthesize startOverallPosition=_startOverallPosition;
// - (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithStartOverallPosition:(NSUInteger)arg1 metricsData:(id)arg2;

@end
