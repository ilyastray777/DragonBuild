//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOSearchResultSection-Protocol.h>

@class NSString;

@interface GEOSearchResultSection : NSObject <GEOSearchResultSection>
{
    long long _cellType;
    NSString *_headerDisplayName;
    NSString *_subHeaderDisplayName;
}

@property(copy, nonatomic) NSString *subHeaderDisplayName; // @synthesize subHeaderDisplayName=_subHeaderDisplayName;
@property(copy, nonatomic) NSString *headerDisplayName; // @synthesize headerDisplayName=_headerDisplayName;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
// - (void).cxx_destruct;
- (id)initWithSearchResultSection:(id)arg1;
- (id)init;

@end
