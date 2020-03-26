//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SFProximityEstimator.h>

__attribute__((visibility("hidden")))
@interface SFProximityEstimatorChannelMedian : SFProximityEstimator
{
    struct {
        unsigned char channel;
        char rssiValues[3];
        unsigned char rssiIndex;
        unsigned char rssiCount;
        char rssiMedian;
    } _channels[4];
}

- (int)_estimateRSSIForSFBLEDevice:(id)arg1;
- (id)description;

@end
