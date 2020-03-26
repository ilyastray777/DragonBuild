//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKTiledView.h>

@class PKAttachmentView, UIButton;

@interface PKTiledTextView : PKTiledView
{
    PKAttachmentView *_standInEndAttachmentView;
    UIButton *_tapToRadarButton;
}

@property(retain, nonatomic) UIButton *tapToRadarButton; // @synthesize tapToRadarButton=_tapToRadarButton;
@property(retain, nonatomic) PKAttachmentView *standInEndAttachmentView; // @synthesize standInEndAttachmentView=_standInEndAttachmentView;
// - (void).cxx_destruct;
- (id)saveTempData:(id)arg1 name:(id)arg2;
- (void)appendPath:(id)arg1 attachmentString:(id)arg2;
- (void)_tapToRadarButtonTapped:(id)arg1;
- (void)_setupTapToRadarButton;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (CGRect)frameOfEndAttachment;
- (BOOL)insertAttachmentIfInBlankSpace:(CGPoint)arg1;
- (BOOL)hasEndAttachment;
- (void)updateEndAttachment;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (void)setLinedPaper:(id)arg1;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2;
- (BOOL)canAddStroke;
- (id)standInAttachmentView;
- (BOOL)_shouldUpdateHeightOfAttachments;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)initInScrollView:(id)arg1;

@end
