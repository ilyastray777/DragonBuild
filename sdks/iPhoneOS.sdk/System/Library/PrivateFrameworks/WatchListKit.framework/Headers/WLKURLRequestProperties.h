//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface WLKURLRequestProperties : NSObject
{
    NSString *_endpoint;
    NSString *_httpMethod;
    NSDictionary *_queryParameters;
    NSDictionary *_headers;
    NSString *_caller;
    NSNumber *_timeout;
    long long _options;
}

+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4;
+ (id)requestPropertiesWithEndpoint:(id)arg1;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *caller; // @synthesize caller=_caller;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
// - (void).cxx_destruct;
- (id)shortDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)URLRequestWithConfiguration:(id)arg1;

@end
