//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/JSExport-Protocol.h>

@class JSValue, NSDictionary, NSString;

@protocol VUIJSNetworkInterface <JSExport>
- (void)invalidateConfiguration;
- (void)fetchConfiguration:(BOOL)arg1:(JSValue *)arg2;
- (void)cancelRequest:(NSString *)arg1;
- (JSValue *)makeUpNextRequest:(NSDictionary *)arg1:(JSValue *)arg2;
- (JSValue *)makeRequest:(NSDictionary *)arg1:(JSValue *)arg2;
@end
