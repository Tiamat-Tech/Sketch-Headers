//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInsertLayerEventHandler.h"

@class MSInsertArtboardInspectorViewController, NSMutableArray;

@interface MSInsertArtboardEventHandler : MSInsertLayerEventHandler
{
    MSInsertArtboardInspectorViewController *_inspectorViewController;
    NSMutableArray *_insertedArtboards;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *insertedArtboards; // @synthesize insertedArtboards=_insertedArtboards;
- (BOOL)shouldAddInsertFromSelectionItem;
- (void)updateInspector;
@property(readonly, nonatomic) MSInsertArtboardInspectorViewController *inspectorViewController; // @synthesize inspectorViewController=_inspectorViewController;
- (unsigned long long)inspectorLocation;
- (id)inspectorViewControllersForLayers:(id)arg1 standardControllers:(id)arg2;
- (void)configureInspector:(id)arg1;
- (id)insertArtboardWithRect:(struct CGRect)arg1;
- (struct CGRect)newPositionForFirstArtboardWithSize:(struct CGSize)arg1;
- (struct CGRect)initialRectForNewArtboard:(struct CGSize)arg1 besidesExistingArtboard:(id)arg2;
- (struct CGRect)newPositionForSecondArtboardWithSize:(struct CGSize)arg1;
- (struct CGRect)rectForArtboardWithPreset:(id)arg1;
- (void)insertArtboardFromPreset:(id)arg1;
- (id)performActionWithRect:(struct CGRect)arg1 fromLayer:(id)arg2 constrainProportions:(BOOL)arg3;
- (BOOL)allowsSwitchToInsertAction;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)title;
- (void)dealloc;

@end

