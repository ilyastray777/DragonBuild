//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHPhotoLibrary.h>

@class PXPhotoLibraryLocalDefaults;

@interface PHPhotoLibrary (PhotosUICore)
+ (id)px_appPhotoLibrary;
- (id)px_collectionListWithLocalIdentifier:(id)arg1;
- (id)px_collectionListWithTransientIdentifier:(id)arg1;
- (id)px_assetCollectionWithTransientIdentifier:(id)arg1;
- (id)px_memoryWithLocalIdentifier:(id)arg1;
- (id)px_assetCollectionWithLocalIdentifier:(id)arg1;
- (id)px_assetCollectionForSmartAlbumWithSubtype:(long long)arg1;
- (id)px_objectWithLocalIdentifier:(id)arg1;
- (BOOL)px_fetchHasNoVisibleAssets;
@property(readonly) PXPhotoLibraryLocalDefaults *px_localDefaults;
@property(readonly, nonatomic, getter=px_areChangesPaused) BOOL px_changesPaused;
- (void)px_endPausingChanges:(id)arg1;
- (id)px_beginPausingChangesWithTimeout:(double)arg1;
- (void)px_unregisterChangeObserver:(id)arg1;
- (void)px_registerChangeObserver:(id)arg1;
- (id)px_changeDistributor;
@end
