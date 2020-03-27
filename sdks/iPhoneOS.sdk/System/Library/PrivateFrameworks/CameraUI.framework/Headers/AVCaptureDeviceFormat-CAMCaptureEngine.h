//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureDeviceFormat.h>

@interface AVCaptureDeviceFormat (CAMCaptureEngine)
- (double)cam_maximumFrameRate;
- (long long)cam_compareUsingMaximumFramerate:(id)arg1;
- (long long)cam_compareUsingBinning:(id)arg1;
- (long long)cam_compareUsingQuality:(id)arg1;
- (long long)cam_compareUsingDimensions:(id)arg1;
@property(readonly, nonatomic) BOOL cam_supportsPortraitFrontFacingZoomed;
- (BOOL)cam_supportsPanoramaConfiguration:(id)arg1;
- (BOOL)cam_supportsFrameDuration:(CDStruct_1b6d18a9)arg1;
- (BOOL)cam_supportsFrameRate:(double)arg1;
- (BOOL)cam_supportsFrameRate:(double)arg1 width:(long long)arg2 height:(long long)arg3 colorSpace:(long long)arg4;
- (BOOL)cam_supportsVideoConfiguration:(long long)arg1 colorSpace:(long long)arg2;
- (CDStruct_79c71658)_expectedVideoDimensionsForVideoConfiguration:(long long)arg1;
- (CDStruct_1b6d18a9)cam_frameDurationForVideoConfiguration:(long long)arg1;
- (double)cam_frameRateForVideoConfiguration:(long long)arg1;
@end
