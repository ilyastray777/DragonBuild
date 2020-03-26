//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitConnectionInfo-Protocol.h>

@class GEOPDTransitConnection, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo>
{
    GEOPDTransitConnection *_connection;
    int _providerID;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *urlToOpen;
@property(readonly, nonatomic) int providerID;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSUInteger muid;
- (id)initWithConnection:(id)arg1 providerID:(int)arg2;

@end
