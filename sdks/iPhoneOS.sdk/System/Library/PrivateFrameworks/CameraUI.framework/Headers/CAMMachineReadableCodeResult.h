//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMMetadataObjectResult-Protocol.h>

@class AVMetadataMachineReadableCodeObject, AVMetadataObject, NSString;

@interface CAMMachineReadableCodeResult : NSObject <CAMMetadataObjectResult>
{
    NSString *_uniqueIdentifier;
    AVMetadataMachineReadableCodeObject *_underlyingMachineReadableCodeObject;
}

@property(readonly, nonatomic) AVMetadataMachineReadableCodeObject *underlyingMachineReadableCodeObject; // @synthesize underlyingMachineReadableCodeObject=_underlyingMachineReadableCodeObject;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property(readonly, copy, nonatomic) NSString *metadataType;
@property(readonly, nonatomic) NSString *symbolString;
- (BOOL)isOfSignificantSize;
- (id)initWithMachineReadableCodeObject:(id)arg1;

@end
