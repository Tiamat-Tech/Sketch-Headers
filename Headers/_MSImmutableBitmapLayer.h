//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableStyledLayer.h>

@class MSImageData;

@interface _MSImmutableBitmapLayer : MSImmutableStyledLayer
{
    struct CGRect _clippingMask;
    BOOL _fillReplacesImage;
    MSImageData *_image;
    long long _intendedDPI;
}

+ (Class)mutableClass;
@property(nonatomic) long long intendedDPI; // @synthesize intendedDPI=_intendedDPI;
@property(retain, nonatomic) MSImageData *image; // @synthesize image=_image;
@property(nonatomic) BOOL fillReplacesImage; // @synthesize fillReplacesImage=_fillReplacesImage;
@property(nonatomic) struct CGRect clippingMask; // @synthesize clippingMask=_clippingMask;
- (void).cxx_destruct;
- (BOOL)isEqualForCollaborationDiffToObject:(id)arg1;
- (void)collaborationDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (id)collaborationDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)pluginDiffPropertiesNotMatching:(id)arg1 treeComparison:(id)arg2;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

