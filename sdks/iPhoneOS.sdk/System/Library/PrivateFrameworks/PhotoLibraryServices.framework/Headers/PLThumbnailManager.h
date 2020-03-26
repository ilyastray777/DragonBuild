//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLThumbnailManagerCore.h>

@class NSArray, NSLock, NSMutableArray, NSMutableSet, PLPhotoLibrary, PLThrottleTimer;

@interface PLThumbnailManager : PLThumbnailManagerCore
{
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSLock *_fixLock;
    PLThrottleTimer *_timer;
    PLPhotoLibrary *_throttleTimerCameraPreviewWellLibrary;
    BOOL _shouldRebuildThumbnails;
    BOOL _hasExceededThumbnailRebuildRequestLimit;
    BOOL _isRebuildingThumbnails;
    id _observerToken;
    NSArray *_slowPersistenceManagers;
}

+ (void)saveCameraPreviewWellImageForAsset:(id)arg1 library:(id)arg2;
+ (BOOL)assetIsCameraPreviewWellAsset:(id)arg1;
+ (BOOL)assetIsAllowedForCameraPreviewWell:(id)arg1;
+ (id)cameraPreviewWellAssetUUIDFromPersistedFile;
+ (id)cameraPreviewWellAssetFetchRequest;
+ (id)_allowedForCameraPreviewWellPredicate;
+ (BOOL)cameraPreviewWellSupportedOnCurrentDevice;
+ (id)cameraPreviewWellImageQueue;
+ (id)supportedThumbnailFormats;
@property(retain, nonatomic) NSArray *slowPersistenceManagers; // @synthesize slowPersistenceManagers=_slowPersistenceManagers;
@property(retain, nonatomic) id observerToken; // @synthesize observerToken=_observerToken;
// - (void).cxx_destruct;
- (id)thumbManagerForFormatID:(unsigned short)arg1;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)arg1;
- (id)_dataForAsset:(id)arg1 format:(unsigned short)arg2 width:(int )arg3 height:(int )arg4 bytesPerRow:(int )arg5 dataWidth:(int )arg6 dataHeight:(int )arg7 imageDataOffset:(int )arg8 imageDataFormat:(unsigned short )arg9;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;
- (void)_saveCameraPreviewWellImage:(CGImage )arg1 assetUUID:(id)arg2;
- (void)refetchAndSaveCameraPreviewWellImageIfNecessaryForAssetDidSave:(id)arg1;
- (void)_refetchAndSaveCameraPreviewWellImage;
- (BOOL)_compareAsset:(id)arg1 toMetadata:(id)arg2;
- (id)_fetchCameraPreviewWellMetadataInLibrary:(id)arg1;
- (void)_updateCameraPreviewWellMetadataFromAsset:(id)arg1;
- (BOOL)_cameraPreviewWellMetadataLoadAndUpdateIfNeeded:(id )arg1 libraryURL:(id)arg2;
- (id)_throttleTimerCameraPreviewWellLibrary;
- (id)_cameraPreviewWellMetadataQueue;
- (long long)_diskFootprintOfTableThumbnailTables;
- (id)_tableDescriptions;
- (id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(CGSize)arg2 width:(int )arg3 height:(int )arg4 bytesPerRow:(int )arg5 dataWidth:(int )arg6 dataHeight:(int )arg7 imageDataOffset:(int )arg8;
- (void)preheatThumbnailDataWithFormat:(unsigned short)arg1 thumbnailIndexes:(id)arg2;
- (id)dataForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 width:(int )arg4 height:(int )arg5 bytesPerRow:(int )arg6 dataWidth:(int )arg7 dataHeight:(int )arg8 imageDataOffset:(int )arg9;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(NSUInteger)arg2 uuid:(id)arg3;
- (void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2;
- (BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(NSUInteger)arg2 image:(id)arg3 assetUUID:(id)arg4;
- (BOOL)_performDownscaleIntoDatas:(id)arg1 image:(id)arg2 assetUUID:(id)arg3;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (CGImage )newImageForAsset:(id)arg1 format:(id)arg2;
- (id)_allPossibleThumbnailFormatIDs;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)arg1;
- (BOOL)hasExceededRebuildThumbnailRequestLimit;
- (BOOL)isRebuildingThumbnails;
- (void)rebuildAllMissingThumbnailsInLibrary:(id)arg1;
- (id)_rebuildThumbnailsQueue;
- (BOOL)hasMissingThumbnailsInLibrary:(id)arg1;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 library:(id)arg2 error:(id )arg3;
- (id)_missingThumbnailPredicate;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)_recordRebuildThumbnailsAttempt;
- (void)removeRebuildThumbnailsRequest:(const char )arg1;
- (BOOL)hasRebuildThumbnailsRequest;
- (void)addRebuildThumbnailsRequest;
- (BOOL)resetThumbnailsWithModelMigrator:(id)arg1;
- (void)_removeMasterThumbDirectories;
- (void)removeThumbnailTablesUnsupportedOnly:(BOOL)arg1;
- (BOOL)isMissingThumbnailTables;
- (BOOL)hasThumbnailVersionMismatch;
- (BOOL)hasDeprecationsOnly;
- (unsigned short)_configurationThumbnailFormat;
- (int)_configurationThumbnailVersion;
- (BOOL)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4;
- (void)removeObsoleteMetadata;
- (id)thumbnailRebuildIndicatorPath;
- (id)imageTableForFormat:(unsigned short)arg1;
- (void)dealloc;
- (id)initWithPhotoLibraryPathManager:(id)arg1 modelMigrator:(id)arg2;

@end
