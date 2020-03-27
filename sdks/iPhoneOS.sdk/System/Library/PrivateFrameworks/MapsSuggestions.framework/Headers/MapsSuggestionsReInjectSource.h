//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class NSString;

@interface MapsSuggestionsReInjectSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
    NSString *_path;
}

+ (NSArray )_entriesFromFileAtPath:(id)arg1;
+ (NSArray )_entriesFromMultilineString:(id)arg1;
+ (NSUInteger)disposition;
+ (BOOL)isEnabled;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (void)_processFileAtPath:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
