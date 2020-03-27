//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/ECTransferMessageActionItemBuilder-Protocol.h>

@class NSString;
@protocol ECMessage;

@interface ECTransferMessageActionItem : NSObject <ECTransferMessageActionItemBuilder, NSCopying>
{
    NSString *_sourceRemoteID;
    id <ECMessage> _sourceMessage;
    id <ECMessage> _destinationMessage;
}

@property(retain, nonatomic) id <ECMessage> destinationMessage; // @synthesize destinationMessage=_destinationMessage;
@property(retain, nonatomic) id <ECMessage> sourceMessage; // @synthesize sourceMessage=_sourceMessage;
@property(copy, nonatomic) NSString *sourceRemoteID; // @synthesize sourceRemoteID=_sourceRemoteID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithBuilder:(id /* CDUnknownBlockType */)arg1;

@end
