//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCDownloadManager;

@interface MSPluginUpdaterImplementation : NSObject
{
    long long _downloadingAppcastsStatus;
    long long _downloadingPluginVersionsStatus;
    BCDownloadManager *_pluginDownloader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BCDownloadManager *pluginDownloader; // @synthesize pluginDownloader=_pluginDownloader;
@property(nonatomic) long long downloadingPluginVersionsStatus; // @synthesize downloadingPluginVersionsStatus=_downloadingPluginVersionsStatus;
@property(nonatomic) long long downloadingAppcastsStatus; // @synthesize downloadingAppcastsStatus=_downloadingAppcastsStatus;
- (BOOL)makeDecompressError:(id *)arg1 withDescription:(id)arg2;
- (BOOL)decompressCurrentFile:(void *)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)decompressPluginZip:(id)arg1 toFolder:(id)arg2 error:(id *)arg3;
- (id)versionsDictionaryFromAppcast:(id)arg1;
- (void)cancelDownloadingPluginVersions;
- (void)downloadPlugins:(id)arg1 downloadPluginHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)downloadPluginFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadPluginAppcasts:(id)arg1 downloadAppcastHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

