//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMBLocalZone, HMBProcessingOptions, NAFuture;
@protocol HMBLocalZoneID;

@protocol HMBMirrorProtocol <NSObject>
@property(readonly, nonatomic) NAFuture *startUp;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID;
- (NAFuture *)shutdown;
- (NAFuture *)flush;
- (NAFuture *)triggerOutputForOutputRow:(NSUInteger)arg1 options:(HMBProcessingOptions *)arg2;
- (NAFuture *)destroy;
- (void)startUpWithLocalZone:(HMBLocalZone *)arg1;
@end
