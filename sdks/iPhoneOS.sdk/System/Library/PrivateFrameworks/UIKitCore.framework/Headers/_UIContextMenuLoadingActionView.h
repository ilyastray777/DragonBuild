//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIContextMenuActionView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLoadingActionView : _UIContextMenuActionView
{
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
// - (void).cxx_destruct;
- (id)_contentsCompositingFilter;
- (id)_contentsTintColor;
- (void)_updateContentAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (id)trailingView;
- (id)init;

@end
