//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKAlertControllerDelegate-Protocol.h>

@class CKPresentationControllerWindow, UIPopoverPresentationController, UIViewController;

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate>
{
    UIViewController *_presentedViewController;
    UIPopoverPresentationController *_currentPresentationController;
    CKPresentationControllerWindow *_presentationWindow;
    id /* CDUnknownBlockType */ _presentationHandler;
    id /* CDUnknownBlockType */ _dismissalHandler;
}

+ (id)sharedInstance;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property(retain, nonatomic) CKPresentationControllerWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(retain, nonatomic) UIPopoverPresentationController *currentPresentationController; // @synthesize currentPresentationController=_currentPresentationController;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
// - (void).cxx_destruct;
- (void)_cleanup;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(id /* CDUnknownBlockType */)arg3 dismissalHandler:(id /* CDUnknownBlockType */)arg4 animated:(BOOL)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)alertControllerViewDidDisappear:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect )arg2 inView:(inout id )arg3;
- (void)dealloc;

@end
