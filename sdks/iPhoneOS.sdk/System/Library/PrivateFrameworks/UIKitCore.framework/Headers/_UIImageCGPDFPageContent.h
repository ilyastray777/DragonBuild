//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageCGPDFPageContent : _UIImageContent
{
    CGPDFPage _pdfPageRef;
}

- (void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContext )arg2;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (CGSize)sizeInPixels;
- (CGPDFPage )CGPDFPage;
- (BOOL)isCGPDFPage;
- (BOOL)canProvideFullResCGImage;
- (void)dealloc;
- (id)initWithScale:(double)arg1;
- (id)initWithCGPDFPage:(CGPDFPage )arg1 scale:(double)arg2;

@end
