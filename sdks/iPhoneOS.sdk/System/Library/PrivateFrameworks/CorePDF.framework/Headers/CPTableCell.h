//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPChunk.h>

#import <CorePDF/CPDisposable-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPTableCell : CPChunk <CPDisposable>
{
    CGRect cellBounds;
    CDStruct_627e0f85 rowSpan;
    CDStruct_627e0f85 columnSpan;
    struct {
        CGRect _field1;
        CGColor _field2;
        unsigned int _field3;
        id _field4;
    } borders;
    CGColor backgroundColor;
    unsigned int backgroundGraphicCount;
    id backgroundGraphics;
}

@property(readonly, nonatomic) unsigned int backgroundGraphicCount; // @synthesize backgroundGraphicCount;
@property(nonatomic) CDStruct_627e0f85 columnSpan; // @synthesize columnSpan;
@property(nonatomic) CDStruct_627e0f85 rowSpan; // @synthesize rowSpan;
@property(readonly, nonatomic) CGRect cellBounds; // @synthesize cellBounds;
- (long long)compareCellOrdinal:(id)arg1;
- (id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)graphicCountOfBorder:(int)arg1;
- (CGColor )colorOfBorder:(int)arg1;
- (CGRect)boundsOfBorder:(int)arg1;
- (void)setBorder:(int)arg1 bounds:(CGRect)arg2 graphics:(id)arg3;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (void)setBackgroundGraphics:(id)arg1;
- (CGColor )backgroundColor;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithBounds:(CGRect)arg1;

@end
