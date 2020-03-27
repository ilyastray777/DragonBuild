//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SUViewController;

@interface SURotationController : NSObject
{
    SUViewController *_viewController;
}

@property(nonatomic) SUViewController *viewController; // @synthesize viewController=_viewController;
- (CGRect)viewFrameForInterfaceOrientation:(long long)arg1;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (BOOL)orientationAffectsViewFrame;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end
