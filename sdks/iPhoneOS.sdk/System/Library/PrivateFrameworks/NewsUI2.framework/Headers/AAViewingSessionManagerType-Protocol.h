//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AAViewingSession, NSString;

@protocol AAViewingSessionManagerType
- (void)endActiveViewingSession;
- (void)endViewingSessionForContentIdentifier:(NSString *)arg1;
- (void)removeObject:(id)arg1 forContentIdentifier:(NSString *)arg2;
- (AAViewingSession *)viewingSessionForContentIdentifier:(NSString *)arg1 object:(id)arg2;
@end
