//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardQuickActionsButtonSettings : PTSettings
{
    BOOL _showsButtons;
    BOOL _colorsBackground;
    double _topOutset;
    double _leadingOutset;
    double _trailingOutset;
    double _bottomOutset;
}

+ (id)settingsControllerModule;
@property(nonatomic) double bottomOutset; // @synthesize bottomOutset=_bottomOutset;
@property(nonatomic) double trailingOutset; // @synthesize trailingOutset=_trailingOutset;
@property(nonatomic) double leadingOutset; // @synthesize leadingOutset=_leadingOutset;
@property(nonatomic) double topOutset; // @synthesize topOutset=_topOutset;
@property(nonatomic) BOOL colorsBackground; // @synthesize colorsBackground=_colorsBackground;
@property(nonatomic) BOOL showsButtons; // @synthesize showsButtons=_showsButtons;
- (void)setDefaultValues;

@end
