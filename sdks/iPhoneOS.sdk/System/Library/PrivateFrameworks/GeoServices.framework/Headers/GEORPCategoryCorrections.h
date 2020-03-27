//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPCategoryCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_addeds;
    NSMutableArray *_removeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addeds:1;
        unsigned int read_removeds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addeds:1;
        unsigned int wrote_removeds:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)removedType;
+ (Class)addedType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (id)removedAtIndex:(NSUInteger)arg1;
- (NSUInteger)removedsCount;
- (void)_addNoFlagsRemoved:(id)arg1;
- (void)addRemoved:(id)arg1;
- (void)clearRemoveds;
@property(retain, nonatomic) NSMutableArray *removeds;
- (void)_readRemoveds;
- (id)addedAtIndex:(NSUInteger)arg1;
- (NSUInteger)addedsCount;
- (void)_addNoFlagsAdded:(id)arg1;
- (void)addAdded:(id)arg1;
- (void)clearAddeds;
@property(retain, nonatomic) NSMutableArray *addeds;
- (void)_readAddeds;
- (id)initWithData:(id)arg1;
- (id)init;

@end
