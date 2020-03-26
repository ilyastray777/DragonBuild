//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL;

@interface SUItemLink : NSObject <NSCopying>
{
    long long _linkTarget;
    long long _linkType;
    NSString *_title;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(nonatomic) long long linkTarget; // @synthesize linkTarget=_linkTarget;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;

@end
