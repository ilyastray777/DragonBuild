//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSRecursiveLock.h>

#import <MIME/MFLockObject-Protocol.h>

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject>
{
    NSString *_name;
    id _delegate;
}

+ (void)initialize;
- (void)dealloc;
- (id)description;
- (void)unlock;
- (BOOL)lockBeforeDate:(id)arg1;
- (BOOL)tryLock;
- (void)lock;
- (BOOL)isLockedByMe;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (id)init;

@end
