/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKModel>, NSDate, NSString, TSDCommentStorage, TSDDrawableInfo, TSKAnnotationAuthor;

@interface TSDDrawableComment : NSObject <TSDAnnotationHosting, TSDCommentStorageDelegate> {
    TSDDrawableInfo *mParent;
    TSDCommentStorage *mStorage;
}

@property(readonly) int annotationDisplayStringType;
@property(readonly) int annotationType;
@property(readonly) TSKAnnotationAuthor * author;
@property(readonly) NSString * changeTrackingContentFormatString;
@property(readonly) NSString * changeTrackingContentString;
@property(readonly) NSString * changeTrackingTitleString;
@property(readonly) NSDate * date;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property <TSKModel> * hostingModel;
@property TSDDrawableInfo * parent;
@property(copy) TSDCommentStorage * storage;
@property(readonly) Class superclass;

- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)author;
- (id)commandForDeletingComment;
- (void)commentStorageTextDidChange:(id)arg1;
- (void)commitText:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (Class)editorClass;
- (id)hostingModel;
- (id)initWithParent:(id)arg1 storage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parent;
- (void)setAuthor:(id)arg1;
- (void)setHostingModel:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end