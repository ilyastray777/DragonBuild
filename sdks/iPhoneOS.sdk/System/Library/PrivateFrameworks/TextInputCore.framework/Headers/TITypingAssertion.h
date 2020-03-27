//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSTimer;

@interface TITypingAssertion : NSObject
{
    BOOL _active;
    NSMutableSet *_restingPathIndices;
    NSTimer *_timer;
}

+ (id)sharedTypingAssertion;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
// - (void).cxx_destruct;
- (id)__restingPathIndices;
- (void)touch;
- (void)touchWithDuration:(double)arg1;
- (void)timerFired:(id)arg1;
- (void)_sbsSetTypingActive:(BOOL)arg1;
- (void)restTouchEndWithPathIndex:(long long)arg1;
- (void)restTouchStartWithPathIndex:(long long)arg1;
- (void)restResetTouches;
@property(nonatomic, getter=isActive) BOOL active;
- (id)init;
- (void)dealloc;

@end
