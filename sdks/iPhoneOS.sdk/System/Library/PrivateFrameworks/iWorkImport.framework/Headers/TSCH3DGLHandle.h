//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DResourceHandle.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGLHandle : TSCH3DResourceHandle
{
    unsigned int mValue;
}

+ (id)handleWithGLHandle:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int value; // @synthesize value=mValue;
- (id)description;
- (void)dealloc;
- (id)initWithGLHandle:(unsigned int)arg1;

@end
