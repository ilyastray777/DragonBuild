//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_nw_context;

@interface SiriCoreNWContext : NSObject
{
    NSObject<OS_nw_context> *_context;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)nwContext;
- (id)_init;
- (id)init;

@end
