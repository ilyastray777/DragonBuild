//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class CKDetailsAddGroupNameView;

__attribute__((visibility("hidden")))
@interface CKDetailsGroupNameCell : CKDetailsCell <CKDetailsCell>
{
    CKDetailsAddGroupNameView *_groupNameView;
}

+ (BOOL)shouldHighlight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) CKDetailsAddGroupNameView *groupNameView; // @synthesize groupNameView=_groupNameView;
// - (void).cxx_destruct;
- (void)dealloc;

@end
