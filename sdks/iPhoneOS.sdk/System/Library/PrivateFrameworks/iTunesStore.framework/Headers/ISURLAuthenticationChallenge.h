//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISAuthenticationChallenge.h>

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
{
}

+ (id)_titleForProtectionSpace:(id)arg1;
+ (id)_messageForProtectionSpace:(id)arg1;
- (void)useCredential:(id)arg1;
- (id)user;
- (id)sender;
- (id)password;
- (BOOL)hasPassword;
- (long long)failureCount;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)arg1;

@end
