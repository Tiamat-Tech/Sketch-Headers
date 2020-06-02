//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSEventHandler.h"

@class MSLayerArray, MSSmartRotateImageCache, NSArray, _TtC17SketchControllers26MSModelObjectChangeTracker;

@interface MSSmartRotateEventHandler : MSEventHandler
{
    struct CGPoint rotationCenter;
    BOOL hasRotationCenterSelected;
    unsigned long long _numberOfRepetitions;
    MSLayerArray *_shapeLayers;
    NSArray *_shapeLayersCopies;
    _TtC17SketchControllers26MSModelObjectChangeTracker *_changeTracker;
    MSSmartRotateImageCache *_imageCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSSmartRotateImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) _TtC17SketchControllers26MSModelObjectChangeTracker *changeTracker; // @synthesize changeTracker=_changeTracker;
@property(copy, nonatomic) NSArray *shapeLayersCopies; // @synthesize shapeLayersCopies=_shapeLayersCopies;
@property(copy, nonatomic) MSLayerArray *shapeLayers; // @synthesize shapeLayers=_shapeLayers;
@property(nonatomic) unsigned long long numberOfRepetitions; // @synthesize numberOfRepetitions=_numberOfRepetitions;
- (id)imageName;
- (id)toolbarIdentifier;
- (void)documentDidChange:(id)arg1;
- (void)selectionDidChangeTo:(id)arg1;
- (void)returnToDefaultHandler;
- (id)overlayItems:(unsigned long long)arg1 parameters:(struct MSRenderingParameters)arg2;
- (id)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (double)rotationForRepetitionAtIndex:(unsigned long long)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)tryToSnapPoint:(struct CGPoint)arg1 toMid:(struct CGPoint)arg2;
- (void)rotateCopies;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (id)currentGroup;
- (void)adjustGroup;
- (id)transformForRotatingShape:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)adjustFrameForShapeCopy:(id)arg1 shape:(id)arg2 index:(unsigned long long)arg3;
- (void)adjustBooleanOperationForShapeCopyIfNecessary:(id)arg1;
- (void)adjustRotationForShapeCopy:(id)arg1 atIndex:(unsigned long long)arg2 baseRotation:(double)arg3;
- (void)rotateCopy:(id)arg1 ofShape:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)rotateCopiesForShape:(id)arg1 shapeIndex:(unsigned long long)arg2;
- (void)handlerWillLoseFocus;
- (void)clearEditingFlagForLayerArray:(id)arg1;
- (void)determineOriginalRotationCenter;
- (void)createChangeTracker;
- (void)createShapeCopies;
- (void)findShapes;
- (void)handlerGotFocus;

@end

