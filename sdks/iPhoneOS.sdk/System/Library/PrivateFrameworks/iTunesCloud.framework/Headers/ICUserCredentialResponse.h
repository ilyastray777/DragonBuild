//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject
{
    ICUserIdentityProperties *_identityProperties;
    ICUserIdentityProperties *_iCloudIdentityProperties;
}

@property(copy, nonatomic) ICUserIdentityProperties *iCloudIdentityProperties; // @synthesize iCloudIdentityProperties=_iCloudIdentityProperties;
@property(copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;
// - (void).cxx_destruct;

@end
