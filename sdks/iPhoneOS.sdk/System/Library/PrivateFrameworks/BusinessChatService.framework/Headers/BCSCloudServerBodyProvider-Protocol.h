//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSString;

@protocol BCSCloudServerBodyProvider <NSObject>
- (NSData *)bodyForBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2;
- (NSData *)bodyForConfigItemRequest;
- (NSData *)bodyForBusinessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2;
- (NSData *)bodyForBusinessItemRequestWithBizID:(NSString *)arg1;
@end
