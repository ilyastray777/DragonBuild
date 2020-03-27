//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>
#import <iWorkImport/TSWPLayoutOwner-Protocol.h>

@class NSMapTable, TPPageController;
@protocol TSWPTopicNumberHints;

__attribute__((visibility("hidden")))
@interface TPTextFlowLayoutController : NSObject <TSWPLayoutOwner, TSKChangeSourceObserver>
{
    TPPageController *_pageController;
    NSMapTable *_layoutMgrs;
    NSMapTable *_flows;
    BOOL _tornDown;
    NSObject<TSWPTopicNumberHints> *_startTargetTopicNumberHints;
}

// - (void).cxx_destruct;
- (id)p_flowForLayoutMgr:(id)arg1;
- (id)p_layoutMgrForFlow:(id)arg1;
- (void)p_setLayoutMgr:(id)arg1 forFlow:(id)arg2;
- (id)p_orderedTextBoxesForFlow:(id)arg1 textBoxes:(id)arg2;
- (id)p_flowsOnPageIndex:(NSUInteger)arg1;
- (id)p_flowsOnPage:(id)arg1 textBoxes:(inout id)arg2;
- (void)i_trimFlow:(id)arg1 pageIndex:(NSUInteger)arg2 toCharIndex:(NSUInteger)arg3;
- (id)previousTargetTopicNumbersForTarget:(id)arg1;
- (id)previousTargetLastColumnForTarget:(id)arg1;
- (id)p_previousTextBoxForTarget:(id)arg1;
- (id)textWrapper;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(NSUInteger)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (BOOL)caresAboutStorageChanges;
- (NSUInteger)pageIndexNeedingLayoutPreviousToPageIndex:(NSUInteger)arg1;
- (id)hintForFlow:(id)arg1 pageIndex:(NSUInteger)arg2;
- (void)invalidateFlows:(id)arg1 startingPage:(id)arg2;
- (void)processWidowAndInflationOnPage:(id)arg1;
- (void)deflatePage:(id)arg1 intoHints:(inout id)arg2 topicNumbers:(inout id)arg3;
- (void)layOutFlowsIfNeededOnPage:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

@end
