//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (TSPersistence)
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)tsp_errorWithCode:(long long)arg1;
+ (id)errorWithTSKWarning:(id)arg1;
- (BOOL)tsp_isRecoverable;
@end
