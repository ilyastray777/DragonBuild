//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, NSString;

@interface SANotificationObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *threadIdentifier;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSDate *recencyDate;
@property(copy, nonatomic) NSString *priority;
@property(copy, nonatomic) NSNumber *previewRestricted;
@property(copy, nonatomic) NSString *notificationId;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSNumber *dateIsAllDay;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *applicationId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
