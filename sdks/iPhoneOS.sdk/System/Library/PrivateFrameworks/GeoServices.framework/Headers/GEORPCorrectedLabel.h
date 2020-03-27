//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, GEOMapRegion, NSMutableArray, NSString, PBDataReader;

@interface GEORPCorrectedLabel : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    NSString *_correctedValue;
    NSMutableArray *_featureHandles;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
    NSUInteger _uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    BOOL _localizedLabels;
    struct {
        unsigned int has_uid:1;
        unsigned int has_localizedLabels:1;
        unsigned int read_coordinate:1;
        unsigned int read_correctedValue:1;
        unsigned int read_featureHandles:1;
        unsigned int read_featureRegion:1;
        unsigned int read_originalValue:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_correctedValue:1;
        unsigned int wrote_featureHandles:1;
        unsigned int wrote_featureRegion:1;
        unsigned int wrote_originalValue:1;
        unsigned int wrote_uid:1;
        unsigned int wrote_localizedLabels:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)featureHandleType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLocalizedLabels;
@property(nonatomic) BOOL localizedLabels;
@property(nonatomic) BOOL hasUid;
@property(nonatomic) NSUInteger uid;
@property(retain, nonatomic) GEOLatLng *coordinate;
@property(readonly, nonatomic) BOOL hasCoordinate;
- (void)_readCoordinate;
- (id)featureHandleAtIndex:(NSUInteger)arg1;
- (NSUInteger)featureHandlesCount;
- (void)_addNoFlagsFeatureHandle:(id)arg1;
- (void)addFeatureHandle:(id)arg1;
- (void)clearFeatureHandles;
@property(retain, nonatomic) NSMutableArray *featureHandles;
- (void)_readFeatureHandles;
@property(retain, nonatomic) GEOMapRegion *featureRegion;
@property(readonly, nonatomic) BOOL hasFeatureRegion;
- (void)_readFeatureRegion;
@property(retain, nonatomic) NSString *correctedValue;
@property(readonly, nonatomic) BOOL hasCorrectedValue;
- (void)_readCorrectedValue;
@property(retain, nonatomic) NSString *originalValue;
@property(readonly, nonatomic) BOOL hasOriginalValue;
- (void)_readOriginalValue;
- (id)initWithData:(id)arg1;
- (id)init;

@end
