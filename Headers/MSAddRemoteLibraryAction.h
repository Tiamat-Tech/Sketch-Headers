//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSAction.h>

@interface MSAddRemoteLibraryAction : MSAction
{
}

+ (id)standardCloudEnvironment;
- (void)addAsCloudLibrary:(id)arg1;
- (void)displayError:(id)arg1 forDocument:(id)arg2;
- (id)label;
- (void)displayDuplicateAlertSheetForRemoteAssetLibrary:(id)arg1;
- (void)startDownloadingLibrary:(id)arg1;
- (void)controllerDidAddRemoteLibrary:(id)arg1 error:(id)arg2;
- (void)downloadLibraryWithAppcastURL:(id)arg1;
- (void)downloadLibraryWithCloudShare:(id)arg1;
- (void)addCloudLibraryWithID:(id)arg1;

@end

