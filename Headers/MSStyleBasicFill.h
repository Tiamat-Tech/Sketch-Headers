//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSStyleBasicFill.h"

#import "MSColorSpaceConvertible.h"

@class NSString;

@interface MSStyleBasicFill : _MSStyleBasicFill <MSColorSpaceConvertible>
{
}

+ (id)defaultFillColor;
+ (void)drawNoiseFill:(id)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
+ (void)drawPatternFill:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawGradientFill:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawColorFill:(id)arg1 colorSpace:(id)arg2 inRect:(struct CGRect)arg3;
+ (void)drawColor:(id)arg1 enabled:(BOOL)arg2 inRect:(struct CGRect)arg3;
+ (void)drawBasicFill:(id)arg1 colorSpace:(id)arg2 enabled:(BOOL)arg3 inRect:(struct CGRect)arg4;
+ (void)drawCheckerboardBackgroundInRect:(struct CGRect)arg1;
- (void)convertColorsUsing:(id)arg1;
- (void)performInitEmptyObject;
- (id)previewImageOfSize:(struct CGSize)arg1 colorSpace:(id)arg2 clippingAsBorder:(BOOL)arg3 borderWidth:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

