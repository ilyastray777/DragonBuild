//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class CSSearchableItem, NSArray, NSString;

@protocol SGDSuggestManagerMessagesProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)harvestedSuggestionsFromMessages:(NSArray *)arg1 bundleIdentifier:(NSString *)arg2 options:(NSUInteger)arg3 completionHandler:(void (^)(SGXPCResponse3 *))arg4;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 bundleIdentifier:(NSString *)arg2 options:(NSUInteger)arg3 completionHandler:(void (^)(SGXPCResponse3 *))arg4;
- (void)suggestionsFromMessage:(CSSearchableItem *)arg1 options:(NSUInteger)arg2 completionHandler:(void (^)(SGXPCResponse3 *))arg3;
@end
