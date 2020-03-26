//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSHashTable, NSMapTable, SKUIImageDataConsumer, SKUIResourceLoader, UIImage;

__attribute__((visibility("hidden")))
@interface SKUICategoryArtworkLoader : NSObject <SKUIArtworkRequestDelegate>
{
    NSMapTable *_artworkRequestIDs;
    SKUIImageDataConsumer *_imageDataConsumer;
    SKUIResourceLoader *_loader;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}

@property(retain, nonatomic) SKUIImageDataConsumer *imageDataConsumer; // @synthesize imageDataConsumer=_imageDataConsumer;
@property(readonly, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_loader;
// - (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)removeObserver:(id)arg1;
@property(readonly, nonatomic) CGSize imageSize;
@property(readonly, nonatomic) UIImage *placeholderImage;
- (void)loadImageForCategory:(id)arg1 reason:(long long)arg2;
- (id)cachedImageForCategory:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1;
- (id)init;

@end
