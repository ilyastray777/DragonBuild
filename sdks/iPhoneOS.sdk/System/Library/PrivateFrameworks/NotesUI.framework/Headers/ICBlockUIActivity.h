//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

@interface ICBlockUIActivity : UIActivity
{
    id /* CDUnknownBlockType */ _block;
    NSString *_title;
    UIImage *_image;
    NSString *_systemImageName;
    NSString *_customActivityType;
}

@property(retain, nonatomic) NSString *customActivityType; // @synthesize customActivityType=_customActivityType;
@property(retain, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
// - (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (long long)activityCategory;
- (id)activityType;
- (id)_systemImageName;
- (id)activityImage;
- (id)activityTitle;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 activityType:(id)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (id)initWithTitle:(id)arg1 image:(id)arg2 activityType:(id)arg3 block:(id /* CDUnknownBlockType */)arg4;
- (id)initWithTitle:(id)arg1 systemImageName:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;
- (id)initWithTitle:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;

@end
