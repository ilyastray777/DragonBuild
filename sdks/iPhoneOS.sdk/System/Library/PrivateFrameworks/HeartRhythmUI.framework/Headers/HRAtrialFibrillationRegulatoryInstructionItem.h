//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HeartRhythmUI/HRFeatureRegulatoryPanelDisplayable-Protocol.h>

@class NSAttributedString;

@interface HRAtrialFibrillationRegulatoryInstructionItem : NSObject <HRFeatureRegulatoryPanelDisplayable>
{
}

- (void)handleUserInteractionWithItemWithHostViewController:(id)arg1;
@property(readonly, nonatomic) long long cellAccessoryType;
@property(readonly, nonatomic) BOOL isInteractive;
@property(readonly, copy, nonatomic) NSAttributedString *valueString;
@property(readonly, copy, nonatomic) NSAttributedString *titleString;

@end
