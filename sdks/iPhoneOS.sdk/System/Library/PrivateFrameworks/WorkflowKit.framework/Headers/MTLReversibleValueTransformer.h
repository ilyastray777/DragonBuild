//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLValueTransformer.h>

@interface MTLReversibleValueTransformer : MTLValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
- (id)reverseTransformedValue:(id)arg1 success:(BOOL )arg2 error:(id )arg3;
- (id)reverseTransformedValue:(id)arg1;
- (id)initWithForwardBlock:(id /* CDUnknownBlockType */)arg1 reverseBlock:(id /* CDUnknownBlockType */)arg2;

@end
