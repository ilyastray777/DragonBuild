//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol CNObserver;

@protocol CNForkJoinResultReportingStrategy <NSObject>
- (void)observableAtIndex:(NSUInteger)arg1 didCompleteForObserver:(id <CNObserver>)arg2;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(NSUInteger)arg2 observer:(id <CNObserver>)arg3;
- (id)initWithCapacity:(NSUInteger)arg1;
@end
