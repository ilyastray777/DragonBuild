//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HMFMessageTransportDelegate;

@interface HMFMessageTransport : HMFObject
{
    id <HMFMessageTransportDelegate> _delegate;
}

@property __weak id <HMFMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)sendMessage:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;

@end
