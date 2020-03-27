//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLSimResource.h>

#import <MTLSimDriver/MTLSerializerResource-Protocol.h>
#import <MTLSimDriver/MTLSerializerTexture-Protocol.h>
#import <MTLSimDriver/MTLTexture-Protocol.h>
#import <MTLSimDriver/MTLTextureImplementation-Protocol.h>

@class MTLSimBuffer, NSString;
@protocol MTLBuffer, MTLResource, MTLTexture;

__attribute__((visibility("hidden")))
@interface MTLSimTexture : MTLSimResource <MTLSerializerTexture, MTLSerializerResource, MTLTexture, MTLTextureImplementation>
{
    MTLSimTexture *_parentTexture;
    NSUInteger _parentRelativeLevel;
    NSUInteger _parentRelativeSlice;
    MTLSimBuffer *_buffer;
    NSUInteger _textureType;
    NSUInteger _pixelFormat;
    NSUInteger _decompressedPixelFormat;
    NSUInteger _usage;
    MTLSimBuffer *_backingBuffer;
    NSUInteger _backingBufferSize;
    id <MTLTexture> _decompressedTextureView;
    NSUInteger _width;
    NSUInteger _height;
    NSUInteger _depth;
    NSUInteger _mipmapLevelCount;
    NSUInteger _sampleCount;
    NSUInteger _arrayLength;
    NSUInteger _numFaces;
    struct __IOSurface _iosurface;
    NSUInteger _iosurfacePlane;
    NSUInteger _bufferOffset;
    NSUInteger _bufferBytesPerRow;
    BOOL _allowGPUOptimizedContents;
    BOOL _framebufferOnly;
    unsigned int _swizzle;
    BOOL _isInternalTextureView;
    NSUInteger _firstMipmapInTail;
    NSUInteger _tailSizeInBytes;
    BOOL isCompressed;
    BOOL _isDrawable;
    NSUInteger rotation;
    NSUInteger iosurfacePlane;
    NSUInteger parentRelativeSlice;
    id <MTLResource> rootResource;
}

