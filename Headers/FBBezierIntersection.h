//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierCurve;

@interface FBBezierIntersection : NSObject
{
    struct CGPoint _location;
    FBBezierCurve *_curve1LeftBezier;
    FBBezierCurve *_curve1RightBezier;
    FBBezierCurve *_curve2LeftBezier;
    FBBezierCurve *_curve2RightBezier;
    BOOL _tangent;
    BOOL _needToComputeCurve1;
    BOOL _needToComputeCurve2;
    FBBezierCurve *_curve1;
    double _parameter1;
    FBBezierCurve *_curve2;
    double _parameter2;
}

+ (id)intersectionWithCurve1:(id)arg1 parameter1:(double)arg2 curve2:(id)arg3 parameter2:(double)arg4;
@property(readonly, nonatomic) double parameter2; // @synthesize parameter2=_parameter2;
@property(readonly, nonatomic) FBBezierCurve *curve2; // @synthesize curve2=_curve2;
@property(readonly, nonatomic) double parameter1; // @synthesize parameter1=_parameter1;
@property(readonly, nonatomic) FBBezierCurve *curve1; // @synthesize curve1=_curve1;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (void)enumerateAliasesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAliasesOfCurve:(id)arg1 atParameter:(double)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)computeCurve2;
- (void)computeCurve1;
@property(readonly, nonatomic, getter=isAtEndPointOfCurve) BOOL atEndPointOfCurve;
@property(readonly, nonatomic, getter=isAtEndPointOfCurve2) BOOL atEndPointOfCurve2;
- (BOOL)isAtStopOfCurve2WithThreshold:(double)arg1;
@property(readonly, nonatomic, getter=isAtStopOfCurve2) BOOL atStopOfCurve2;
- (BOOL)isAtStartOfCurve2WithThreshold:(double)arg1;
@property(readonly, nonatomic, getter=isAtStartOfCurve2) BOOL atStartOfCurve2;
@property(readonly, nonatomic, getter=isAtEndPointOfCurve1) BOOL atEndPointOfCurve1;
- (BOOL)isAtStopOfCurve1WithThreshold:(double)arg1;
@property(readonly, nonatomic, getter=isAtStopOfCurve1) BOOL atStopOfCurve1;
- (BOOL)isAtStartOfCurve1WithThreshold:(double)arg1;
@property(readonly, nonatomic, getter=isAtStartOfCurve1) BOOL atStartOfCurve1;
- (double)curve2Threshold;
- (double)curve1Threshold;
- (double)curve2ExactThreshold;
- (double)curve1ExactThreshold;
- (double)curve2ThresholdWithWeight:(double)arg1 maximum:(double)arg2;
- (double)curve1ThresholdWithWeight:(double)arg1 maximum:(double)arg2;
@property(readonly, nonatomic) BOOL isAtExactStopOfCurve2;
@property(readonly, nonatomic) BOOL isAtExactStartOfCurve2;
@property(readonly, nonatomic) BOOL isAtExactStopOfCurve1;
@property(readonly, nonatomic) BOOL isAtExactStartOfCurve1;
@property(readonly, nonatomic) FBBezierCurve *curve2RightBezier;
@property(readonly, nonatomic) FBBezierCurve *curve2LeftBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1RightBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1LeftBezier;
- (long long)curve2WindingCount;
- (long long)curve1WindingCount;
- (struct CGPoint)curve2Direction;
- (struct CGPoint)curve1Direction;
@property(readonly, nonatomic, getter=isTangent) BOOL tangent;
@property(readonly, nonatomic) struct CGPoint location;
- (id)initWithCurve1:(id)arg1 parameter1:(double)arg2 curve2:(id)arg3 parameter2:(double)arg4;

@end

