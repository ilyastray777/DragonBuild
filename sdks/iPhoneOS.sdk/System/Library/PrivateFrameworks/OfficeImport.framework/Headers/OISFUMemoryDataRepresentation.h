//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation
{
    NSData *mData;
}

- (NSUInteger)readIntoData:(id)arg1;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(NSUInteger)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)isReadable;
- (id)data;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithData:(id)arg1;

@end
