//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class SGSqlEntityStore;

@interface SGMetricsDissector : SGPipelineDissector
{
    SGSqlEntityStore *_store;
}

// - (void).cxx_destruct;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)initWithEntityStore:(id)arg1;

@end
