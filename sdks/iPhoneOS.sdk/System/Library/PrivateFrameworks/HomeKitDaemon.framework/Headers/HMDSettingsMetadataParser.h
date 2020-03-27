//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDSettingsMetadataParserProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@protocol HMDSettingsControllerDependency;

@interface HMDSettingsMetadataParser : NSObject <HMFLogging, HMDSettingsMetadataParserProtocol>
{
    id <HMDSettingsControllerDependency> _dependency;
}

+ (id)logCategory;
@property(readonly) __weak id <HMDSettingsControllerDependency> dependency; // @synthesize dependency=_dependency;
// - (void).cxx_destruct;
- (id)logIdentifier;
- (id)modelsFromMetadata:(id)arg1;
- (id)initWithDependency:(id)arg1;

@end
