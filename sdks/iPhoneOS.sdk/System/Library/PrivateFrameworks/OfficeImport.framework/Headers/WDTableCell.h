//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WDTableCellProperties, WDTableRow, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : NSObject
{
    NSUInteger mIndex;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    BOOL mUseTrackedProperties;
    WDTableRow *mRow;
}

@property(readonly) __weak WDTableRow *row; // @synthesize row=mRow;
// - (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)text;
- (void)clearProperties;
- (id)properties;
- (long long)compareIndex:(id)arg1;
- (NSUInteger)index;
- (void)setUseTrackedProperties:(BOOL)arg1;
- (BOOL)useTrackedProperties;
- (id)initWithRow:(id)arg1 at:(NSUInteger)arg2;

@end
