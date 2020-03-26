//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray;

@interface PSSpecifierGroupIndex : NSObject <NSCopying>
{
    NSMutableArray *_specifiers;
    NSMutableArray *_groupSections;
    NSMutableArray *_groupSpecifiers;
    NSMutableArray *_ungroupedPrefixSpecifiers;
    BOOL _wantsDebugCallbacks;
}

+ (BOOL)_wantsDebuggingCallbacks;
+ (id)groupIndexWithSpecifiers:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
// - (void).cxx_destruct;
- (id)description;
- (void)_appendDescriptionOfArray:(id)arg1 toString:(id)arg2 withTabLevel:(NSUInteger)arg3;
- (id)_tabStringOfDepth:(NSUInteger)arg1;
- (void)_didPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)_willPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (id)_synthesizedSpecifiersFromGroupIndex;
- (id)_groupSections;
- (NSUInteger)indexOfGroupWithID:(id)arg1;
- (NSUInteger)indexOfGroup:(id)arg1;
- (NSUInteger)indexOfGroupAtGroupIndex:(NSUInteger)arg1;
- (NSUInteger)groupIndexOfGroupWithID:(id)arg1;
- (NSUInteger)groupIndexOfGroup:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *groupSpecifiers;
- (id)specifiersInGroupWithID:(id)arg1;
- (id)specifiersInGroup:(id)arg1;
- (id)specifiersInGroupAtGroupIndex:(NSUInteger)arg1;
- (NSRange *)rangeOfSpecifiersInGroupWithID:(id)arg1;
- (NSRange *)rangeOfSpecifiersInGroup:(id)arg1;
- (NSRange *)rangeOfSpecifiersInGroupAtGroupIndex:(NSUInteger)arg1;
- (BOOL)getGroup:(out NSUInteger )arg1 row:(out NSUInteger )arg2 ofSpecifierWithID:(id)arg3;
- (BOOL)getGroup:(out NSUInteger )arg1 row:(out NSUInteger )arg2 ofSpecifier:(id)arg3;
- (BOOL)getGroup:(out NSUInteger )arg1 row:(out NSUInteger )arg2 ofSpecifierAtIndex:(NSUInteger)arg3;
- (id)indexPathForSpecifierWithID:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (id)indexPathForSpecifierAtIndex:(NSUInteger)arg1 forInsertion:(BOOL)arg2;
- (id)indexPathForSpecifierAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfSpecifierAtIndexPath:(id)arg1 forInsertion:(BOOL)arg2;
- (NSUInteger)indexOfSpecifierAtIndexPath:(id)arg1;
- (NSUInteger)_indexOfSpecifierInSection:(NSUInteger)arg1 row:(NSUInteger)arg2 forInsertion:(BOOL)arg3;
- (void)_getSection:(out NSUInteger )arg1 row:(out NSUInteger )arg2 forSpecifierAtIndex:(NSUInteger)arg3 forInsertion:(BOOL)arg4 allowGroupSpecifiers:(BOOL)arg5;
- (void)_getSection:(out NSUInteger )arg1 row:(out NSUInteger )arg2 forSpecifierAtIndex:(NSUInteger)arg3 forInsertion:(BOOL)arg4;
- (void)_manuallyFindSection:(out NSUInteger )arg1 row:(out NSUInteger )arg2 forSpecifierAtIndex:(NSUInteger)arg3;
- (NSUInteger)numberOfRowsInGroupAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfGroups;
- (void)performSpecifierUpdatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)performUpdateOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)performUpdateOperation:(id)arg1;
- (void)performSpecifierUpdates:(id)arg1;
- (void)reloadWithSpecifiers:(id)arg1;
- (id)_ungroupedPrefixSpecifiers;
- (void)_createGroupIndex;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initForCopyWithGroupIndex:(id)arg1;
- (id)initWithSpecifiers:(id)arg1;
- (id)_init;
- (id)init;

@end
