//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchRendering/MSOverlayItemImageCache.h>

@class NSColor;

@interface MSFlowEventHandlerImageCache : MSOverlayItemImageCache
{
    NSColor *_flowColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *flowColor; // @synthesize flowColor=_flowColor;
- (id)createOverlayItemImagesForColorSpace:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (void)dealloc;
- (id)init;

@end

