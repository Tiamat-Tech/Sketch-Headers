//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableModelObject.h>

@class NSArray;

@interface _MSImmutableExportOptions : MSImmutableModelObject
{
    NSArray *_includedLayerIds;
    unsigned long long _layerOptions;
    BOOL _shouldTrim;
    NSArray *_exportFormats;
}

+ (Class)mutableClass;
@property(retain, nonatomic) NSArray *exportFormats; // @synthesize exportFormats=_exportFormats;
@property(nonatomic) BOOL shouldTrim; // @synthesize shouldTrim=_shouldTrim;
@property(nonatomic) unsigned long long layerOptions; // @synthesize layerOptions=_layerOptions;
@property(retain, nonatomic) NSArray *includedLayerIds; // @synthesize includedLayerIds=_includedLayerIds;
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

