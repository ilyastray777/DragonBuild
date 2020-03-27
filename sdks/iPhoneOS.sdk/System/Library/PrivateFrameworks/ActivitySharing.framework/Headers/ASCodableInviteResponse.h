//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class ASCodableActivityDataPreview, ASCodableShareLocations, NSString;

@interface ASCodableInviteResponse : PBCodable <NSCopying>
{
    ASCodableActivityDataPreview *_activityDataPreview;
    NSString *_handshakeToken;
    NSString *_inviteeBuildNumber;
    NSString *_inviteeCloudKitAddress;
    ASCodableShareLocations *_inviteeShareLocations;
    unsigned int _inviteeVersion;
    int _responseCode;
    struct {
        unsigned int inviteeVersion:1;
        unsigned int responseCode:1;
    } _has;
}

@property(retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview; // @synthesize activityDataPreview=_activityDataPreview;
@property(nonatomic) unsigned int inviteeVersion; // @synthesize inviteeVersion=_inviteeVersion;
@property(retain, nonatomic) NSString *inviteeBuildNumber; // @synthesize inviteeBuildNumber=_inviteeBuildNumber;
@property(retain, nonatomic) ASCodableShareLocations *inviteeShareLocations; // @synthesize inviteeShareLocations=_inviteeShareLocations;
@property(retain, nonatomic) NSString *inviteeCloudKitAddress; // @synthesize inviteeCloudKitAddress=_inviteeCloudKitAddress;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(retain, nonatomic) NSString *handshakeToken; // @synthesize handshakeToken=_handshakeToken;
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
@property(readonly, nonatomic) BOOL hasActivityDataPreview;
@property(nonatomic) BOOL hasInviteeVersion;
@property(readonly, nonatomic) BOOL hasInviteeBuildNumber;
@property(readonly, nonatomic) BOOL hasInviteeShareLocations;
@property(readonly, nonatomic) BOOL hasInviteeCloudKitAddress;
@property(nonatomic) BOOL hasResponseCode;
@property(readonly, nonatomic) BOOL hasHandshakeToken;

@end
