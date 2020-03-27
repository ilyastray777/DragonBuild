//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSARenderingExporter.h>

@class TPPdfHyperlinkController;

__attribute__((visibility("hidden")))
@interface TPRenderingExporter : TSARenderingExporter
{
    TPPdfHyperlinkController *mHyperlinkController;
    NSUInteger mPageIndex;
    NSUInteger mPageCount;
    long long mLastPageIndexForLayout;
    BOOL mDidLimitPageLayout;
}

@property(readonly, nonatomic) BOOL didLimitPageLayout; // @synthesize didLimitPageLayout=mDidLimitPageLayout;
@property(nonatomic) long long lastPageIndexForLayout; // @synthesize lastPageIndexForLayout=mLastPageIndexForLayout;
// - (void).cxx_destruct;
- (void)teardown;
- (void)setup;
- (id)initWithDocumentRoot:(id)arg1;
- (NSUInteger)pageCount;
- (double)progressForCurrentPage;
- (double)totalProgess;
- (BOOL)incrementPage;
- (BOOL)preparePage:(NSUInteger)arg1;
- (id)currentInfos;
- (CGRect)unscaledClipRect;
- (CGRect)boundsRect;

@end
