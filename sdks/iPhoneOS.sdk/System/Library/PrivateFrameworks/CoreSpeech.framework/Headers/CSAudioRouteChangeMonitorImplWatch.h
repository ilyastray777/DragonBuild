//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSAudioRouteChangeMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
}

// - (void).cxx_destruct;
- (void)_notifyHearstConnectionState:(BOOL)arg1;
- (BOOL)_fetchHearstConnectionState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)activeAudioRouteDidChange:(id)arg1;
- (BOOL)jarvisConnected;
- (void)getJarvisConnected:(id /* CDUnknownBlockType */)arg1;
- (BOOL)hearstConnected;
- (void)getHearstConnected:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
