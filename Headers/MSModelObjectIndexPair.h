//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableModelObject;

@interface MSModelObjectIndexPair : NSObject
{
    MSImmutableModelObject *_modelObject;
    unsigned long long _indexInParent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long indexInParent; // @synthesize indexInParent=_indexInParent;
@property(readonly, nonatomic) MSImmutableModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (id)initWithObject:(id)arg1 indexInParent:(unsigned long long)arg2;

@end

