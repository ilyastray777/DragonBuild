//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface _REAppKey : NSObject <NSCopying>
{
    BOOL _remote;
    NSString *_identifier;
}

@property(readonly, nonatomic) BOOL remote; // @synthesize remote=_remote;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithIdentifier:(id)arg1 remote:(BOOL)arg2;

@end
