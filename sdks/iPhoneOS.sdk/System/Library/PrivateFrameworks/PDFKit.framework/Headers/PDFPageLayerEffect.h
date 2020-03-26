//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffect : CALayer
{
    PDFPageLayerEffectPrivate *_private;
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;
+ (id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(CGRect)arg1 withLayer:(id)arg2;
+ (id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2;
// - (void).cxx_destruct;
- (id)pdfResult;
- (void)updateColor:(NSUInteger)arg1;
- (void)addSelection:(id)arg1;
- (void)setSelections:(id)arg1;
- (id)annotation;
- (BOOL)shouldRotateContent;
- (void)update;
- (void)setPageFrame:(CGRect)arg1;
- (CGRect)pageFrame;
- (id)UUID;
- (id)initWithPDFPageLayer:(id)arg1;

@end
