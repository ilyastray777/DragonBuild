//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol FCHeadlineProviding;

@interface NUArticleActivityItemSource : NSObject <UIActivityItemSource>
{
    id <FCHeadlineProviding> _headline;
}

@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
// - (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithHeadline:(id)arg1;

@end
