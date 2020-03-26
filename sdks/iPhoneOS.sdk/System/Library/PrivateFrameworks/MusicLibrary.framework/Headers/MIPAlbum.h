//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class MIPArtist, NSString;

@interface MIPAlbum : PBCodable <NSCopying>
{
    long long _persistentId;
    long long _storeId;
    MIPArtist *_artist;
    NSString *_artworkId;
    NSString *_cloudId;
    NSString *_name;
    int _numDiscs;
    int _numTracks;
    NSString *_sortName;
    int _userRating;
    BOOL _compilation;
    struct {
        unsigned int persistentId:1;
        unsigned int storeId:1;
        unsigned int numDiscs:1;
        unsigned int numTracks:1;
        unsigned int userRating:1;
        unsigned int compilation:1;
    } _has;
}

@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(nonatomic) long long persistentId; // @synthesize persistentId=_persistentId;
@property(nonatomic) BOOL compilation; // @synthesize compilation=_compilation;
@property(nonatomic) int userRating; // @synthesize userRating=_userRating;
@property(retain, nonatomic) NSString *artworkId; // @synthesize artworkId=_artworkId;
@property(nonatomic) int numDiscs; // @synthesize numDiscs=_numDiscs;
@property(nonatomic) int numTracks; // @synthesize numTracks=_numTracks;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCloudId;
@property(nonatomic) BOOL hasPersistentId;
@property(nonatomic) BOOL hasCompilation;
@property(nonatomic) BOOL hasUserRating;
@property(readonly, nonatomic) BOOL hasArtworkId;
@property(nonatomic) BOOL hasNumDiscs;
@property(nonatomic) BOOL hasNumTracks;
@property(readonly, nonatomic) BOOL hasArtist;
@property(readonly, nonatomic) BOOL hasSortName;
@property(readonly, nonatomic) BOOL hasName;
@property(nonatomic) BOOL hasStoreId;

@end
