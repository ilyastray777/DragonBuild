//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem
{
    NSURL *_baseURL;
    int _writeStyle;
}

@property(nonatomic) int writeStyle; // @synthesize writeStyle=_writeStyle;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
// - (void).cxx_destruct;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)payloadAsOriginalURL;
- (id)payloadAsFullURL;
- (void)write:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
