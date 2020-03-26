//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUComponent-Protocol.h>
#import <NewsUI/NULayout-Protocol.h>

@class NSString, NUComponents, NULayoutResolver;
@protocol NUNode, NUSizer;

@interface NULayout : NSObject <NULayout, NUComponent>
{
    id <NUSizer> _sizer;
    id <NUNode> _node;
    NUComponents *_components;
    NULayoutResolver *_resolver;
    struct NULayoutOptions _options;
}

@property(readonly, nonatomic) NULayoutResolver *resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) NUComponents *components; // @synthesize components=_components;
@property(readonly, nonatomic) struct NULayoutOptions options; // @synthesize options=_options;
@property(readonly, nonatomic) id <NUNode> node; // @synthesize node=_node;
@property(readonly, nonatomic) id <NUSizer> sizer; // @synthesize sizer=_sizer;
// - (void).cxx_destruct;
- (void)buildComponents:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) CGPoint originOffset;
- (void)layoutComponentsInBounds:(CGRect)arg1 originOffset:(CGPoint)arg2 layoutContext:(id)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithNode:(id)arg1 sizer:(id)arg2 options:(struct NULayoutOptions)arg3 componentsBlock:(id /* CDUnknownBlockType */)arg4;

@end
