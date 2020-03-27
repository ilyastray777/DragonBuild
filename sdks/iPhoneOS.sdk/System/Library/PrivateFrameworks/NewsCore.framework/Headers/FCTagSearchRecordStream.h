//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCStreaming-Protocol.h>

@class CKQueryCursor, NSMutableSet;

@interface FCTagSearchRecordStream : NSObject <FCStreaming>
{
    BOOL _fetching;
    BOOL _finished;
    id /* CDUnknownBlockType */ _operationConstructor;
    CKQueryCursor *_cursor;
    NSMutableSet *_encounteredRecordIDs;
}

@property(retain, nonatomic) NSMutableSet *encounteredRecordIDs; // @synthesize encounteredRecordIDs=_encounteredRecordIDs;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) BOOL fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) id /* CDUnknownBlockType */ operationConstructor; // @synthesize operationConstructor=_operationConstructor;
// - (void).cxx_destruct;
- (id)fetchMoreResultsWithLimit:(NSUInteger)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end
