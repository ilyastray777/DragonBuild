//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSBusinessItem, NSData;

@interface BCSBusinessItemMemoryCache : NSObject
{
    BCSBusinessItem *_lastFetchedBusinessItem;
    BCSBusinessItem *_bizItemForLastFetchedIcon;
    NSData *_lastFetchedBusinessItemIconData;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSData *lastFetchedBusinessItemIconData; // @synthesize lastFetchedBusinessItemIconData=_lastFetchedBusinessItemIconData;
@property(retain, nonatomic) BCSBusinessItem *bizItemForLastFetchedIcon; // @synthesize bizItemForLastFetchedIcon=_bizItemForLastFetchedIcon;
@property(retain, nonatomic) BCSBusinessItem *lastFetchedBusinessItem; // @synthesize lastFetchedBusinessItem=_lastFetchedBusinessItem;
// - (void).cxx_destruct;
- (void)deleteCache;
- (void)setLastFetchedBusinesIconData:(id)arg1 withMatchingBusinessItem:(id)arg2;
- (id)lastFetchedBusinessItemIconDataForBizItem:(id)arg1;

@end
