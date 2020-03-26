//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage : TSPObject
{
    NSMutableSet *mAuthors;
}

@property(readonly, nonatomic) NSSet *authors; // @synthesize authors=mAuthors;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (id)packageLocator;
- (unsigned int)delayedArchivingPriority;
- (BOOL)shouldDelayArchiving;
- (id)description;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)didAddAuthorRelationshipToDocument;
- (id)nextAuthorColor;
- (id)authorWithName:(id)arg1;
- (void)removeAuthor:(id)arg1;
- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(BOOL)arg2;
- (void)addAuthor:(id)arg1;
- (void)dealloc;

@end
