//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICDelegationServiceSecuritySettings : NSObject
{
    long long _securityMode;
    NSString *_password;
}

+ (void)getDeviceSenderSettingsForReceiverName:(id)arg1 securityMode:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (void)getDeviceReceiverSettingsWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) long long securityMode; // @synthesize securityMode=_securityMode;
// - (void).cxx_destruct;
- (id)description;
- (id)_init;

@end
