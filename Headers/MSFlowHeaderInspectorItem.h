//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCollapsibleHeaderInspectorItem.h"

#import "MSInspectorFlowHandlerDelegate-Protocol.h"

@class MSInspectorFlowHandler, NSButton;

@interface MSFlowHeaderInspectorItem : MSCollapsibleHeaderInspectorItem <MSInspectorFlowHandlerDelegate>
{
    NSButton *_addFlowButton;
    NSButton *_removeFlowButton;
    NSButton *_convertToHotspotButton;
    NSButton *_followFlowButton;
    MSInspectorFlowHandler *_flowHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MSInspectorFlowHandler *flowHandler; // @synthesize flowHandler=_flowHandler;
@property(nonatomic) __weak NSButton *followFlowButton; // @synthesize followFlowButton=_followFlowButton;
@property(nonatomic) __weak NSButton *convertToHotspotButton; // @synthesize convertToHotspotButton=_convertToHotspotButton;
@property(nonatomic) __weak NSButton *removeFlowButton; // @synthesize removeFlowButton=_removeFlowButton;
@property(nonatomic) __weak NSButton *addFlowButton; // @synthesize addFlowButton=_addFlowButton;
- (id)layersForFlowHandler:(id)arg1;
- (id)documentForFlowHandler:(id)arg1;
- (BOOL)isInFlowEventHandler;
- (void)validateHeaderButtonsForFlow:(id)arg1;
- (void)updateDisplayedValues;
- (void)convertFlowToHotspotAction:(id)arg1;
- (id)init;

@end

