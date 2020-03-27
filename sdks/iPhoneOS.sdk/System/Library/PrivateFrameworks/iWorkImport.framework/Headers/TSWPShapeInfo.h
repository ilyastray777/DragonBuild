//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDShapeInfo.h>

#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDSelectionStatisticsContributor-Protocol.h>
#import <iWorkImport/TSWPStorageParent-Protocol.h>
#import <iWorkImport/TSWPTextBoxNesting-Protocol.h>

@class NSArray, NSString, TSPObject, TSWPColumns, TSWPPadding, TSWPShapeStyle, TSWPStorage;
@protocol TSWPFlowInfo;

__attribute__((visibility("hidden")))
@interface TSWPShapeInfo : TSDShapeInfo <TSDMixing, TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor, TSWPTextBoxNesting>
{
    TSWPStorage *_containedStorage;
    BOOL _isTextBox;
    BOOL _preventsComments;
    BOOL _preventsChangeTracking;
    BOOL _ignoresInteriorWrap;
    TSPObject<TSWPFlowInfo> *_textFlow;
}

+ (id)p_newEmptyStorageWithContext:(id)arg1 paragraphStyle:(id)arg2;
+ (id)defaultPlaceholderTextForLocale:(id)arg1;
+ (void)setDefaultInstructionalText:(id)arg1;
+ (NSUInteger)numberOfDifferencesBetweenStyleProperties:(id)arg1 betweenOutgoingStorage:(id)arg2 outgoingRange:(_NSRange)arg3 incomingStorage:(id)arg4 incomingRange:(_NSRange)arg5 maxDifferencesBeforeReturning:(NSUInteger)arg6;
+ (BOOL)shouldDisableTextMorphsFromPropertiesBetweenOutgoingStorage:(id)arg1 outgoingRange:(_NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(_NSRange)arg4;
+ (BOOL)stylesAreEqualWithOutgoingStorage:(id)arg1 outgoingRange:(_NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(_NSRange)arg4;
+ (id)textPropertiesAffectingTextMorph;
+ (id)textPropertiesNotAffectingVisualStyle;
+ (id)textPropertiesAffectingVisualStyleExceptSize;
+ (id)textPropertiesAffectingVisualStyle;
+ (id)textPropertiesAffectingObjectMatch;
+ (id)textPropertiesNeedingCharacterAnimation;
@property(nonatomic) BOOL ignoresInteriorWrap; // @synthesize ignoresInteriorWrap=_ignoresInteriorWrap;
@property(nonatomic) __weak TSPObject<TSWPFlowInfo> *textFlow; // @synthesize textFlow=_textFlow;
@property(readonly, nonatomic) BOOL preventsChangeTracking; // @synthesize preventsChangeTracking=_preventsChangeTracking;
@property(readonly, nonatomic) BOOL preventsComments; // @synthesize preventsComments=_preventsComments;
@property(readonly, nonatomic) BOOL isTextBox; // @synthesize isTextBox=_isTextBox;
// - (void).cxx_destruct;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (BOOL)p_isNonTopicParagraphBreakAtParagraphIndex:(NSUInteger)arg1;
- (NSUInteger)p_nonTopicParagraphBreakCount;
- (NSUInteger)p_chunkCountForByBulletGroup;
- (NSUInteger)p_chunkCountForByBullet;
- (BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL autoListTermination;
@property(readonly, nonatomic) BOOL autoListRecognition;
- (id)stylesForCopyStyle;
- (id)propertyMapForNewPreset;
- (CGPoint)transformableObjectAnchorPoint;
- (id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *childInfos;
- (id)copyAcceptingTrackedChangesWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)fixPositionOfImportedAutosizedShape;
- (CGPoint)autosizePositionOffset;
- (CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(CGSize)arg2;
- (CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(CGSize)arg2;
- (CGPoint)autosizePositionOffsetForGeometry:(id)arg1 dynamicallyDraggedLayout:(id)arg2;
- (double)pOffsetForVerticalAlignment:(CGSize)arg1;
- (double)pOffsetForParagraphAlignment:(CGSize)arg1;
@property(readonly, nonatomic) NSString *instructionalText;
- (void)setIsTextBoxForPersistence:(BOOL)arg1;
@property(readonly, nonatomic) BOOL displaysInstructionalText;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)presetKind;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (void)dealloc;
- (Class)styleClass;
@property(nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property(retain, nonatomic) TSWPPadding *padding;
@property(readonly, nonatomic) BOOL supportsMultipleColumns;
@property(retain, nonatomic) TSWPColumns *columns;
@property(readonly, nonatomic) int columnDirection;
@property(nonatomic) int verticalAlignment;
@property(nonatomic) BOOL textIsVertical;
@property(readonly, nonatomic) BOOL textIsLinked;
@property(nonatomic) BOOL shrinkTextToFit;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)supportsTextInset;
- (BOOL)canAnchor;
- (BOOL)isLocked;
@property(readonly, nonatomic) BOOL shouldIgnoreWPContent;
@property(readonly, nonatomic) long long nestedTextboxDepth;
@property(readonly, nonatomic) BOOL isRotatedOrFlipped;
- (BOOL)supportsParentRotation;
@property(readonly, nonatomic) BOOL isLinkable;
@property(readonly, nonatomic) BOOL isLinked;
- (id)i_ownedTextStorage;
- (void)i_setOwnedTextStorage:(id)arg1;
- (void)p_setOwnedTextStorage:(id)arg1;
- (id)textStorageForHeadOfTextFlow;
@property(readonly, nonatomic) TSWPStorage *textStorage;
- (void)saveToArchive:(struct ShapeInfoArchive )arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeInfoArchive )arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)upgradeOwnedStorageWithFileFormatVersion:(NSUInteger)arg1;
- (void)upgradeWithNewOwnedStorage;
- (NSUInteger)maxInlineNestingDepth;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (BOOL)canBeDefinedAsTextPlaceholder;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)shouldHideEmptyBullets;
- (BOOL)isRightToLeft;

@end
