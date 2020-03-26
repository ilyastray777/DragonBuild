//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAppleIDAuthenticationLimitedUIProvider-Protocol.h>
#import <AuthKitUI/AKAppleIDServerAuthenticationUIProvider-Protocol.h>

@class AKAccountRecoveryContext, NSString;

@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider, AKAppleIDServerAuthenticationUIProvider>
- (void)dismissNativeRecoveryUIWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)presentNativeRecoveryUIWithContext:(AKAccountRecoveryContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;

@optional
- (void)dismissKeepUsingUIWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)presentKeepUsingUIForAppleID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end
