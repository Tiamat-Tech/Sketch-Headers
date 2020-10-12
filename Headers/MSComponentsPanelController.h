//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSComponentGridController, MSDocument, _TtC6Sketch23ComponentListController;
@protocol MSComponentsPanelDelegate;

@interface MSComponentsPanelController : NSViewController
{
    // Error parsing type: , name: document
    // Error parsing type: , name: delegate
    // Error parsing type: , name: splitViewController
    // Error parsing type: , name: libraryListController
    // Error parsing type: , name: componentListController
    // Error parsing type: , name: previewController
    // Error parsing type: , name: filterBarController
    // Error parsing type: , name: kindBarController
    // Error parsing type: , name: componentGridController
    // Error parsing type: , name: isDelayingTreeDiffs
    // Error parsing type: , name: delayedTreeDiffs
    // Error parsing type: , name: $__lazy_storage_$_appearanceObserver
    // Error parsing type: , name: splitViewControllerConfigured
    // Error parsing type: , name: selectionScheme
    // Error parsing type: , name: filterBarPosition
    // Error parsing type: , name: enableLibraryList
    // Error parsing type: , name: enableLibraryMenu
    // Error parsing type: , name: enableComponentKindControl
    // Error parsing type: , name: componentPreviewPosition
    // Error parsing type: , name: defaultExpansionState
    // Error parsing type: , name: isInComponentsMode
    // Error parsing type: , name: librariesNeedReloading
    // Error parsing type: , name: componentsNeedReloading
    // Error parsing type: , name: directlyModifiedDocumentToIgnoreOnce
}

+ (void)confirmSymbolMasterDeletionOnDocumentWindow:(id)arg1 inPlural:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)instantiateWithComponentsMode:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)refreshIfNeededForTreeDiff:(id)arg1;
@property(nonatomic, readonly) BOOL canDeleteSelectedGroupsAndComponents;
- (void)enterSelectedGroup;
- (void)collapseComponentListGroups;
- (void)navigateToPreviousItem;
- (void)navigateToNextItem;
- (void)makeFilteringSearchFieldKey;
- (void)applyAppearance;
- (void)viewWillAppear;
- (void)selectComponentsByReference:(id)arg1 collapsingOtherTopLevelAncestors:(BOOL)arg2 allowChangingKind:(BOOL)arg3 allowChangingLibrary:(BOOL)arg4;
- (void)ensureSelectionIncludesComponentLibraryForAssetLibrary:(id)arg1;
- (void)refocusLibraryOutlineViewIfNeeded;
- (void)showComponentsOfKind:(unsigned long long)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) MSComponentGridController *componentGridController; // @synthesize componentGridController;
@property(nonatomic, retain) _TtC6Sketch23ComponentListController *componentListController; // @synthesize componentListController;
@property(nonatomic) __weak id <MSComponentsPanelDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak MSDocument *document; // @synthesize document;

@end

