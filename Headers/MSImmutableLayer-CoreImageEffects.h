//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableLayer.h>

@interface MSImmutableLayer (CoreImageEffects)
- (id)renderBitmapEffects:(id)arg1;
- (BOOL)shouldSkipDrawingInContext:(id)arg1;
- (unsigned long long)transparencyLayerUseRectCondition;
- (BOOL)shouldRenderInTransparencyLayerInContext:(id)arg1;
- (void)prepareForRender:(id)arg1;
- (void)gatherForRenderPreparation:(id)arg1;
- (void)configureBackgroundOfRequest:(id)arg1 isContainedInGroup:(BOOL)arg2;
- (void)renderToCanvas:(struct EKRasterCanvasStruct *)arg1;
@end

