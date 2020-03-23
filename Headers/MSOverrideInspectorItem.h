//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "MSDataMenuProviderDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class MSAvailableOverride, MSDataMenuProvider, MSDocumentData, MSOverrideRepresentation, NSLayoutConstraint, NSPopUpButton, NSString, NSTrackingArea, NSView;

@interface MSOverrideInspectorItem : MSInspectorItem <NSMenuDelegate, MSDataMenuProviderDelegate>
{
    BOOL _displaysLabel;
    MSAvailableOverride *_secondaryOverride;
    MSOverrideRepresentation *_overrideRepresentation;
    MSDataMenuProvider *_dataController;
    NSView *_contentView;
    NSLayoutConstraint *_indentationConstraint;
    NSTrackingArea *_trackingArea;
    NSPopUpButton *_popup;
}

+ (BOOL)allOverridesInLayers:(id)arg1 match:(id)arg2;
+ (double)heightForOverride:(id)arg1 layers:(id)arg2 shouldShowLabel:(BOOL)arg3 indentationLevel:(unsigned long long)arg4;
@property(retain, nonatomic) NSPopUpButton *popup; // @synthesize popup=_popup;
@property(nonatomic) __weak NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSLayoutConstraint *indentationConstraint; // @synthesize indentationConstraint=_indentationConstraint;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MSDataMenuProvider *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) BOOL displaysLabel; // @synthesize displaysLabel=_displaysLabel;
@property(readonly, nonatomic) MSOverrideRepresentation *overrideRepresentation; // @synthesize overrideRepresentation=_overrideRepresentation;
@property(retain, nonatomic) MSAvailableOverride *secondaryOverride; // @synthesize secondaryOverride=_secondaryOverride;
- (void).cxx_destruct;
- (void)addObserverForMSDataSupplierManagerDataChangedNotification;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)updateCanvasHighlight;
- (void)highlightItemInCanvas:(id)arg1;
@property(readonly, nonatomic) BOOL hasSingleOverride;
- (void)applyOverrideToSelectedLayers:(id)arg1;
- (void)overrideValueAction:(id)arg1;
- (void)refreshDataOnCurrentSelection:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)updatePopup;
- (id)toolTipString;
- (id)cellImage;
- (BOOL)hasAnyUsableDataProviders;
- (BOOL)hasDataSupplier;
- (id)labelView;
- (id)valueFromControlView:(id)arg1;
- (id)controlViewForEditingOverride;
- (void)build;
- (void)setIndentationLevel:(unsigned long long)arg1;
- (id)views;
@property(readonly, nonatomic) MSDocumentData *documentData;
@property(readonly, nonatomic) MSAvailableOverride *primaryOverride;
- (id)initWithPrimaryOverrideRepresentation:(id)arg1;
@property(retain) MSAvailableOverride *overrideItemForInspector;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

