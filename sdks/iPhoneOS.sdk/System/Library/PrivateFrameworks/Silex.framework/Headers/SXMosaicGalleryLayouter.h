//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SXMosaicGalleryColumnLayout;
@protocol SXMosaicGalleryLayouterDataSource;

@interface SXMosaicGalleryLayouter : NSObject
{
    BOOL _reverseNextHorizontalLivingRoomLayout;
    NSUInteger _numberOfItems;
    double _width;
    NSArray *_supportedTileTypeClusters;
    id <SXMosaicGalleryLayouterDataSource> _dataSource;
    SXMosaicGalleryColumnLayout *_columnLayout;
    NSMutableArray *_layouts;
    NSMutableArray *_clusters;
    NSMutableArray *_items;
    NSMutableArray *_views;
    NSMutableArray *_frames;
    CGSize _contentSize;
}

@property(nonatomic) BOOL reverseNextHorizontalLivingRoomLayout; // @synthesize reverseNextHorizontalLivingRoomLayout=_reverseNextHorizontalLivingRoomLayout;
@property(readonly, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(readonly, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSMutableArray *clusters; // @synthesize clusters=_clusters;
@property(readonly, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(readonly, nonatomic) SXMosaicGalleryColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
@property(nonatomic) __weak id <SXMosaicGalleryLayouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double width; // @synthesize width=_width;
// - (void).cxx_destruct;
- (void)resetLayout;
- (id)viewForItem:(id)arg1;
@property(readonly, nonatomic) NSUInteger numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (id)itemAtIndex:(NSUInteger)arg1;
- (id)itemsForRange:(_NSRange)arg1;
- (id)layoutForCluster:(id)arg1 previousLayouts:(id)arg2;
- (id)clusterForItemsInRange:(_NSRange)arg1;
@property(readonly, nonatomic) NSArray *supportedTileTypeClusters; // @synthesize supportedTileTypeClusters=_supportedTileTypeClusters;
- (void)reset;
- (id)viewForItemAtIndex:(NSUInteger)arg1;
- (CGRect)frameForItemAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)layoutGalleryOnView:(id)arg1;
- (void)calculateLayoutForWidth:(double)arg1;
- (id)initWithDataSource:(id)arg1;

@end
