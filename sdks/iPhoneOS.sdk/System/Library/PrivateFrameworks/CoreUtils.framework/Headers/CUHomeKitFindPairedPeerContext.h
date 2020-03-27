//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUPairedPeer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CUHomeKitFindPairedPeerContext : NSObject
{
    BOOL _triedAccessory;
    BOOL _triedHAP;
    id /* CDUnknownBlockType */ _completion;
    NSString *_identifier;
    NSUInteger _options;
    CUPairedPeer *_pairedPeer;
    NSUInteger _startTicks;
    NSArray *_users;
    NSUInteger _userIndex;
    NSUInteger _userCount;
}

@property(nonatomic) NSUInteger userCount; // @synthesize userCount=_userCount;
@property(nonatomic) NSUInteger userIndex; // @synthesize userIndex=_userIndex;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic) NSUInteger startTicks; // @synthesize startTicks=_startTicks;
@property(nonatomic) BOOL triedHAP; // @synthesize triedHAP=_triedHAP;
@property(nonatomic) BOOL triedAccessory; // @synthesize triedAccessory=_triedAccessory;
@property(retain, nonatomic) CUPairedPeer *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
// - (void).cxx_destruct;

@end
