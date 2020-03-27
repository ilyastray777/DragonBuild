//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL, PKPassUpgradeRequest, PKPaymentPass;

@interface PKPendingPassUpgrade : NSObject
{
    BOOL _appletDidUpgrade;
    BOOL _webRequestFinished;
    BOOL _requiresAppletUpgrade;
    BOOL _passUpgradeInProgress;
    PKPassUpgradeRequest *_upgradeRequest;
    NSMutableArray *_completionHandlers;
    PKPaymentPass *_upgradedPass;
    NSURL *_upgradePassURL;
}

@property(nonatomic) BOOL passUpgradeInProgress; // @synthesize passUpgradeInProgress=_passUpgradeInProgress;
@property(copy, nonatomic) NSURL *upgradePassURL; // @synthesize upgradePassURL=_upgradePassURL;
@property(retain, nonatomic) PKPaymentPass *upgradedPass; // @synthesize upgradedPass=_upgradedPass;
@property(nonatomic) BOOL appletDidUpgrade; // @synthesize appletDidUpgrade=_appletDidUpgrade;
@property(nonatomic) BOOL requiresAppletUpgrade; // @synthesize requiresAppletUpgrade=_requiresAppletUpgrade;
@property(nonatomic) BOOL webRequestFinished; // @synthesize webRequestFinished=_webRequestFinished;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) PKPassUpgradeRequest *upgradeRequest; // @synthesize upgradeRequest=_upgradeRequest;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL upgradeIsComplete;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;

@end
