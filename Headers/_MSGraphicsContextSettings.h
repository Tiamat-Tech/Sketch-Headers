//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObject.h>

@interface _MSGraphicsContextSettings : MSModelObject
{
    long long _blendMode;
    double _opacity;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void)refaultChildrenAgainst:(id)arg1;
- (void)setRaw_opacity:(double)arg1;
- (void)setRaw_blendMode:(long long)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (void)pluginDiffCompareChildrenAgainst:(id)arg1 treeComparison:(id)arg2;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1 forPurpose:(unsigned long long)arg2;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) long long blendMode; // @synthesize blendMode=_blendMode;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

