//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DDScannerResult, NSArray, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFScannerResultPrivate : NSObject
{
    DDScannerResult *ddResult;
    PDFPage *page;
    CGRect bounds;
    NSArray *rects;
    BOOL resultIsPastDate;
    BOOL hasRunActionsForResult;
    BOOL hasActionsForResult;
    struct __DDHighlight highlightRef;
}

// - (void).cxx_destruct;

@end
