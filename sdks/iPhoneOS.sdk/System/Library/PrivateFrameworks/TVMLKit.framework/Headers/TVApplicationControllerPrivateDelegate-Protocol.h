//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVApplicationControllerDelegate-Protocol.h>

@class IKAppDocument, NSDictionary, NSURL, TVApplicationController, UIViewController;
@protocol TVAppRootViewController;

@protocol TVApplicationControllerPrivateDelegate <TVApplicationControllerDelegate>

@optional
- (BOOL)appController:(TVApplicationController *)arg1 shouldIgnoreDismissalForViewController:(UIViewController *)arg2;
- (BOOL)appController:(TVApplicationController *)arg1 shouldOverrideModalBehaviorForDocument:(IKAppDocument *)arg2 andExistingModalDocument:(IKAppDocument *)arg3;
- (BOOL)appController:(TVApplicationController *)arg1 shouldDisplayShroudForURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3;
- (BOOL)appController:(TVApplicationController *)arg1 shouldDismissShroudForDocument:(IKAppDocument *)arg2;
- (UIViewController<TVAppRootViewController> *)rootViewControllerForAppController:(TVApplicationController *)arg1;
@end
