//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Entity.h>

@interface ML3Collection : ML3Entity
{
}

+ (BOOL)_updateRepresentativeItemsForPersistentIDs:(id)arg1 usingConnection:(id)arg2;
+ (id)collectionEntityClasses;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long )arg3 count:(NSUInteger)arg4 usingConnection:(id)arg5;
+ (BOOL)removeOrphanedCollectionsInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (BOOL)canonicalizeCollectionRepresentativeItemsInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)artworkCacheIDProperty;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingKey;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(NSUInteger)arg2 forUpdateTrackValues:(id)arg3;
- (void)updateTrackValues:(id)arg1;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;

@end
