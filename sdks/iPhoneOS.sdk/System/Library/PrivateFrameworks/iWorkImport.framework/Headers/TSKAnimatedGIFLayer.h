//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class TSKAnimatedGIFController;

__attribute__((visibility("hidden")))
@interface TSKAnimatedGIFLayer : CALayer
{
    TSKAnimatedGIFController *mController;
}

+ (id)defaultActionForKey:(id)arg1;
- (void)display;
@property(nonatomic) TSKAnimatedGIFController *controller;
- (void)teardown;
- (void)dealloc;

@end
