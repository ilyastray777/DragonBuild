//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface TVImageOutlineDecorator : TVImageScaleDecorator
{
    UIColor *_outlineColor;
    UIEdgeInsets _outlineWidths;
}

+ (id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2;
@property(readonly, nonatomic) UIEdgeInsets outlineWidths; // @synthesize outlineWidths=_outlineWidths;
@property(readonly, copy, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
// - (void).cxx_destruct;
- (void)drawInContext:(id)arg1 imageRect:(CGRect)arg2;
- (id)decoratorIdentifier;
- (id)initWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2;

@end
