//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation
{
    BOOL _requiresAll;
    NSArray *_relations;
}

@property(nonatomic) BOOL requiresAll; // @synthesize requiresAll=_requiresAll;
@property(retain, nonatomic) NSArray *relations; // @synthesize relations=_relations;
// - (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)type;
- (id)itemStates;
- (BOOL)isFulfilled;

@end
