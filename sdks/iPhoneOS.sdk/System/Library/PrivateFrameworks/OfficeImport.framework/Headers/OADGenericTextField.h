//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADTextField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OADGenericTextField : OADTextField
{
    NSString *_guid;
    NSString *_type;
}

@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
// - (void).cxx_destruct;
- (BOOL)isSimilarToTextRun:(id)arg1;
- (id)initWithGuid:(id)arg1 type:(id)arg2;

@end
