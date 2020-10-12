//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAssetPreferenceRowItem-Protocol.h"

@class MSAssetLibrary, MSRemoteAssetLibrary, NSColor, NSImage, NSString;
@protocol MSAssetPreferenceItemDelegate;

@interface MSAssetPreferenceItem : NSObject <MSAssetPreferenceRowItem>
{
    long long _updatingStatus;
    id <MSAssetPreferenceItemDelegate> _delegate;
    MSAssetLibrary *_library;
    NSImage *_preview;
    NSString *_secondaryTitle;
    unsigned long long _fileSize;
    unsigned long long _downloadedSoFar;
    NSColor *_secondaryTitleColor;
    unsigned long long _originalLibraryType;
    NSString *_downloadButtonTitle;
}

+ (id)keyPathsForValuesAffectingUpdateAvailable;
+ (id)preferenceItemForLibrary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *downloadButtonTitle; // @synthesize downloadButtonTitle=_downloadButtonTitle;
@property(nonatomic) unsigned long long originalLibraryType; // @synthesize originalLibraryType=_originalLibraryType;
@property(retain, nonatomic) NSColor *secondaryTitleColor; // @synthesize secondaryTitleColor=_secondaryTitleColor;
@property(nonatomic) unsigned long long downloadedSoFar; // @synthesize downloadedSoFar=_downloadedSoFar;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain, nonatomic) NSImage *preview; // @synthesize preview=_preview;
@property(readonly, nonatomic) MSAssetLibrary *library; // @synthesize library=_library;
@property(nonatomic) __weak id <MSAssetPreferenceItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long updatingStatus; // @synthesize updatingStatus=_updatingStatus;
- (id)tableRowViewForTableView:(id)arg1;
@property(readonly, nonatomic) double preferredViewHeight;
@property(readonly, nonatomic) BOOL shouldDisableEnableControl;
@property(readonly, nonatomic) BOOL missingRemoteLibraryWithNoInternet;
@property(readonly, nonatomic) MSRemoteAssetLibrary *remoteLibrary;
@property(readonly, nonatomic) BOOL canViewLibraryWithQuicklook;
- (void)updateSecondaryLabel;
- (void)updateUI;
- (void)updateDownloadButton;
- (void)updateSecondaryTitleFromStatus;
- (id)secondaryTitleErrorColor;
- (id)standardSecondaryTitleColor;
- (id)availableUpdateColor;
- (id)downloadToAddString;
- (id)updateAvailableString;
- (id)downloadSizeStringWithMessage:(id)arg1;
- (id)downloadProgress;
@property(readonly, nonatomic) NSString *modificationDate;
- (id)infoText;
@property(readonly, nonatomic) BOOL hasAppcastURL;
@property(readonly, nonatomic) BOOL validForSecondaryTextField;
@property(readonly, nonatomic) BOOL downloadFailed;
@property(readonly, nonatomic) BOOL updateAvailable;
- (BOOL)valid;
@property(nonatomic) BOOL enabled;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *viewIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)libraryControllerDidChange:(id)arg1;
- (void)checkUpdateStatus;
- (void)dealloc;
- (void)setupObservers;
- (id)initWithLibrary:(id)arg1;

@end

