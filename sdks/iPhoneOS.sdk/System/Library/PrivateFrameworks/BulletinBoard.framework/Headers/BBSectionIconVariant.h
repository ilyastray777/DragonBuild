//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _precomposed;
    long long _format;
    NSData *_imageData;
    NSString *_imagePath;
    NSString *_imageName;
    NSString *_bundlePath;
    NSString *_applicationIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3;
+ (id)variantWithFormat:(long long)arg1 imagePath:(id)arg2;
+ (id)variantWithFormat:(long long)arg1 imageData:(id)arg2;
+ (id)_variantWithFormat:(long long)arg1;
@property(nonatomic, getter=isPrecomposed) BOOL precomposed; // @synthesize precomposed=_precomposed;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) long long format; // @synthesize format=_format;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end
