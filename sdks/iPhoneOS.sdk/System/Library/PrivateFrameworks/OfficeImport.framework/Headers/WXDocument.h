//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXDocument : NSObject
{
}

+ (id)documentFrom:(id)arg1 reader:(id)arg2 cancel:(id)arg3 asThumbnail:(BOOL)arg4;
+ (id)notePositionEnumMap;
+ (id)noteRestartEnumMap;
+ (void)readDocumentSettings:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readDocument:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readSources:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readLists:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readStyles:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readFontTable:(id)arg1 to:(id)arg2 state:(id)arg3;

@end
