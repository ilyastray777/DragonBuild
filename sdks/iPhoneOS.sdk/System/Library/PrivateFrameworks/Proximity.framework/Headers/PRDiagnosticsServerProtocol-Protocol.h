//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSNumber, NSString;

@protocol PRDiagnosticsServerProtocol <NSObject>
- (void)setRoseGlobalConfigParams:(NSDictionary *)arg1 reply:(void (^)(BOOL))arg2;
- (void)setRegulatoryAccessoryState:(NSNumber *)arg1 reply:(void (^)(BOOL))arg2;
- (void)setRegulatoryIsoCountry:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)setRegulatoryMcc:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)triggerLogCollection:(long long)arg1 reply:(void (^)(BOOL))arg2;
- (void)getPowerStatsSync:(NSUInteger)arg1 reply:(void (^)(PRGetPowerStatsResponse *))arg2;
- (void)sendHelloSync:(NSUInteger)arg1 reply:(void (^)(PRHelloResponse *))arg2;
- (void)getPreflightInfo:(void (^)(NSDictionary *))arg1;
- (void)getChipInfo:(void (^)(PRChipInfo *))arg1;
@end
