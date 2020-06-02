//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MSTileMipLevel : NSObject
{
    BOOL _clearBeforeUpload;
    double _scaleRangeMax;
    double _scale;
    struct CGColorSpace *_currentColorSpace;
    CDStruct_75f85af1 *_dirtyRegion;
    NSMutableArray *_tiles;
}

+ (id)tileMipLevelWithScaleRangeMax:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tiles; // @synthesize tiles=_tiles;
@property(nonatomic) CDStruct_75f85af1 *dirtyRegion; // @synthesize dirtyRegion=_dirtyRegion;
@property BOOL clearBeforeUpload; // @synthesize clearBeforeUpload=_clearBeforeUpload;
@property(nonatomic) struct CGColorSpace *currentColorSpace; // @synthesize currentColorSpace=_currentColorSpace;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double scaleRangeMax; // @synthesize scaleRangeMax=_scaleRangeMax;
- (void)subtractDirtyRect:(CDStruct_bf95b13b)arg1;
- (void)unionDirtyRegion:(CDStruct_75f85af1 *)arg1;
- (BOOL)isCurrentColorSpaceEqualTo:(struct CGColorSpace *)arg1;
@property(readonly, nonatomic) unsigned long long tileCount;
- (void)removeAllTilesAndResetDirtyRegion:(CDStruct_75f85af1 *)arg1;
- (void)removeAllTilesAndClearDirtyRegion;
- (void)removeAllTiles;
- (void)addTile:(id)arg1;
- (id)findWritableTileAt:(CDStruct_1ef3fb1f)arg1;
- (id)enqueueRenderableTilesForVisibleRect:(struct CGRect)arg1;
- (unsigned long long)countExistingTilesForVisibleRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithScaleRangeMax:(double)arg1;

@end

