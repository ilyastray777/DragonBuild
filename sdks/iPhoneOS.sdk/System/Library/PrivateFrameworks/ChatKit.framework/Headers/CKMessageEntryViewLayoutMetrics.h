//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CKMessageEntryViewLayoutMetrics : NSObject <NSSecureCoding>
{
    double _defaultEntryContentViewHeight;
    double _defaultSubjectEntryContentViewHeight;
    double _defaultEntryViewHeight;
    double _defaultSubjectEntryViewHeight;
    UIEdgeInsets _entryViewContentInsets;
    UIEdgeInsets _entryViewTextAlignmentInsets;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double defaultSubjectEntryViewHeight; // @synthesize defaultSubjectEntryViewHeight=_defaultSubjectEntryViewHeight;
@property(readonly, nonatomic) double defaultEntryViewHeight; // @synthesize defaultEntryViewHeight=_defaultEntryViewHeight;
@property(readonly, nonatomic) double defaultSubjectEntryContentViewHeight; // @synthesize defaultSubjectEntryContentViewHeight=_defaultSubjectEntryContentViewHeight;
@property(readonly, nonatomic) double defaultEntryContentViewHeight; // @synthesize defaultEntryContentViewHeight=_defaultEntryContentViewHeight;
@property(readonly, nonatomic) UIEdgeInsets entryViewTextAlignmentInsets; // @synthesize entryViewTextAlignmentInsets=_entryViewTextAlignmentInsets;
@property(readonly, nonatomic) UIEdgeInsets entryViewContentInsets; // @synthesize entryViewContentInsets=_entryViewContentInsets;
- (void)calculateTextMetrics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
