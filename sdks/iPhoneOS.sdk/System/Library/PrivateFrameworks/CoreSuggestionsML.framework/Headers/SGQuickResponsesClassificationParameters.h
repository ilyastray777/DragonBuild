//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQuickResponsesClassificationParameters : NSObject
{
    double _positiveSamplingRate;
    double _negativeSamplingRate;
    NSUInteger _maxPromptLength;
    double _maxPromptWindowSeconds;
    NSString *_promptJoiningString;
}

@property(readonly, nonatomic) NSString *promptJoiningString; // @synthesize promptJoiningString=_promptJoiningString;
@property(readonly, nonatomic) double maxPromptWindowSeconds; // @synthesize maxPromptWindowSeconds=_maxPromptWindowSeconds;
@property(readonly, nonatomic) NSUInteger maxPromptLength; // @synthesize maxPromptLength=_maxPromptLength;
@property(readonly, nonatomic) double negativeSamplingRate; // @synthesize negativeSamplingRate=_negativeSamplingRate;
@property(readonly, nonatomic) double positiveSamplingRate; // @synthesize positiveSamplingRate=_positiveSamplingRate;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
