//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class LUILogContentViewController, NSDate;

@protocol LUILogContentViewControllerDelegate <NSObject>
- (NSDate *)logContentViewControllerLogEndDate:(LUILogContentViewController *)arg1;
- (NSDate *)logContentViewControllerLogStartDate:(LUILogContentViewController *)arg1;
- (void)logContentViewController:(LUILogContentViewController *)arg1 didSelectDateForLog:(NSDate *)arg2;
- (void)logContentViewController:(LUILogContentViewController *)arg1 didSelectLogOptionWithTimeInterval:(double)arg2;
@end
