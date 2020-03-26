//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID;

__attribute__((visibility("hidden")))
@interface TSCEWrappedCellRef : NSObject <NSCopying>
{
    struct TSCECellRef _cellRef;
}

+ (id)invalidCellRef;
@property(readonly, nonatomic) struct TSCECellRef cellRef; // @synthesize cellRef=_cellRef;
- (id).cxx_construct;
- (id)description;
- (BOOL)isValid;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) struct TSUCellCoord coordinate;
@property(readonly, retain, nonatomic) NSUUID *tableID;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCellCoord:(struct TSUCellCoord)arg1 tableID:(id)arg2;
- (id)initWithCellCoord:(struct TSUCellCoord)arg1 tableUID:(const UUIDData_5fbc143e )arg2;
- (id)initWithCellRef:(const struct TSCECellRef )arg1;
- (id)init;

@end
