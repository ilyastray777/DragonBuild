//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/BSServiceConnectionListenerDelegate-Protocol.h>

@class BSServiceConnectionListener;

@interface SASSignalConnectionListener : NSObject <BSServiceConnectionListenerDelegate>
{
    BSServiceConnectionListener *_listener;
}

+ (id)new;
+ (id)listener;
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
// - (void).cxx_destruct;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)_init;
- (id)init;

@end