+ (void)decompress:(const char )arg1 expandedTex:(char )arg2 srcFormat:(NSUInteger)arg3 destFormat:(NSUInteger)arg4 width:(NSUInteger)arg5 height:(NSUInteger)arg6 destRowBytes:(NSUInteger)arg7 srcRowBytes:(NSUInteger)arg8;
+ (NSUInteger)getDecompressedFormat:(NSUInteger)arg1;
@property(readonly) NSUInteger tailSizeInBytes; // @synthesize tailSizeInBytes=_tailSizeInBytes;
@property(readonly) NSUInteger firstMipmapInTail; // @synthesize firstMipmapInTail=_firstMipmapInTail;
@property(readonly) NSUInteger usage; // @synthesize usage=_usage;
@property(readonly, getter=isFramebufferOnly) BOOL framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
@property(readonly) BOOL allowGPUOptimizedContents; // @synthesize allowGPUOptimizedContents=_allowGPUOptimizedContents;
@property(readonly) id <MTLResource> rootResource; // @synthesize rootResource;
@property(readonly) NSUInteger parentRelativeLevel; // @synthesize parentRelativeLevel=_parentRelativeLevel;
@property(readonly) BOOL isDrawable; // @synthesize isDrawable=_isDrawable;
@property(readonly) NSUInteger parentRelativeSlice; // @synthesize parentRelativeSlice;
@property(readonly) NSUInteger iosurfacePlane; // @synthesize iosurfacePlane;
@property(readonly) struct __IOSurface iosurface; // @synthesize iosurface=_iosurface;
@property(readonly) NSUInteger rotation; // @synthesize rotation;
@property(readonly) BOOL isCompressed; // @synthesize isCompressed;
@property(readonly) NSUInteger textureType;
@property(readonly) NSUInteger arrayLength;
@property(readonly) NSUInteger mipmapLevelCount;
@property(readonly) NSUInteger numFaces;
@property(readonly) NSUInteger depth;
@property(readonly) NSUInteger height;
@property(readonly) NSUInteger width;
@property(readonly) NSUInteger sampleCount;
@property(readonly) NSUInteger decompressedPixelFormat;
@property(readonly) NSUInteger pixelFormat;
@property(readonly) unsigned int swizzleKey; // @synthesize swizzleKey=_swizzle;
@property(readonly, nonatomic) CDStruct_a06f635e swizzle; // @dynamic swizzle;
- (id)newTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(_NSRange)arg3 slices:(_NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
- (void)didModifyData;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(NSUInteger)arg2 withBytes:(const void )arg3 bytesPerRow:(NSUInteger)arg4;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 withBytes:(const void )arg4 bytesPerRow:(NSUInteger)arg5 bytesPerImage:(NSUInteger)arg6;
- (id)newTextureViewWithPixelFormat:(NSUInteger)arg1 textureType:(NSUInteger)arg2 levels:(_NSRange)arg3 slices:(_NSRange)arg4;
- (id)newTextureViewWithPixelFormat:(NSUInteger)arg1;
- (id)newTextureViewWithPixelFormatInternal:(NSUInteger)arg1 isInternalTextureView:(BOOL)arg2;
- (id)newRemoteTextureViewForDevice:(id)arg1;
- (void)getBytes:(void )arg1 bytesPerRow:(NSUInteger)arg2 fromRegion:(CDStruct_caaed6bc)arg3 mipmapLevel:(NSUInteger)arg4;
@property(readonly) NSUInteger hazardTrackingMode;
- (void)getBytes:(void )arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 fromRegion:(CDStruct_caaed6bc)arg4 mipmapLevel:(NSUInteger)arg5 slice:(NSUInteger)arg6;
- (NSUInteger)setPurgeableState:(NSUInteger)arg1;
@property(readonly) NSUInteger bufferBytesPerRow;
@property(readonly) NSUInteger bufferOffset; // @dynamic bufferOffset;
@property(readonly) id <MTLTexture> parentTexture; // @dynamic parentTexture;
@property(readonly) id <MTLBuffer> buffer; // @dynamic buffer;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(NSUInteger)arg1;
@property(readonly) unsigned int textureRef;
- (void)dealloc;
- (id)initWithTexture:(id)arg1 device:(id)arg2;
- (id)initWithDescriptor:(id)arg1 decompressedPixelFormat:(NSUInteger)arg2 iosurface:(struct __IOSurface )arg3 plane:(NSUInteger)arg4 textureRef:(unsigned int)arg5 heap:(id)arg6 device:(id)arg7;
- (id)initWithBuffer:(id)arg1 offset:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 descriptor:(id)arg4 textureRef:(unsigned int)arg5;
- (id)initWithTexture:(id)arg1 pixelFormat:(NSUInteger)arg2 decompressedPixelFormat:(NSUInteger)arg3 textureRef:(unsigned int)arg4 isInternalTextureView:(BOOL)arg5;
- (id)initWithTexture:(id)arg1 pixelFormat:(NSUInteger)arg2 decompressedPixelFormat:(NSUInteger)arg3 textureType:(NSUInteger)arg4 levels:(_NSRange)arg5 slices:(_NSRange)arg6 swizzle:(CDStruct_a06f635e)arg7 textureRef:(unsigned int)arg8 isInternalTextureView:(BOOL)arg9;
- (id)initWithTextureInternal:(id)arg1 pixelFormat:(NSUInteger)arg2 decompressedPixelFormat:(NSUInteger)arg3 textureType:(NSUInteger)arg4 levels:(_NSRange)arg5 slices:(_NSRange)arg6 swizzle:(CDStruct_a06f635e)arg7 compressedView:(BOOL)arg8 textureRef:(unsigned int)arg9 isInternalTextureView:(BOOL)arg10;
- (NSUInteger)calculateOffsetToRegion:(CDStruct_caaed6bc)arg1 level:(NSUInteger)arg2 slice:(NSUInteger)arg3;
- (void)decompressPlaceholder:(const char )arg1 expandedTex:(char )arg2 srcFormat:(NSUInteger)arg3 destFormat:(NSUInteger)arg4 width:(NSUInteger)arg5 height:(NSUInteger)arg6 destRowBytes:(NSUInteger)arg7 srcRowBytes:(NSUInteger)arg8;
@property(readonly) BOOL isSparse;
@property(readonly) id <MTLTexture> decompressedTextureView;
@property(readonly) id <MTLBuffer> backingBuffer;
@property(readonly) long long compressionFeedback; // @dynamic compressionFeedback;

@end
