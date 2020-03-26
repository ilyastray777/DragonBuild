//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoIPCamera : VCMediaControlInfo
{
    unsigned char _controlInfoCVO[8];
}

- (int)serializeToBuffer:(char )arg1 bufferLength:(NSUInteger)arg2 blobLength:(NSUInteger )arg3;
- (int)getInfo:(void )arg1 bufferLength:(NSUInteger)arg2 infoSize:(NSUInteger )arg3 type:(unsigned int)arg4;
- (BOOL)hasInfoType:(unsigned int)arg1;
- (int)setInfo:(void )arg1 size:(NSUInteger)arg2 type:(unsigned int)arg3;
- (int)configureWithBuffer:(const char )arg1 length:(NSUInteger)arg2 optionalControlInfo:(CDStruct_39aa150d )arg3;
- (NSUInteger)serializedSize;

@end
