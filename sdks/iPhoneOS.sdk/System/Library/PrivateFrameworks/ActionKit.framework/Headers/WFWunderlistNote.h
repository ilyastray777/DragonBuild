//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSDate, NSString;

@interface WFWunderlistNote : MTLModel <MTLJSONSerializing>
{
    long long _noteId;
    long long _taskId;
    NSString *_content;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    long long _revision;
}

+ (id)updatedAtJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) long long revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) long long noteId; // @synthesize noteId=_noteId;
// - (void).cxx_destruct;

@end
