//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "BCTableCellViewDelegate.h"
#import "BCTableRowViewDelegate.h"
#import "NSMenuDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class BCFilterInfo, BCOutlineView, BCOutlineViewDataController, BCTableCellView, NSArray, NSEvent, NSMutableSet, NSString, NSTextField;

@interface BCOutlineViewController : NSViewController <NSMenuDelegate, NSTextFieldDelegate, BCTableCellViewDelegate, BCTableRowViewDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    BOOL _selectionStateUpdating;
    BOOL _expansionStateUpdating;
    BOOL _draggingInProgress;
    BCOutlineView *_outlineView;
    BCOutlineViewDataController *_dataController;
    NSEvent *_ignoreSelectionChangingEvent;
    NSEvent *_ignoreExpansionChangingEvent;
    NSArray *_contextMenuSelection;
    id _currentlyHoveredNode;
    NSTextField *_menuDisabledTextField;
    NSMutableSet *_referencedNodes;
    unsigned long long _refreshMask;
    NSArray *_postRefreshBlocks;
}

@property(retain, nonatomic) NSArray *postRefreshBlocks; // @synthesize postRefreshBlocks=_postRefreshBlocks;
@property(nonatomic) unsigned long long refreshMask; // @synthesize refreshMask=_refreshMask;
@property(retain, nonatomic) NSMutableSet *referencedNodes; // @synthesize referencedNodes=_referencedNodes;
@property(retain, nonatomic) NSTextField *menuDisabledTextField; // @synthesize menuDisabledTextField=_menuDisabledTextField;
@property(retain, nonatomic) id currentlyHoveredNode; // @synthesize currentlyHoveredNode=_currentlyHoveredNode;
@property(retain, nonatomic) NSArray *contextMenuSelection; // @synthesize contextMenuSelection=_contextMenuSelection;
@property(nonatomic) BOOL draggingInProgress; // @synthesize draggingInProgress=_draggingInProgress;
@property(retain, nonatomic) NSEvent *ignoreExpansionChangingEvent; // @synthesize ignoreExpansionChangingEvent=_ignoreExpansionChangingEvent;
@property(retain, nonatomic) NSEvent *ignoreSelectionChangingEvent; // @synthesize ignoreSelectionChangingEvent=_ignoreSelectionChangingEvent;
@property(nonatomic) BOOL expansionStateUpdating; // @synthesize expansionStateUpdating=_expansionStateUpdating;
@property(nonatomic) BOOL selectionStateUpdating; // @synthesize selectionStateUpdating=_selectionStateUpdating;
@property(retain, nonatomic) BCOutlineViewDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) BCOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (id)tableCellViewDestinationWindow:(id)arg1;
- (unsigned long long)tableRowView:(id)arg1 displayTypeOfRowAtIndex:(long long)arg2;
- (long long)indexOfTableRowView:(id)arg1;
- (BOOL)isNodeExpandedInTableRowView:(id)arg1;
- (BOOL)isNodeSelectedInTableRowView:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)handleTabFromControl:(id)arg1 forward:(BOOL)arg2;
- (void)performNecessaryRefreshOperations;
- (void)queueRefreshIfRequired;
@property(nonatomic) BOOL isLayoutDirty;
@property(nonatomic) BOOL arePreviewImagesDirty;
@property(nonatomic) BOOL isExpansionDirty;
@property(nonatomic) BOOL isSelectionDirty;
- (void)refreshWithMask:(unsigned long long)arg1;
- (void)refreshPreviewImages;
- (void)internalRefreshPreviewImages;
- (void)executeAfterRefreshCompleted:(CDUnknownBlockType)arg1;
- (void)refresh;
- (void)internalRefresh;
- (void)renameNode;
- (void)flagsChangedNotification;
- (id)tableCellViewForNode:(id)arg1;
- (void)updateDisplayStateOnView:(id)arg1;
@property(nonatomic) __weak BCTableCellView *currentlyHoveredView;
- (void)tableCellViewDidBeginEditing:(id)arg1;
- (void)tableCellViewMouseExited:(id)arg1;
- (void)tableCellViewMouseEntered:(id)arg1;
- (void)tableCellViewHandleBadgePressed:(id)arg1;
- (BOOL)isTableCellViewNodeSelected:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)viewAtCurrentMousePoint;
- (id)nodeAtCurrentMousePoint;
- (long long)rowAtCurrentMousePoint;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)determineCopyStateFromDraggingInfo:(id)arg1;
- (long long)translateDropIndex:(long long)arg1 toParentOfChild:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
@property(retain, nonatomic) BCFilterInfo *filter;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)updateSelectionFromNotification:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedItems;
- (void)updateSelectionState;
- (void)modifySelectionInBlock:(CDUnknownBlockType)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (unsigned long long)determineCollapsionStateForNode:(id)arg1;
- (unsigned long long)determineExpansionStateForNode:(id)arg1;
- (void)notifyExpansionStateChanged:(unsigned long long)arg1 forNode:(id)arg2;
- (void)updateExpansionStateForNodesUnder:(id)arg1;
- (void)updateSelectionAndExpansion;
- (void)modifyExpansionInBlock:(CDUnknownBlockType)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)childrenForItem:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) BOOL hasSourceListStyle;
@property(readonly, nonatomic) double preferredHeight;
- (void)awakeFromNib;
- (id)initWithDataController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

