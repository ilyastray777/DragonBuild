//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationAction, NCNotificationRequest, NSDictionary, NSString;
@protocol NCNotificationCustomContentDelegate;

@protocol NCNotificationCustomContent <NSObject>
@property(nonatomic) __weak id <NCNotificationCustomContentDelegate> delegate;
@property(readonly, copy, nonatomic) NSString *title;
- (BOOL)userInteractionEnabled;
- (NSUInteger)customContentLocation;
- (BOOL)allowManualDismiss;
- (BOOL)overridesDefaultTitle;
- (BOOL)defaultContentHidden;
- (BOOL)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2 withUserInfo:(NSDictionary *)arg3;
- (BOOL)performAction:(NCNotificationAction *)arg1 forNotification:(NCNotificationRequest *)arg2;
- (BOOL)didReceiveNotificationRequest:(NCNotificationRequest *)arg1;

@optional
@property(readonly, nonatomic) NSString *contentExtensionIdentifier;
- (BOOL)restoreInputViews;
- (void)preserveInputViews;
- (id)cancelTouches;
- (void)playMedia;
@end
