//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CCUIPPTTest : NSObject <NSCopying>
{
    NSString *_name;
    NSUInteger _beginSignpost;
    NSUInteger _endSignpost;
}

+ (id)testWithName:(id)arg1 beginSignpost:(NSUInteger)arg2 endSignpost:(NSUInteger)arg3;
@property(readonly, nonatomic) NSUInteger endSignpost; // @synthesize endSignpost=_endSignpost;
@property(readonly, nonatomic) NSUInteger beginSignpost; // @synthesize beginSignpost=_beginSignpost;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithName:(id)arg1 beginSignpost:(NSUInteger)arg2 endSignpost:(NSUInteger)arg3;

@end
