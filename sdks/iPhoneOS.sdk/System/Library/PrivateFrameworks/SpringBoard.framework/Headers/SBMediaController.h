//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSDisplayObserving-Protocol.h>
#import <SpringBoard/MPAVRoutingControllerDelegate-Protocol.h>
#import <SpringBoard/SBAVSystemControllerCacheObserver-Protocol.h>

@class MPAVRoutingController, NSDate, NSDictionary, NSNumber, NSTimer, SBAVSystemControllerCache, SBApplication, SBDirectToAirPlayController, SBSStatusBarStyleOverridesAssertion, SBVolumeControl;

@interface SBMediaController : NSObject <MPAVRoutingControllerDelegate, FBSDisplayObserving, SBAVSystemControllerCacheObserver>
{
    int _manualVolumeChangeCount;
    NSDictionary *_nowPlayingInfo;
    float _pendingVolumeChange;
    NSTimer *_volumeCommitTimer;
    BOOL _debounceVolumeRepeat;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    SBApplication *_lastNowPlayingApplication;
    BOOL _lastNowPlayingAppIsPlaying;
    int _lastMediaRemoteAppActivityStatus;
    BOOL _suppressHUD;
    BOOL _screenSharingViaAVSystemController;
    BOOL _screenSharingViaDisplayMonitor;
    BOOL _screenSharingSetsStatusBarOverride;
    NSTimer *_screenSharingStatusBarOverrideTimer;
    NSTimer *_videoOutStatusBarOverrideTimer;
    MPAVRoutingController *_routingController;
    SBAVSystemControllerCache *_avCache;
    SBVolumeControl *_volumeControl;
    NSNumber *_audioCategoryMusicVolume;
    NSDate *_lastActivityDate;
    SBSStatusBarStyleOverridesAssertion *_screenSharingStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_videoOutStatusBarStyleOverrideAssertion;
    SBDirectToAirPlayController *_directToAirPlayController;
    int _nowPlayingProcessPID;
}

+ (void)sendResetPlaybackTimeoutCommand;
+ (BOOL)applicationCanBeConsideredNowPlaying:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
// - (void).cxx_destruct;
- (void)_updateLastRecentActivityDate;
- (void)cache:(id)arg1 didUpdateAirplayDisplayActive:(BOOL)arg2;
- (void)cacheDidRebuildAfterServerDeath:(id)arg1;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)_nowPlayingAppDidExit:(id)arg1;
- (void)_authenticationStateChanged:(id)arg1;
- (void)_applicationActivityStatusDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg1;
- (void)_setNowPlayingApplication:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingInfoDidChange:(id)arg1;
- (void)_notifyThatScreenSharingChanged;
- (void)_updateDisplayMonitorState;
- (void)_updateAVRoutes;
- (BOOL)_displayMonitorHasAConnectedExternalIdentity;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (id)nameOfPickedRoute;
- (BOOL)isScreenSharing;
- (BOOL)wirelessDisplayRouteIsPicked;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)volumeControlIsAvailable;
- (BOOL)handsetRouteIsSelected;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)cancelVolumeEvent;
- (BOOL)setPlaybackSpeed:(int)arg1 eventSource:(long long)arg2;
- (BOOL)toggleShuffleForEventSource:(long long)arg1;
- (BOOL)toggleRepeatForEventSource:(long long)arg1;
- (BOOL)stopForEventSource:(long long)arg1;
- (BOOL)togglePlayPauseForEventSource:(long long)arg1;
- (BOOL)pauseForEventSource:(long long)arg1;
- (BOOL)playForEventSource:(long long)arg1;
- (BOOL)endSeek:(int)arg1 eventSource:(long long)arg2;
- (BOOL)beginSeek:(int)arg1 eventSource:(long long)arg2;
- (BOOL)changeTrack:(int)arg1 eventSource:(long long)arg2;
- (BOOL)_sendMediaCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_startVideoOutStatusBarStyleOverride;
- (void)_clearVideoOutStatusBarStyleOverride;
- (void)_updateScreenSharingStatusBarStyleOverrideSuppressionPreference:(id)arg1;
- (void)updateScreenSharingStatusBarStyleOverride;
- (void)_clearScreenSharingStatusBarStyleOverride;
@property BOOL suppressHUD;
@property(readonly, nonatomic) __weak SBApplication *nowPlayingApplication;
- (BOOL)addTrackToWishListForEventSource:(long long)arg1;
- (BOOL)likeTrackForEventSource:(long long)arg1;
- (BOOL)banTrackForEventSource:(long long)arg1;
@property(readonly, nonatomic) NSDate *lastActivityDate;
- (BOOL)isApplicationActivityActive;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (BOOL)isLastTrack;
- (BOOL)isFirstTrack;
- (BOOL)hasTrack;
- (void)setNowPlayingInfo:(id)arg1;
- (id)_nowPlayingInfo;
- (void)dealloc;
- (id)init;

@end
