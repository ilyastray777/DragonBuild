//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, VCCoreDuetListener;

@interface VCShortcutsObliterator : NSObject
{
    VCCoreDuetListener *_listener;
    NSSet *_syncDataHandlers;
}

@property(readonly, nonatomic) NSSet *syncDataHandlers; // @synthesize syncDataHandlers=_syncDataHandlers;
@property(readonly, nonatomic) VCCoreDuetListener *listener; // @synthesize listener=_listener;
// - (void).cxx_destruct;
- (void)resetWatchSync;
- (BOOL)terminateProcessWithIdentifier:(id)arg1 assertion:(out id )arg2 error:(out id )arg3;
- (BOOL)deleteDataVaultWithError:(id )arg1;
- (BOOL)deleteAppGroupWithIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)deleteKeychainItemsWithError:(id )arg1;
- (void)obliterate:(id )arg1;
- (id)initWithCoreDuetListener:(id)arg1 syncDataHandlers:(id)arg2;

@end
