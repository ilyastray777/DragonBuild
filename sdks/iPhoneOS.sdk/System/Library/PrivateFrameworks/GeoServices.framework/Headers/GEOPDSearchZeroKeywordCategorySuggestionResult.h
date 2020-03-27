//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categorys;
    NSMutableArray *_zeroKeywordEntrys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_zeroKeywordEntrys:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_zeroKeywordEntrys:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)zeroKeywordEntryType;
+ (Class)categoryType;
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
- (id)zeroKeywordEntryAtIndex:(NSUInteger)arg1;
- (NSUInteger)zeroKeywordEntrysCount;
- (void)_addNoFlagsZeroKeywordEntry:(id)arg1;
- (void)addZeroKeywordEntry:(id)arg1;
- (void)clearZeroKeywordEntrys;
@property(retain, nonatomic) NSMutableArray *zeroKeywordEntrys;
- (void)_readZeroKeywordEntrys;
- (id)categoryAtIndex:(NSUInteger)arg1;
- (NSUInteger)categorysCount;
- (void)_addNoFlagsCategory:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;
@property(retain, nonatomic) NSMutableArray *categorys;
- (void)_readCategorys;
- (id)initWithData:(id)arg1;
- (id)init;

@end
