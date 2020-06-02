//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDataMenuProviderDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class MSAvailableOverride, NSMenu, NSString;
@protocol MSColorInspectorImageDataControllerDelegate;

@interface MSColorInspectorImageDataController : NSObject <NSMenuDelegate, MSDataMenuProviderDelegate>
{
    NSMenu *_menu;
    id <MSColorInspectorImageDataControllerDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MSColorInspectorImageDataControllerDelegate> delegate; // @synthesize delegate;
- (void)menuDidClose:(id)arg1;
- (void)showMenuAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)clearDataRecordFromCurrentSelection:(id)arg1;
- (void)applyDataToCurrentSelection:(id)arg1;
- (void)refreshDataOnCurrentSelection:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)menu;
- (void)dataSupplierSelected:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) MSAvailableOverride *overrideItemForInspector;
@property(readonly) Class superclass;

@end

