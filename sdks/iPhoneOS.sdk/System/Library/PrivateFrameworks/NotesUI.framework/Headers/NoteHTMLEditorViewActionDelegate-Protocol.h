//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NoteHTMLEditorView, UIPasteboard;
@protocol _NSReaderDelegate;

@protocol NoteHTMLEditorViewActionDelegate
- (void)insertImageInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
- (BOOL)noteHTMLEditorViewShouldPaste:(NoteHTMLEditorView *)arg1;
- (id <_NSReaderDelegate>)readerDelegateInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
- (void)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 showShareSheetForAttachment:(NSString *)arg2 atPoint:(CGPoint)arg3;
- (BOOL)noteHTMLEditorView:(NoteHTMLEditorView *)arg1 acceptContentsFromPasteboard:(UIPasteboard *)arg2;
- (BOOL)canInsertImagesInNoteHTMLEditorView:(NoteHTMLEditorView *)arg1;
@end
