//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCloudExportableDocument-Protocol.h"

@class MSImmutableDocumentData, MSPatchContainer, NSError, NSString, _TtC13SharedEditing25MSCollaborationController;

@protocol _TtP13SharedEditing33MSCollaborationControllerDelegate_ <MSCloudExportableDocument>
- (MSImmutableDocumentData *)newExportableImmutableData;
- (void)presentCollaborationDebugMessageWithErrorWithError:(NSError *)arg1;
- (void)presentCollaborationErrorWithError:(NSError *)arg1;
- (void)uploadStateDidChangeWithController:(_TtC13SharedEditing25MSCollaborationController *)arg1;
@property(nonatomic, readonly) MSPatchContainer *patchContainer;
@property(nonatomic, readonly) NSString *documentIdentifier;
@end

