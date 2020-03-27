//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEONameInfo, GEONameInfoList, NSMutableArray;

@protocol GEOCompanionManeuverStep <NSObject>
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) struct GEOJunctionElement junctionElements;
@property(readonly, nonatomic) NSUInteger junctionElementsCount;
@property(nonatomic) int junctionType;
@property(nonatomic) BOOL hasJunctionType;
@property(retain, nonatomic) NSMutableArray *signposts;
@property(retain, nonatomic) NSMutableArray *maneuverNames;
@property(nonatomic) int maneuverType;
@property(nonatomic) BOOL hasManeuverType;
- (GEONameInfo *)signpostAtIndex:(NSUInteger)arg1;
- (NSUInteger)signpostsCount;
- (void)addSignpost:(GEONameInfo *)arg1;
- (void)clearSignposts;
- (GEONameInfoList *)maneuverNameAtIndex:(NSUInteger)arg1;
- (NSUInteger)maneuverNamesCount;
- (void)addManeuverName:(GEONameInfoList *)arg1;
- (void)clearManeuverNames;
@end
