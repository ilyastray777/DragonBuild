//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMFoundInMailModelScore : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
// - (void).cxx_destruct;
- (void)trackEventWithScalar:(NSUInteger)arg1 model:(struct SGMFoundInMailModelType_)arg2 contactDetail:(struct SGMContactDetailType_)arg3 result:(struct SGMTypeSafeBool_)arg4 correct:(struct SGMTypeSafeBool_)arg5 mode:(struct SGFoundInMailModelMode_)arg6 supervision:(struct SGMFoundInMailSupervisionType_)arg7;
- (id)init;

@end
