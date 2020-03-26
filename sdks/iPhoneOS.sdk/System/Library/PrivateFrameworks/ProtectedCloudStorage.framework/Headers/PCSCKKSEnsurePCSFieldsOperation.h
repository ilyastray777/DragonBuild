//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSEnsurePCSFieldsOperation : PCSCKKSOperation
{
    PCSCKKSItemModifyContext *_context;
}

@property(retain) PCSCKKSItemModifyContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (int)updateKeychain:(id)arg1 withAttributes:(id)arg2;
- (void)start;
- (BOOL)haveCKKSPlaintextEntitlements;
- (id)initWithItemModifyContext:(id)arg1;

@end
