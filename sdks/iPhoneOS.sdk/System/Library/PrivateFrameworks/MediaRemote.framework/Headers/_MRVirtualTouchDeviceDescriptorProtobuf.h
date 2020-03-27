//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying>
{
    float _screenSizeHeight;
    float _screenSizeWidth;
    BOOL _absolute;
    BOOL _integratedDisplay;
    struct {
        unsigned int screenSizeHeight:1;
        unsigned int screenSizeWidth:1;
        unsigned int absolute:1;
        unsigned int integratedDisplay:1;
    } _has;
}

@property(nonatomic) float screenSizeHeight; // @synthesize screenSizeHeight=_screenSizeHeight;
@property(nonatomic) float screenSizeWidth; // @synthesize screenSizeWidth=_screenSizeWidth;
@property(nonatomic) BOOL integratedDisplay; // @synthesize integratedDisplay=_integratedDisplay;
@property(nonatomic) BOOL absolute; // @synthesize absolute=_absolute;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasScreenSizeHeight;
@property(nonatomic) BOOL hasScreenSizeWidth;
@property(nonatomic) BOOL hasIntegratedDisplay;
@property(nonatomic) BOOL hasAbsolute;

@end
