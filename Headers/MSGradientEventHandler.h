//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSPointsEventHandler.h"

#import "MSGradientPointArrayDelegate-Protocol.h"

@class MSOverlayItemImageCache, MSStyleBasicFill, NSCursor, NSString;
@protocol MSGradientEventHandlerDelegate;

@interface MSGradientEventHandler : MSPointsEventHandler <MSGradientPointArrayDelegate>
{
    MSStyleBasicFill *_stylePart;
    id <MSGradientEventHandlerDelegate> _gradientDelegate;
    NSCursor *_selectPointCursor;
    NSCursor *_insertPointCursor;
    MSOverlayItemImageCache *_imageCache;
}

+ (id)gradientHandlerForStylePart:(id)arg1 manager:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MSOverlayItemImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSCursor *insertPointCursor; // @synthesize insertPointCursor=_insertPointCursor;
@property(retain, nonatomic) NSCursor *selectPointCursor; // @synthesize selectPointCursor=_selectPointCursor;
@property(nonatomic) __weak id <MSGradientEventHandlerDelegate> gradientDelegate; // @synthesize gradientDelegate=_gradientDelegate;
@property(retain, nonatomic) MSStyleBasicFill *stylePart; // @synthesize stylePart=_stylePart;
- (void)documentDidChange:(id)arg1;
@property(readonly, nonatomic) long long gradientType;
- (BOOL)canDuplicate;
- (void)selectionDidChangeTo:(id)arg1;
- (id)cursorWithDrawingBlock:(CDUnknownBlockType)arg1;
- (BOOL)useSnaps;
- (BOOL)shouldDisplayMessageForSelectedStop;
- (id)previousStop;
- (id)nextStop;
- (id)selectedStop;
- (void)centerStopBetween;
- (void)setSelectedStopToPercentage:(long long)arg1;
- (void)keyDown:(id)arg1;
- (void)delete:(id)arg1;
- (void)setIndexForSelectedPoint:(long long)arg1;
- (BOOL)hasSelectedPoint;
- (BOOL)canInsertPointAtMouse:(struct CGPoint)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (long long)addStopAtPosition:(struct CGPoint)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)repairGradientIfNecessary;
- (void)colorMagnifierAction:(id)arg1;
- (id)gradient;
- (void)gradientPointArray:(id)arg1 didReplacePointAtIndex:(unsigned long long)arg2 withPoint:(struct CGPoint)arg3;
- (id)points;
- (id)collectionOverlay:(id)arg1 overlayItemContainerForSupplementaryElementOfKind:(id)arg2 layoutAttributes:(id)arg3 parameters:(struct MSRenderingParameters)arg4;
- (id)collectionOverlay:(id)arg1 overlayItemContainerForItemAtIndexPath:(id)arg2 layoutAttributes:(id)arg3 parameters:(struct MSRenderingParameters)arg4;
- (id)collectionOverlay:(id)arg1 overlayItemImagesForColorSpace:(struct CGColorSpace *)arg2 backingScale:(double)arg3;
- (void)handlerWillLoseFocus;
- (void)returnToDefaultHandlerByClickingOutside;
- (void)handlerGotFocus;
- (void)reloadFollowingBackgroundChangesToDocument;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)updateImageCache;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

