//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OCDDelayedMediaContext-Protocol.h>

@class NSString, NSURL, OCPPackage;

__attribute__((visibility("hidden")))
@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext>
{
    OCPPackage *mPackage;
    NSURL *mTargetLocation;
}

// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)dataRep;
- (BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (BOOL)loadDelayedNode:(id)arg1;
- (id)initWithTargetLocation:(id)arg1 package:(id)arg2;

@end
