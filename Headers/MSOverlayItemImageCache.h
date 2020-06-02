//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MSOverlayItemImageCache : NSObject
{
    double _cachedBackingScale;
    struct CGColorSpace *_cachedColorspace;
    NSDictionary *_cachedImages;
    CDUnknownBlockType _createImageBlock;
}

+ (id)cacheWithCreateImageBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType createImageBlock; // @synthesize createImageBlock=_createImageBlock;
@property(retain, nonatomic) NSDictionary *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(nonatomic) struct CGColorSpace *cachedColorspace; // @synthesize cachedColorspace=_cachedColorspace;
@property(nonatomic) double cachedBackingScale; // @synthesize cachedBackingScale=_cachedBackingScale;
- (void)removeAllCachedImages;
- (id)createOverlayItemImagesForColorSpace:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (id)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCreateImageBlock:(CDUnknownBlockType)arg1;

@end

