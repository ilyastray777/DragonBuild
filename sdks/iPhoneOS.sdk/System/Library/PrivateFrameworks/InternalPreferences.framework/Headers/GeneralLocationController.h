//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InternalPreferences/LocationInternalListController.h>

@interface GeneralLocationController : LocationInternalListController
{
}

- (void)setLogLocations:(id)arg1 specifier:(id)arg2;
- (id)logLocations:(id)arg1;
- (void)deleteEmergencyLocationAsset:(id)arg1;
- (id)getEmergencyLocationAssetVersion:(id)arg1;
- (void)launchE911Tester:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)specifiers;
- (void)removeSpecificLoggingModulesIfNeeded;

@end
