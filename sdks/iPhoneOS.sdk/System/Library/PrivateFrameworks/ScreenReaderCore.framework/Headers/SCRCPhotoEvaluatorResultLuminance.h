//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult
{
    double _darknessLevel;
    double _brightnessLevel;
    double _averageLevel;
}

@property(readonly, nonatomic) double averageLevel; // @synthesize averageLevel=_averageLevel;
@property(readonly, nonatomic) double brightnessLevel; // @synthesize brightnessLevel=_brightnessLevel;
@property(readonly, nonatomic) double darknessLevel; // @synthesize darknessLevel=_darknessLevel;
- (id)humanReadableResult;
- (id)initWithDarknessLevel:(double)arg1 brightnessLevel:(double)arg2 averageLevel:(double)arg3;

@end
