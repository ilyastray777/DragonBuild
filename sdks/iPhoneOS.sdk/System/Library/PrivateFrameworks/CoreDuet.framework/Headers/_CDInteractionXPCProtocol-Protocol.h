//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSNumber, NSPredicate, NSString, _CDInteractionAdvisorSettings, _PSMapsPredictionContext, _PSPredictionContext;
@protocol _CDInteractionXPCHeartBeatProtocol;

@protocol _CDInteractionXPCProtocol
- (void)rankedAutocompleteSuggestionsFromContext:(_PSPredictionContext *)arg1 candidates:(NSArray *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)rankedNameSuggestionsFromContext:(_PSPredictionContext *)arg1 name:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)rankedContactSuggestionsFromContext:(_PSPredictionContext *)arg1 contactsOnly:(BOOL)arg2 maxSuggestions:(NSNumber *)arg3 reply:(void (^)(NSArray *))arg4;
- (void)messagesZKWSuggestionsFromContext:(_PSPredictionContext *)arg1 maxSuggestions:(NSNumber *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)mapsSuggestionsFromContext:(_PSMapsPredictionContext *)arg1 maxSuggestions:(NSNumber *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)shareExtensionSuggestionsFromContext:(_PSPredictionContext *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)suggestInteractionsFromContext:(_PSPredictionContext *)arg1 reply:(void (^)(NSArray *, _PSPredictionContext *))arg2;
- (void)tuneSocialAdvisorUsingSettings:(_CDInteractionAdvisorSettings *)arg1 heartBeatHandler:(id <_CDInteractionXPCHeartBeatProtocol>)arg2 reply:(void (^)(void))arg3;
- (void)adviseInteractionsForKeywordsInString:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseSocialInteractionsForDate:(NSDate *)arg1 andSeedContacts:(NSArray *)arg2 usingSettings:(_CDInteractionAdvisorSettings *)arg3 reply:(void (^)(NSArray *))arg4;
- (void)adviseInteractionsForLocation:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseInteractionsForDate:(NSDate *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)adviseInteractionsUsingSettings:(_CDInteractionAdvisorSettings *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)rankCandidateContacts:(NSArray *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2 reply:(void (^)(NSArray *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 reply:(void (^)(NSUInteger, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 reply:(void (^)(NSUInteger, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 reply:(void (^)(NSUInteger, NSError *))arg2;
- (void)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(NSUInteger)arg3 reply:(void (^)(NSUInteger, NSError *))arg4;
- (void)countContactsUsingPredicate:(NSPredicate *)arg1 reply:(void (^)(NSUInteger, NSError *))arg2;
- (void)countInteractionsUsingPredicate:(NSPredicate *)arg1 reply:(void (^)(NSUInteger, NSError *))arg2;
- (void)queryContactsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(NSUInteger)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(NSUInteger)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)recordInteractions:(NSArray *)arg1 enforceDataLimits:(BOOL)arg2 enforcePrivacy:(BOOL)arg3 reply:(void (^)(BOOL))arg4;
@end
