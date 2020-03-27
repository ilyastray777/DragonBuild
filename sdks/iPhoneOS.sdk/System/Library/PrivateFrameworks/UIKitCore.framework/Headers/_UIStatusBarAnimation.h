//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarPrioritized-Protocol.h>

@class NSMutableArray, NSSet, NSString, _UIStatusBarIdentifier;

__attribute__((visibility("hidden")))
@interface _UIStatusBarAnimation : NSObject <NSCopying, _UIStatusBarPrioritized>
{
    BOOL _delaysAnimatingItems;
    BOOL _delaysDependentItems;
    BOOL _enabled;
    long long _priority;
    _UIStatusBarIdentifier *_displayItemIdentifier;
    NSString *_identifier;
    NSString *_exclusivityGroupIdentifier;
    long long _type;
    id /* CDUnknownBlockType */ _prepareBlock;
    NSSet *_delayedItemIdentifiers;
    NSSet *_delayedDisplayItemPlacements;
    NSMutableArray *_subAnimations;
    _UIStatusBarAnimation *_parentAnimation;
    id /* CDUnknownBlockType */ _animationBlock;
    NSMutableArray *_completionHandlers;
}

+ (void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2;
+ (void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4;
+ (void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2;
+ (id)animationWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (void)initialize;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(copy, nonatomic) id /* CDUnknownBlockType */ animationBlock; // @synthesize animationBlock=_animationBlock;
@property(nonatomic) __weak _UIStatusBarAnimation *parentAnimation; // @synthesize parentAnimation=_parentAnimation;
@property(retain, nonatomic) NSMutableArray *subAnimations; // @synthesize subAnimations=_subAnimations;
@property(nonatomic) BOOL delaysDependentItems; // @synthesize delaysDependentItems=_delaysDependentItems;
@property(nonatomic) BOOL delaysAnimatingItems; // @synthesize delaysAnimatingItems=_delaysAnimatingItems;
@property(copy, nonatomic) NSSet *delayedDisplayItemPlacements; // @synthesize delayedDisplayItemPlacements=_delayedDisplayItemPlacements;
@property(copy, nonatomic) NSSet *delayedItemIdentifiers; // @synthesize delayedItemIdentifiers=_delayedItemIdentifiers;
@property(copy, nonatomic) id /* CDUnknownBlockType */ prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *exclusivityGroupIdentifier; // @synthesize exclusivityGroupIdentifier=_exclusivityGroupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) _UIStatusBarIdentifier *displayItemIdentifier; // @synthesize displayItemIdentifier=_displayItemIdentifier;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
// - (void).cxx_destruct;
- (id)description;
- (id)_dependentItemIdentifiersEnabledOnly:(BOOL)arg1;
@property(readonly, nonatomic) NSSet *effectiveDelayedItemIdentifiers;
- (void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2;
- (void)cancel;
- (void)performForStatusBar:(id)arg1;
- (void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3;
- (void)addTotalCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)addCompletionHandler:(id /* CDUnknownBlockType */)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end
