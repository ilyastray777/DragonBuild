//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption, NSSet;

@protocol HFAccessorySettingSiriLanguageAdapterObserver <NSObject>

@optional
- (void)siriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 selectedLanguageOptionDidChange:(HFSiriLanguageOption *)arg2;
- (void)siriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 availableLanguageOptionsDidChange:(NSSet *)arg2;
@end
