//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSDecimalNumber, NSString;

@interface PKPeerPaymentRecipient : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _allowsFormalPaymentRequests;
    NSString *_identifier;
    NSUInteger _status;
    NSUInteger _receiveMethod;
    NSString *_receiveCurrency;
    NSDecimalNumber *_minimumReceiveAmount;
    NSDecimalNumber *_maximumReceiveAmount;
    NSDate *_cacheUntil;
    NSString *_phoneOrEmail;
    NSString *_displayName;
}

+ (BOOL)supportsSecureCoding;
+ (id)recipientWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *phoneOrEmail; // @synthesize phoneOrEmail=_phoneOrEmail;
@property(copy, nonatomic) NSDate *cacheUntil; // @synthesize cacheUntil=_cacheUntil;
@property(nonatomic) BOOL allowsFormalPaymentRequests; // @synthesize allowsFormalPaymentRequests=_allowsFormalPaymentRequests;
@property(copy, nonatomic) NSDecimalNumber *maximumReceiveAmount; // @synthesize maximumReceiveAmount=_maximumReceiveAmount;
@property(copy, nonatomic) NSDecimalNumber *minimumReceiveAmount; // @synthesize minimumReceiveAmount=_minimumReceiveAmount;
@property(copy, nonatomic) NSString *receiveCurrency; // @synthesize receiveCurrency=_receiveCurrency;
@property(nonatomic) NSUInteger receiveMethod; // @synthesize receiveMethod=_receiveMethod;
@property(nonatomic) NSUInteger status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cacheableCopy;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDictionary:(id)arg1;

@end
