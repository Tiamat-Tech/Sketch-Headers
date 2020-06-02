//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MSInspectorChildController-Protocol.h"
#import "MSInspectorSectionDelegate-Protocol.h"
#import "MSStackViewScrollViewDelegate-Protocol.h"

@class MSEventHandler, MSExportInspectorViewController, MSInspectorStackView, MSLayerArray, MSStandardInspectorViewControllers, NSLayoutConstraint, NSMutableDictionary, NSScrollView, NSStackView, NSString;

@interface MSNormalInspector : NSViewController <MSStackViewScrollViewDelegate, MSInspectorSectionDelegate, MSInspectorChildController>
{
    MSExportInspectorViewController *exportViewController;
    BOOL _hasScheduledNextResponderFixing;
    BOOL _throttleNextResponderFixing;
    MSInspectorStackView *_stackView;
    MSLayerArray *_layers;
    MSEventHandler *_eventHandler;
    NSScrollView *_scrollView;
    NSStackView *_footerView;
    MSStandardInspectorViewControllers *_standardInspectors;
    NSMutableDictionary *_storedPreferences;
    NSLayoutConstraint *_scrollViewTopConstraint;
    NSLayoutConstraint *_scrollViewBottomConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL throttleNextResponderFixing; // @synthesize throttleNextResponderFixing=_throttleNextResponderFixing;
@property(nonatomic) BOOL hasScheduledNextResponderFixing; // @synthesize hasScheduledNextResponderFixing=_hasScheduledNextResponderFixing;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // @synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewTopConstraint; // @synthesize scrollViewTopConstraint=_scrollViewTopConstraint;
@property(readonly, nonatomic) NSMutableDictionary *storedPreferences; // @synthesize storedPreferences=_storedPreferences;
@property(readonly, nonatomic) MSStandardInspectorViewControllers *standardInspectors; // @synthesize standardInspectors=_standardInspectors;
@property(retain, nonatomic) NSStackView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MSEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) MSInspectorStackView *stackView; // @synthesize stackView=_stackView;
- (void)fixNextResponder;
- (void)scheduleNextResponderFixing;
- (void)stackScrollViewDidScroll:(id)arg1;
- (void)reloadItemsForSection:(id)arg1;
- (void)persistentlyCollapse:(BOOL)arg1 sectionWithIdentifier:(id)arg2 reloadTarget:(id)arg3;
- (BOOL)isSectionWithIdentifierCollapsed:(id)arg1 default:(BOOL)arg2;
- (BOOL)isSectionWithIdentifierCollapsed:(id)arg1;
- (id)sectionCollapseStateKeyWithIdentifer:(id)arg1;
- (id)documentForInspectorSection:(id)arg1;
- (void)sectionDidResize:(id)arg1;
@property(readonly, nonatomic) BOOL sharedStyleInspectorVisible;
- (void)adjustInspectorToColorPopover:(id)arg1 sender:(id)arg2;
- (void)reloadWithFooterViewControllers:(id)arg1;
- (void)prepareForDisplay;
- (void)beginRenameSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showBorderOptionsAction:(id)arg1;
- (void)showFillOptionsAction:(id)arg1;
- (void)changeTextLayerFont:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (void)closeAnyColorPopover;
- (void)changeColor:(id)arg1;
- (void)prepareViewControllers;
- (void)reloadInspectorStack:(id)arg1;
- (void)openPopoverForStylePart:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 preferringNative:(BOOL)arg3;
- (void)refreshIfNecessary:(id)arg1;
- (void)selectionDidChangeTo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

