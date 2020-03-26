//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord;

@interface HDCloudSyncRecord : NSObject
{
    CKRecord *_record;
}

+ (BOOL)_validateOptionalValueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(BOOL)arg4 error:(id )arg5;
+ (id)_valueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(BOOL)arg4 error:(id )arg5;
+ (BOOL)hasFutureSchema:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id )arg2;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
// - (void).cxx_destruct;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;

@end
