//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString;

@interface OBSetupAssistantAppsAndDataController : OBTableWelcomeController
{
    NSString *_detailedLabelHeader;
    NSString *_detailedLabelBody;
}

@property(retain, nonatomic) NSString *detailedLabelBody; // @synthesize detailedLabelBody=_detailedLabelBody;
@property(retain, nonatomic) NSString *detailedLabelHeader; // @synthesize detailedLabelHeader=_detailedLabelHeader;
// - (void).cxx_destruct;
- (void)setTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;

@end
