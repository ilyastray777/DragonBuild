//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobIdentifying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying>
{
    long long _itemDBRowID;
}

@property(readonly, nonatomic) long long itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToItemDBRowIDIdentifier:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)columnsValues;
- (id)columns;
- (id)matchingJobsWhereSQLClause;
@property(readonly, copy) NSString *description;
- (id)jobsDescription;
- (id)initWithItemDBRowID:(long long)arg1;

@end
