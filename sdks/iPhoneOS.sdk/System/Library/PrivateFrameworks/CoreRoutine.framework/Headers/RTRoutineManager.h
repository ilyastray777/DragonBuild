//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/RTFrameworkProtocol-Protocol.h>

@class NSString, NSXPCConnection, RTEventAgentHelper, RTRoutineManagerRegistrantAction, RTRoutineManagerRegistrantScenarioTrigger, RTTokenBucket;
@protocol OS_dispatch_queue;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>
{
    NSXPCConnection *_xpcConnection;
    id /* CDUnknownBlockType */ _visitHandler;
    id /* CDUnknownBlockType */ _leechedVisitHandler;
    id /* CDUnknownBlockType */ _leechedLowConfidenceVisitHandler;
    id /* CDUnknownBlockType */ _vehicleEventsHandler;
    NSString *_restorationIdentifier;
    RTEventAgentHelper *_eventAgentHelper;
    RTTokenBucket *_clientThrottle;
    RTRoutineManagerRegistrantAction *_actionRegistrant;
    RTRoutineManagerRegistrantScenarioTrigger *_scenarioTriggerRegistrant;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTRoutineManagerRegistrantScenarioTrigger *scenarioTriggerRegistrant; // @synthesize scenarioTriggerRegistrant=_scenarioTriggerRegistrant;
@property(retain, nonatomic) RTRoutineManagerRegistrantAction *actionRegistrant; // @synthesize actionRegistrant=_actionRegistrant;
@property(retain, nonatomic) RTTokenBucket *clientThrottle; // @synthesize clientThrottle=_clientThrottle;
@property(retain, nonatomic) RTEventAgentHelper *eventAgentHelper; // @synthesize eventAgentHelper=_eventAgentHelper;
@property(retain, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ vehicleEventsHandler; // @synthesize vehicleEventsHandler=_vehicleEventsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ leechedLowConfidenceVisitHandler; // @synthesize leechedLowConfidenceVisitHandler=_leechedLowConfidenceVisitHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ leechedVisitHandler; // @synthesize leechedVisitHandler=_leechedVisitHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ visitHandler; // @synthesize visitHandler=_visitHandler;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
// - (void).cxx_destruct;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(NSUInteger)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(NSUInteger)arg2 feedback:(id)arg3;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)startMonitoringVehicleEventsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)engageInVehicleEventWithIdentifier:(id)arg1;
- (void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
- (void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
- (void)clearAllVehicleEvents:(id /* CDUnknownBlockType */)arg1;
- (void)clearAllVehicleEventsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)clearAllVehicleEvents;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2;
- (void)fetchLastVehicleEventsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)extendLifetimeOfVisitWithIdentifier:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)removeVisitWithIdentifier:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringScenarioTriggerOfType:(NSUInteger)arg1;
- (void)startMonitoringScenarioTriggerOfType:(NSUInteger)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchPathToDiagnosticFilesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)fetchStoredVisitsWithOptions:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;
- (void)stopLeechingLowConfidenceVisits;
- (void)startLeechingLowConfidenceVisitsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)stopLeechingVisits;
- (void)startLeechingVisitsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (void)stopMonitoringVisits;
- (void)startMonitoringVisitsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(id /* CDUnknownBlockType */)arg4;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateStoredLocationsWithOptions:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchCloudSyncAuthorizationState:(id /* CDUnknownBlockType */)arg1;
- (void)clearRoutineWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setRoutineEnabled:(BOOL)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setRoutineEnabled:(BOOL)arg1;
- (void)fetchRoutineStateWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)fetchRoutineEnabledWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)fetchPlaceInferencesWithOptions:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(id /* CDUnknownBlockType */)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)selectorIsWhitelisted:(SEL)arg1;
- (id)_proxyForServicingSelector:(SEL)arg1 asynchronous:(BOOL)arg2 withErrorHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(id /* CDUnknownBlockType */)arg2;
- (void)handleDaemonStart;
- (void)createConnection;
- (void)_createConnection;
- (void)dealloc;
- (id)init;
- (id)initWithRestorationIdentifier:(id)arg1;
- (void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(id /* CDUnknownBlockType */)arg3;

@end
