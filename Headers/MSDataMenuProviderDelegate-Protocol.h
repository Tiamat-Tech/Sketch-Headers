//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSAvailableOverride;

@protocol MSDataMenuProviderDelegate <NSObject>

@optional
@property(retain) MSAvailableOverride *overrideItemForInspector;
- (void)clearDataRecordFromCurrentSelection:(id)arg1;
- (void)applyDataToCurrentSelectionRoot:(id)arg1;
- (void)applyDataToCurrentSelection:(id)arg1;
- (void)refreshDataOnCurrentSelection:(id)arg1;
@end

