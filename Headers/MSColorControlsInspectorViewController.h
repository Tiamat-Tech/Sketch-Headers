//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSMultipleColorStylePartInspectorViewController.h"

@class MSColorControlsInspectorItem;

@interface MSColorControlsInspectorViewController : MSMultipleColorStylePartInspectorViewController
{
    MSColorControlsInspectorItem *_inspectorItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSColorControlsInspectorItem *inspectorItem; // @synthesize inspectorItem=_inspectorItem;
- (id)disabledStylePartsButtonTooltip;
- (id)addStylePartButonTooltip;
- (void)setLayers:(id)arg1;
- (BOOL)hasEnabledColorControls;
- (id)contentViews;
- (id)styleParts;
- (long long)blendModeButtonState;
- (long long)advancedOptionsButtonState;
- (void)resetStylePartsButtonAction:(id)arg1;
- (long long)resetStylePartsButtonState;
- (void)disabledStylePartsButtonAction:(id)arg1;
- (long long)disabledStylePartsButtonState;
- (void)addStylePartHeaderWideAction:(id)arg1;
- (long long)addStylePartHeaderWideButtonState;
- (void)addStylePartButtonAction:(id)arg1;
- (long long)addStylePartButtonState;
- (unsigned long long)stylePartType;
- (id)title;
- (id)init;

@end

