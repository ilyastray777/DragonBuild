//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMDeclarationBase : CEMPayloadBase
{
    NSString *_declarationType;
    NSString *_declarationIdentifier;
    NSString *_declarationDescription;
    NSString *_declarationServerHash;
    NSNumber *_declarationRequiresNetworkTether;
    NSString *_declarationActivationScope;
    CEMAnyPayload *_declarationPayload;
}

+ (id)declarationForData:(id)arg1 error:(id )arg2;
+ (id)declarationForPayload:(id)arg1 error:(id )arg2;
+ (id)declarationClass;
@property(copy, nonatomic) CEMAnyPayload *declarationPayload; // @synthesize declarationPayload=_declarationPayload;
@property(copy, nonatomic) NSString *declarationActivationScope; // @synthesize declarationActivationScope=_declarationActivationScope;
@property(copy, nonatomic) NSNumber *declarationRequiresNetworkTether; // @synthesize declarationRequiresNetworkTether=_declarationRequiresNetworkTether;
@property(copy, nonatomic) NSString *declarationServerHash; // @synthesize declarationServerHash=_declarationServerHash;
@property(copy, nonatomic) NSString *declarationDescription; // @synthesize declarationDescription=_declarationDescription;
@property(copy, nonatomic) NSString *declarationIdentifier; // @synthesize declarationIdentifier=_declarationIdentifier;
@property(copy, nonatomic) NSString *declarationType; // @synthesize declarationType=_declarationType;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)updateServerHash;
- (id)serializeAsDataWithError:(id )arg1;
- (id)serialize;
- (BOOL)loadDeclarationFromDictionary:(id)arg1 error:(id )arg2;

@end
