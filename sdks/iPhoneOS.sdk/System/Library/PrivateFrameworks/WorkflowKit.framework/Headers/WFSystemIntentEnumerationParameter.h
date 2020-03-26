//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class INIntentSlotDescription, NSArray;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    INIntentSlotDescription *_slotDescription;
}

@property(readonly, nonatomic) INIntentSlotDescription *slotDescription; // @synthesize slotDescription=_slotDescription;
// - (void).cxx_destruct;
- (BOOL)alwaysShowsButton;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end
