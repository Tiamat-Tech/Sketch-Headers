//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SMKMirrorDataSource-Protocol.h"

@class MSDocument, MSImmutableDocumentData, NSDictionary, NSString, NSTimer, SMKMirrorController;
@protocol OS_dispatch_queue;

@interface MSMirrorDataProvider : NSObject <SMKMirrorDataSource>
{
    BOOL _requiresImmediateUpdate;
    BOOL _isAlreadyComparing;
    BOOL _needsUpdateMetadata;
    NSString *_currentArtboardID;
    SMKMirrorController *_connectionController;
    MSDocument *_document;
    MSImmutableDocumentData *_documentData;
    NSDictionary *_manifestContent;
    NSObject<OS_dispatch_queue> *_mirrorQueue;
    NSTimer *_updateTimer;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsUpdateMetadata; // @synthesize needsUpdateMetadata=_needsUpdateMetadata;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) BOOL isAlreadyComparing; // @synthesize isAlreadyComparing=_isAlreadyComparing;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mirrorQueue; // @synthesize mirrorQueue=_mirrorQueue;
@property(retain, nonatomic) NSDictionary *manifestContent; // @synthesize manifestContent=_manifestContent;
@property(nonatomic) BOOL requiresImmediateUpdate; // @synthesize requiresImmediateUpdate=_requiresImmediateUpdate;
@property(readonly, nonatomic) MSImmutableDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak SMKMirrorController *connectionController; // @synthesize connectionController=_connectionController;
- (id)currentArtboard;
@property(readonly, nonatomic) BOOL hasConnectedClients;
- (void)lookupUpdateTypeWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)treeDiff:(id)arg1 containsFlowLayerChangesInNewDocument:(id)arg2;
- (void)sendVisualUpdateForNewDocument:(id)arg1;
- (void)invalidateRootLayer:(id)arg1 inCanvasRect:(struct CGRect)arg2;
- (void)sendUpdate;
- (void)updateIfNeeded;
- (void)setNeedsUpdateMetadata;
- (void)setNeedsUpdate;
@property(copy, nonatomic) NSString *currentArtboardID; // @synthesize currentArtboardID=_currentArtboardID;
- (id)createManifestContent:(id)arg1;
- (void)documentDidResignCurrentNotification:(id)arg1;
- (void)documentDidBecomeCurrentNotification:(id)arg1;
- (void)mirrorConnectionsDidChangeNotification:(id)arg1;
- (void)currentArtboardDidChange;
- (void)setDocumentData:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)imageData:(id)arg1 dataByInsertingBackgroundColor:(id)arg2;
- (void)renderExportForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

