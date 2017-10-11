//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAssetCollection, MSColor, MSColorInspectorSectionPattern, MSDocument, MSEventHandlerManager, MSPersistentAssetCollection, NSTouchBar;

@protocol MSColorInspectorSectionDelegate <NSObject>
@property(readonly, nonatomic) MSDocument *document;
- (NSTouchBar *)touchBar;
- (void)didRemoveAssetOfType:(unsigned long long)arg1;
- (void)didAddAsset:(id <MSAsset>)arg1;
- (void)stack;
- (MSEventHandlerManager *)eventHandlerManager;
- (MSPersistentAssetCollection *)globalAssets;
- (MSAssetCollection *)documentAssets;
- (void)inspectorSectionDidUpdate:(MSColorInspectorSectionPattern *)arg1;
- (void)colorDidChangeTo:(MSColor *)arg1;
@end

