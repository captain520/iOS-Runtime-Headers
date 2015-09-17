/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNote : ICCloudSyncingObject <ICCloudObject, ICSearchIndexableNote, NSTextStorageDelegate, TTTextStorageDelegate> {
    NSMutableSet *_connectedDevices;
    NSMutableSet *_connectedSockets;
    TTTextStorage *_textStorage;
    NSUUID *_uuid;
    TTVectorMultiTimestamp *archivedTimestamp;
    BOOL needsRefresh;
}

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, copy) TTVectorMultiTimestamp *archivedTimestamp;
@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *folders;
@property (nonatomic, retain) NSDate *foldersModificationDate;
@property (nonatomic, retain) ICGroup *group;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSNumber *integerId;
@property (nonatomic, retain) NSString *legacyContentHashAtImport;
@property (nonatomic, retain) NSString *legacyImportDeviceIdentifier;
@property (nonatomic, retain) NSString *legacyManagedObjectIDURIRepresentation;
@property (nonatomic, retain) NSDate *legacyModificationDateAtImport;
@property (nonatomic, retain) NSNumber *legacyNoteIntegerId;
@property (nonatomic, retain) NSNumber *legacyNoteWasPlainText;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic) BOOL needsRefresh;
@property (nonatomic, retain) ICNoteData *noteData;
@property (nonatomic, retain) NSNumber *noteHasChanges;
@property (nonatomic, retain) NSString *snippet;
@property (readonly) Class superclass;
@property (nonatomic, retain) TTTextStorage *textStorage;
@property (nonatomic, retain) NSString *thumbnailAttachmentIdentifier;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSNumber *type;

+ (id)allCloudObjects;
+ (id)attributedStringFromHTMLString:(id)arg1;
+ (id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)defaultTitleForEmptyNote;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (void)fixDashedListsInAttributedString:(id)arg1;
+ (void)fixFontsInAttributedString:(id)arg1;
+ (void)fixUnwantedCharactersInAttributedString:(id)arg1;
+ (id)hexStringForColor:(struct UIColor { Class x1; }*)arg1;
+ (id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1;
+ (id)htmlStringByFixingDashedListsInHTMLString:(id)arg1;
+ (id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(id /* block */)arg2;
+ (BOOL)isDefaultColor:(struct UIColor { Class x1; }*)arg1;
+ (unsigned int)maxNoteTextLength;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (id)recordType;
+ (id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(id /* block */)arg2;
+ (id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1;

- (void).cxx_destruct;
- (BOOL)allowsNewTextLength:(unsigned int)arg1;
- (id)appURLForIndexerContext:(id)arg1;
- (id)archivedTimestamp;
- (id)attachmentActivityItemsForSharing;
- (BOOL)attachmentExceedsMaxSizeAllowed:(unsigned int)arg1;
- (id)attachmentForWebThumbnail;
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)attachmentFromRemoteFileWrapper:(id)arg1;
- (id)attachmentFromStandardFileWrapper:(id)arg1;
- (id)attachmentWithIdentifier:(id)arg1;
- (BOOL)canAddAttachment;
- (BOOL)canAddAttachments:(unsigned int)arg1;
- (id)connectedDevices;
- (id)connectedSockets;
- (id)contentInfoText;
- (void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg1;
- (void)deleteFromLocalDatabase;
- (void)deleteFromNoteContextUsingIndexerContext:(id)arg1;
- (void)didChangeNoteText;
- (void)didTurnIntoFault;
- (void)fetchThumbnailImageWithMinSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)fixBrokenReferences;
- (id)folder;
- (BOOL)hasAllMandatoryFields;
- (BOOL)hasThumbnailImage;
- (id)htmlString;
- (id)htmlStringWithAttachmentConversionHandler:(id /* block */)arg1;
- (id)htmlStringWithAttachments:(BOOL)arg1;
- (BOOL)isDeletedOrInTrash;
- (BOOL)isEditable;
- (BOOL)isEmpty;
- (BOOL)isHiddenFromSearch;
- (BOOL)isInICloudAccount;
- (BOOL)isVisible;
- (id)loggingDescriptionValues;
- (void)markForDeletion;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1 withMergePolicy:(int)arg2;
- (void)mergeFoldersFromRecord:(id)arg1;
- (int)mergePolicyForRecord:(id)arg1;
- (unsigned int)mergeWithNoteData:(id)arg1;
- (unsigned int)mergeWithNoteDocument:(id)arg1;
- (BOOL)needsRefresh;
- (id)noteAsPlainText;
- (id)noteAsPlainTextWithoutTitle;
- (id)noteContextForIndexerContext:(id)arg1;
- (unsigned int)noteType;
- (id)objectIdentifier;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForAttachment:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForSnippet;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForTitle:(BOOL*)arg1;
- (id)recordName;
- (id)recordZoneID;
- (void)refreshNoteTextFromDataStore;
- (void)regenerateSnippet;
- (void)regenerateTitle;
- (void)replaceWithDocument:(id)arg1;
- (BOOL)requiresLegacyTombstoneAfterDeletion;
- (void)resetUniqueIdentifier;
- (void)save;
- (void)saveNoteData;
- (id)searchIndexStringsOutHasAdditionalStrings:(BOOL*)arg1;
- (id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned int)searchResultsSection;
- (id)searchableContentKeyPaths;
- (void)setArchivedTimestamp:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setFolders:(id)arg1;
- (void)setLegacyManagedObjectID:(id)arg1;
- (void)setNeedsInitialFetchFromCloud:(BOOL)arg1;
- (void)setNeedsRefresh:(BOOL)arg1;
- (void)setNeedsSave;
- (void)setNoteType:(unsigned int)arg1;
- (void)setTextStorage:(id)arg1;
- (BOOL)shouldUpdateIndexForChangedValues:(id)arg1;
- (BOOL)supportsDeletionByTTL;
- (id)textStorage;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4;
- (void)textStorageDidPerformUndo:(id)arg1;
- (id)threadUnsafeNewlyCreatedRecord;
- (struct UIImage { Class x1; }*)thumbnailImageWithMinSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 imageScaling:(unsigned int*)arg3 showAsFileIcon:(BOOL*)arg4 isMovie:(BOOL*)arg5 movieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg6;
- (void)unmarkForDeletion;
- (id)uuid;
- (int)visibilityTestingType;
- (id)visibleAttachments;
- (void)willSave;

@end