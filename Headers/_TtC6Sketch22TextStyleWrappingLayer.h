//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSTextLayer.h>

@class MSDocumentData;

@interface _TtC6Sketch22TextStyleWrappingLayer : MSTextLayer
{
    // Error parsing type: , name: editingDocument
    // Error parsing type: , name: updater
}

- (void).cxx_destruct;
- (id)initWithMinimalSetup;
- (id)initWithDefaults:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithImmutableModelObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 attributes:(id)arg2 documentColorSpace:(id)arg3 type:(long long)arg4;
- (id)initWithAttributedString:(id)arg1 documentColorSpace:(id)arg2 maxWidth:(double)arg3 convertColorSpace:(BOOL)arg4;
@property(nonatomic, readonly) MSDocumentData *documentData;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;

@end
