//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SGMicrodataDocument;

@interface SGMicrodataParserStackItem : NSObject
{
    SGMicrodataDocument *_document;
    SGMicrodataParserStackItem *_parent;
    NSArray *_textConsumers;
    NSArray *_itemScopes;
}

@property(readonly) NSArray *itemScopes; // @synthesize itemScopes=_itemScopes;
@property(readonly) NSArray *textConsumers; // @synthesize textConsumers=_textConsumers;
@property(readonly) SGMicrodataParserStackItem *parent; // @synthesize parent=_parent;
@property(readonly) SGMicrodataDocument *document; // @synthesize document=_document;
// - (void).cxx_destruct;
- (id)initWithParent:(id)arg1 item:(id)arg2 htmlId:(id)arg3 textConsumer:(id)arg4;
- (id)initWithDocument:(id)arg1;

@end
