//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EMMailDropMetadata, MFAttachmentManager, MFAttachmentPlaceholder, MFMimePart, NSString, NSURL;
@protocol MFDataConsumer;

@interface MFAttachment : NSObject
{
    MFAttachmentManager *_attachmentManager;
    MFAttachmentPlaceholder *_placeholder;
    BOOL _isAutoArchive;
    BOOL _wantsCompletionBlockOffMainThread;
    NSURL *_url;
    MFMimePart *_part;
    NSString *_disposition;
    id /* CDUnknownBlockType */ _fetchCompletionBlock;
    id <MFDataConsumer> _customConsumer;
    CGSize _imageDimensions;
}

+ (BOOL)isSinglePagePDF:(id)arg1;
@property(nonatomic) CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(nonatomic) BOOL wantsCompletionBlockOffMainThread; // @synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread;
@property(retain, nonatomic) id <MFDataConsumer> customConsumer; // @synthesize customConsumer=_customConsumer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property(retain, nonatomic) MFAttachmentPlaceholder *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly) BOOL isAutoArchive; // @synthesize isAutoArchive=_isAutoArchive;
@property(copy, nonatomic) NSString *disposition; // @synthesize disposition=_disposition;
@property(retain, nonatomic) MFMimePart *part; // @synthesize part=_part;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (BOOL)contentTypeConformsToIWork;
- (BOOL)contentTypeConformsToPassbook;
- (BOOL)contentTypeConformsToMarkup;
- (BOOL)contentTypeConformsToProvisionment;
- (BOOL)contentTypeConformsToEventICS;
- (BOOL)contentTypeConformsToEventVCS;
- (BOOL)contentTypeConformsToEvent;
- (BOOL)contentTypeConformsToVCard;
- (BOOL)conformsToType:(id)arg1;
- (id)textEncodingGuessWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (id)readFromDisk;
- (void)writeToDiskWithData:(id)arg1;
- (NSUInteger)sizeOnDisk;
- (id)fileAttributes;
- (BOOL)isCached;
@property(nonatomic) NSUInteger encodedFileSize;
@property(nonatomic) NSUInteger decodedFileSize;
- (BOOL)isSinglePagePDFFile;
- (BOOL)_isSinglePagePDFFileFetchLocalData:(BOOL)arg1;
@property(copy, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(copy) NSString *contentID;
- (id)attachmentContentTypeForFileName:(id)arg1;
@property(readonly) NSString *fileUTType;
- (id)_fileUTTypeForFileName:(id)arg1;
@property(readonly) NSString *path; // @dynamic path;
@property(copy, nonatomic) NSString *remoteImageFileName;
@property(copy, nonatomic) NSString *fileName; // @dynamic fileName;
- (id)fileNameByStrippingZipIfNeeded:(BOOL)arg1;
- (BOOL)isPDFFile;
@property(readonly, nonatomic) BOOL isMediaFile;
@property(readonly, nonatomic) BOOL isVideoFile;
@property(readonly, nonatomic) BOOL isImageFile;
@property(readonly, nonatomic) BOOL isRFC822;
@property(readonly) BOOL isContainedInCompose;
@property(readonly) BOOL isContainedInRFC822;
@property(readonly) NSString *inferredMimeType;
@property(readonly) BOOL shouldAutoDownload;
@property(readonly) BOOL isDataAvailableLocally;
- (id)_dataProvider;
- (BOOL)hasCalendarMetadata;
@property(retain, nonatomic) NSString *icsRepresentation;
@property(retain, nonatomic) NSString *meetingStorePersistentID;
@property(retain, nonatomic) NSString *eventID;
@property(readonly, nonatomic) BOOL isCalendarFile;
- (BOOL)isAvailable;
- (id)filterICSData:(id)arg1;
- (id)filterVCSData:(id)arg1;
- (id)filterData:(id)arg1;
- (id)fileURL;
- (id)newDownloadProgress;
@property(retain, nonatomic) EMMailDropMetadata *mailDropMetadata; // @dynamic mailDropMetadata;
@property BOOL isPlaceholder; // @dynamic isPlaceholder;
- (id)fetchPlaceholderData;
- (BOOL)isMailDropPhotoArchive;
- (BOOL)isMailDrop;
- (id)fileWrapperUsingFetchedLocalData;
- (id)fetchDataToURL:(id )arg1;
- (id)fetchDataSynchronously:(id )arg1 stripPrivateMetadata:(BOOL)arg2;
- (id)fetchDataSynchronously:(id )arg1;
- (id)fetchLocalData:(id )arg1 stripPrivateMetadata:(BOOL)arg2;
- (id)fetchLocalData;
- (id)fetchData;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;

@end
