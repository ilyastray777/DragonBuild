//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTTimerIntentHandler.h>

#import <MobileTimer/INCreateTimerIntentHandling-Protocol.h>

@interface MTCreateTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>
{
}

- (BOOL)_isPlayingMediaFromMRPlaybackState:(unsigned int)arg1;
- (BOOL)_timer:(id)arg1 conflictsWithRunningTimersInTimers:(id)arg2;
- (id)_responseToCreateTimerIntent:(id)arg1 withCreatedTimer:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4;
- (void)_createTimerWithIntent:(id)arg1 dryRun:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_checkNowPlayingMediaState:(id /* CDUnknownBlockType */)arg1;
- (void)handleCreateTimer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)confirmCreateTimer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveTypeForCreateTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveDurationForCreateTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)resolveLabelForCreateTimer:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;

@end
