//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHNormalizedDrawingVisualization : CHStrokeGroupBasedVisualization
{
}

- (void)_drawCutPoints:(id)arg1 inputDrawing:(id)arg2 inContext:(CGContext )arg3 transform:(CGAffineTransform)arg4;
- (void)drawInputDrawing:(id)arg1 inContext:(CGContext )arg2 transform:(CGAffineTransform)arg3;
- (BOOL)shouldDrawStrokeGroup:(id)arg1;
- (void)_drawGroupBrackgroundInRect:(CGRect)arg1 context:(CGContext )arg2;
- (CGAffineTransform)_transformForInputDrawingBounds:(CGRect)arg1 referenceBounds:(CGRect)arg2 viewBounds:(CGRect)arg3;
- (void)drawVisualizationInRect:(CGRect)arg1 context:(CGContext )arg2 viewBounds:(CGRect)arg3;
- (CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (BOOL)wantsInputDrawings;
- (long long)layeringPriority;

@end
