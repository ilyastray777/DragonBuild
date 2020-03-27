//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFiCloudDriveAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
+ (BOOL)mustBeAvailableForDisplay;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(NSUInteger)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (id)errorReasonForGlobalLevelStatus:(NSUInteger)arg1;
- (NSUInteger)globalLevelStatus;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end
