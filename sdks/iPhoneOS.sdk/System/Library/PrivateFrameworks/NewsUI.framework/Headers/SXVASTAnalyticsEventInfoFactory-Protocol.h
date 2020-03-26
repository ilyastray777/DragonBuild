//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ADMediaAnalyticsEventInfo, ADMediaAnalyticsProgressEventInfo;
@protocol SVVideoMetadata;

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>
- (ADMediaAnalyticsProgressEventInfo *)createAnalyticsProgressEventInfoForQuartile:(NSUInteger)arg1 withMetadata:(id <SVVideoMetadata>)arg2;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfoWithMetadata:(id <SVVideoMetadata>)arg1;
- (ADMediaAnalyticsEventInfo *)createAnalyticsEventInfo;
@end
