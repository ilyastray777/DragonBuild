//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapFeatureAccess;

__attribute__((visibility("hidden")))
@interface GEORouteRoadMatcher : NSObject
{
    GEOMapFeatureAccess *_mapFeatureAccess;
}

// - (void).cxx_destruct;
- (BOOL)allowsNetworkTileLoad;
- (CDStruct_c8b5ad3f )findRoadOnCoordinate:(CDStruct_c3b9c2ee)arg1 withCourse:(double)arg2;
- (id)init;

@end
