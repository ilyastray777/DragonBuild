//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroIdentityViewController : OBWelcomeController
{
    STIntroductionModel *_model;
    id /* CDUnknownBlockType */ _continueHandler;
}

@property(readonly, copy) id /* CDUnknownBlockType */ continueHandler; // @synthesize continueHandler=_continueHandler;
@property(readonly) STIntroductionModel *model; // @synthesize model=_model;
// - (void).cxx_destruct;
- (void)_myChildsDevice:(id)arg1;
- (void)_myDevice:(id)arg1;
- (void)loadView;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(id /* CDUnknownBlockType */)arg2;

@end
