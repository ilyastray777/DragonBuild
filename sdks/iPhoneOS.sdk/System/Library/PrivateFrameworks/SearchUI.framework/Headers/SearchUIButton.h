//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKButton.h>

@interface SearchUIButton : TLKButton
{
    NSUInteger _type;
}

@property(nonatomic) NSUInteger type; // @synthesize type=_type;
- (void)setFixedSize:(CGSize)arg1;
- (void)updateWithType:(NSUInteger)arg1;
- (BOOL)isPlayButton;
- (id)initWithType:(NSUInteger)arg1;

@end
