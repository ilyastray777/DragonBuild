//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSSpeechEndHostTimeEstimator : NSObject
{
    BOOL _endPointNotified;
    NSUInteger _numAudioSampleForwarded;
    NSUInteger _lastAudioChunkHostTime;
    double _trailingSilenceDurationAtEndpoint;
}

@property(nonatomic) double trailingSilenceDurationAtEndpoint; // @synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint;
@property(nonatomic) BOOL endPointNotified; // @synthesize endPointNotified=_endPointNotified;
@property(nonatomic) NSUInteger lastAudioChunkHostTime; // @synthesize lastAudioChunkHostTime=_lastAudioChunkHostTime;
@property(nonatomic) NSUInteger numAudioSampleForwarded; // @synthesize numAudioSampleForwarded=_numAudioSampleForwarded;
- (NSUInteger)estimatedSpeechEndHostTime;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)arg1;
- (void)addNumSamples:(NSUInteger)arg1 hostTime:(NSUInteger)arg2;
- (void)reset;
- (id)init;

@end
