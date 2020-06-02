//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSAssetLibrary.h>

@class MSFileMonitor;

@interface MSUserAssetLibrary : MSAssetLibrary
{
    MSFileMonitor *_fileMonitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSFileMonitor *fileMonitor; // @synthesize fileMonitor=_fileMonitor;
- (void)resolveLocationOnDisk;
- (void)startMonitoring;
- (void)loadAsyncWithDispatchGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)loadSynchronously;
- (void)setEnabled:(BOOL)arg1;
- (unsigned long long)libraryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

