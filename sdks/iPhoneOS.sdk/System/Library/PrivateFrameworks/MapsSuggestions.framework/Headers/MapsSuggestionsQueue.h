//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject>
{
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> _cppQueue;
}

+ (id)serialQueueWithName:(NSString )arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)asyncBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)syncBOOLReturningBlock:(id /* CDUnknownBlockType */)arg1;
- (id)syncReturningBlock:(id /* CDUnknownBlockType */)arg1;
- (void)syncBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *innerQueue;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)initSerialQueueWithName:(NSString )arg1;

@end
