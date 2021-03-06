//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class NSArray;

@interface MSExportPreviewImagesInspectorItem : MSInspectorItem
{
    NSArray *_previewViews;
    long long _throttleCount;
}

+ (void)setFrameOfViewModels:(id)arg1 withInspectorWidth:(double)arg2;
+ (struct CGSize)previewImageSizeForNumColumns:(unsigned long long)arg1;
+ (struct CGSize)previewViewSizeForNumColumns:(unsigned long long)arg1;
+ (void)reloadPreviewsForLayers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (BOOL)canHandleLayer:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long throttleCount; // @synthesize throttleCount=_throttleCount;
@property(retain, nonatomic) NSArray *previewViews; // @synthesize previewViews=_previewViews;
- (void)setPreviewsWithViewModels:(id)arg1;
- (void)reloadPreviewViews;
- (void)removeAllPreviewViews;
- (void)schedulePreviewViewReload;
- (void)refreshIfNecessary:(id)arg1;
- (void)updateDisplayedValues;

@end

