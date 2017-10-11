//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSImmutableLayer, MSImmutableSymbolMaster, MSOverridePoint, MSOverrideValue, NSArray;

@interface MSAvailableOverride : NSObject
{
    MSAvailableOverride *_parent;
    MSImmutableSymbolMaster *_master;
    MSImmutableLayer *_affectedLayer;
    MSOverridePoint *_overridePoint;
    MSOverrideValue *_overrideValue;
}

+ (void)enumerateOverrides:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)availableOverrideWithOverridePoint:(id)arg1 master:(id)arg2 overrideValue:(id)arg3 inParent:(id)arg4;
@property(readonly, nonatomic) MSOverrideValue *overrideValue; // @synthesize overrideValue=_overrideValue;
@property(readonly, nonatomic) MSOverridePoint *overridePoint; // @synthesize overridePoint=_overridePoint;
@property(readonly, nonatomic) MSImmutableLayer *affectedLayer; // @synthesize affectedLayer=_affectedLayer;
@property(readonly, nonatomic) MSImmutableSymbolMaster *master; // @synthesize master=_master;
@property(readonly, nonatomic) __weak MSAvailableOverride *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *children;
- (id)initWithOverridePoint:(id)arg1 master:(id)arg2 affectedLayer:(id)arg3 overrideValue:(id)arg4 inParent:(id)arg5;

@end
