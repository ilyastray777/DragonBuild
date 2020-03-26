//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class IMWeakReference;

__attribute__((visibility("hidden")))
@interface _CKWeakWrapper : NSProxy
{
    IMWeakReference *_weakReference;
    Class _targetClass;
}

@property(retain, nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
@property(retain, nonatomic) IMWeakReference *weakReference; // @synthesize weakReference=_weakReference;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isKindOfClass:(Class)arg1;
- (Class)class;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

@end
