//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSString;

@interface MPSStateRequest : PBRequest <NSCopying>
{
    long long _originalLibrarySize;
    NSString *_backupDeviceID;
    NSString *_backupDeviceUDID;
    NSString *_backupDeviceUUID;
    NSString *_iCPLDeviceID;
    NSString *_mPSDeviceID;
    struct {
        unsigned int originalLibrarySize:1;
    } _has;
}

@property(nonatomic) long long originalLibrarySize; // @synthesize originalLibrarySize=_originalLibrarySize;
@property(retain, nonatomic) NSString *backupDeviceUDID; // @synthesize backupDeviceUDID=_backupDeviceUDID;
@property(retain, nonatomic) NSString *backupDeviceUUID; // @synthesize backupDeviceUUID=_backupDeviceUUID;
@property(retain, nonatomic) NSString *backupDeviceID; // @synthesize backupDeviceID=_backupDeviceID;
@property(retain, nonatomic) NSString *iCPLDeviceID; // @synthesize iCPLDeviceID=_iCPLDeviceID;
@property(retain, nonatomic) NSString *mPSDeviceID; // @synthesize mPSDeviceID=_mPSDeviceID;
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
@property(nonatomic) BOOL hasOriginalLibrarySize;
@property(readonly, nonatomic) BOOL hasBackupDeviceUDID;
@property(readonly, nonatomic) BOOL hasBackupDeviceUUID;
@property(readonly, nonatomic) BOOL hasBackupDeviceID;
@property(readonly, nonatomic) BOOL hasICPLDeviceID;
@property(readonly, nonatomic) BOOL hasMPSDeviceID;

@end
