//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NAIdentifiable-Protocol.h>

@class MTAlarm, NSString;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable>
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    MTAlarm *_alarm;
    NSString *_alarmIdentifier;
}

+ (id)na_identity;
@property(copy, nonatomic) NSString *alarmIdentifier; // @synthesize alarmIdentifier=_alarmIdentifier;
@property(copy, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
// - (void).cxx_destruct;
- (NSUInteger)_effectiveLoadingStateForSuggestedLoadingState:(NSUInteger)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;

@end
