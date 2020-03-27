//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPNowPlayingPlaybackQueueDataSource-Protocol.h>

@class MPCPlaybackEngine, MPCPlayerPath, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSMutableArray, NSMutableDictionary, NSString, _MPCPlaybackSessionArchive;
@protocol OS_dispatch_queue;

@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving, MPNowPlayingPlaybackQueueDataSource>
{
    MPCPlaybackEngine *_playbackEngine;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MPNowPlayingInfoCenter *_infoCenter;
    MPRemoteCommandCenter *_commandCenter;
    NSMutableArray *_sessionArchives;
    NSMutableDictionary *_sessionIdentifierArchiveMap;
    _MPCPlaybackSessionArchive *_stagedArchive;
}

+ (id)archivesAtURL:(id)arg1;
@property(retain, nonatomic) _MPCPlaybackSessionArchive *stagedArchive; // @synthesize stagedArchive=_stagedArchive;
@property(readonly, nonatomic) NSMutableDictionary *sessionIdentifierArchiveMap; // @synthesize sessionIdentifierArchiveMap=_sessionIdentifierArchiveMap;
@property(readonly, nonatomic) NSMutableArray *sessionArchives; // @synthesize sessionArchives=_sessionArchives;
@property(readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
// - (void).cxx_destruct;
- (id)_playbackSessionsDirectory;
- (id)_cachesDirectory;
- (void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationWithCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(CGSize)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
- (void)_performCommandEvent:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSString *stateRestorationSessionIdentifier;
- (void)deleteSessionWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)saveSessionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)loadSessionWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) MPCPlayerPath *playerPath;
- (id)initWithPlaybackEngine:(id)arg1;

@end
