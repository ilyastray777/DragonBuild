//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, JSValue, NSArray, NSDictionary, NSException, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TMLMetaContext;

@interface TMLContext : NSObject
{
    TMLMetaContext *_metaContext;
    NSMutableDictionary *_objects;
    NSMutableSet *_contextObjects;
    NSMutableSet *_weakObjectIdentifiers;
    NSMutableArray *_signalHandlers;
    JSContext *_jsContext;
    NSArray *_currentEvaluationBindings;
    NSException *_jsEvaluationException;
    JSValue *_apiObject;
    NSString *_apiObjectKey;
    BOOL _initialized;
    NSMutableSet *_requires;
    NSUInteger _options;
    BOOL _beingDisposed;
}

+ (void)printStatisticsWithInterval:(double)arg1;
+ (id)currentContext;
+ (void)initializeJSContext:(id)arg1;
+ (void)addGloballyRequiredModules:(id)arg1;
+ (id)cloneContext:(id)arg1 objects:(id)arg2;
+ (Class)createClassFromPath:(id)arg1;
+ (BOOL)loadClasses:(id)arg1 path:(id)arg2;
+ (BOOL)loadClassesFromPath:(id)arg1;
+ (BOOL)loadClasses:(id)arg1;
+ (id)loadMetaContextWithSource:(id)arg1 path:(id)arg2 options:(NSUInteger)arg3;
+ (void)initialize;
// - (void).cxx_destruct;
- (id)didCreateObject:(id)arg1;
- (id)callFunction:(id)arg1 arguments:(id)arg2 returnType:(NSUInteger)arg3;
- (void)callFunction:(id)arg1 arguments:(id)arg2;
- (id)evaluateExpression:(id)arg1 ofType:(NSUInteger)arg2 withBindings:(id)arg3;
- (void)initizalizeContext;
- (void)initializeJSContext;
- (void)attachToAPIObject;
- (id)processValue:(id)arg1 ofType:(NSUInteger)arg2 selfValue:(id)arg3;
- (void)requireModule:(id)arg1;
- (void)addObject:(id)arg1 withIdentifier:(id)arg2;
- (void)makeWeakObjectWithIdentifier:(id)arg1;
- (id)applyProperties:(id)arg1 inOrder:(id)arg2 toObject:(id)arg3;
- (id)createObjectFromMetaObject:(id)arg1 parent:(id)arg2;
- (id)objectsOfType:(id)arg1;
- (id)objectWithIdentifier:(id)arg1 unwrapWeak:(BOOL)arg2 createIfMissing:(BOOL)arg3;
- (id)objectWithIdentifier:(id)arg1 unwrapWeak:(BOOL)arg2;
- (id)objectWithIdentifierNoCreate:(id)arg1;
- (id)objectWithIdentifier:(id)arg1;
- (void)addObjectReference:(id)arg1;
- (id)existingObjectWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *allObjects;
@property(readonly, nonatomic) NSObject *rootObject;
- (void)initializeWithCloneContext:(id)arg1;
- (BOOL)loadSource:(id)arg1 path:(id)arg2;
- (BOOL)loadSourceFromPath:(id)arg1;
- (BOOL)loadSource:(id)arg1;
- (void)raiseJSException:(id)arg1;
- (void)resetException;
- (void)resetJSException;
- (BOOL)raiseException:(id)arg1;
- (id)metaContext;
- (BOOL)valid;
- (id)apiObject;
- (void)dispose;
- (void)disposeIfNecessary;
- (void)dealloc;
- (id)initWithOptions:(NSUInteger)arg1;
- (id)init;

@end
