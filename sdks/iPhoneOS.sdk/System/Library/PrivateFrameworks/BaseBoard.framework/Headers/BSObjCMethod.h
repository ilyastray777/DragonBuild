//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>

@class BSObjCArgument, NSArray, NSString;

@interface BSObjCMethod : NSObject <BSDescriptionProviding>
{
    NSString *_name;
    NSString *_encoding;
    SEL _selector;
    NSArray *_arguments;
    BSObjCArgument *_returnValue;
    long long _required;
}

+ (id)methodWithSelector:(SEL)arg1 typeEncoding:(const char )arg2;
+ (id)methodWithMethod:(struct objc_method )arg1;
@property(nonatomic) long long required; // @synthesize required=_required;
@property(readonly, retain, nonatomic) BSObjCArgument *returnValue; // @synthesize returnValue=_returnValue;
@property(readonly, retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, copy, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, retain, nonatomic) BSObjCArgument *lastArgument;
@property(readonly, retain, nonatomic) BSObjCArgument *firstArgument;

@end
