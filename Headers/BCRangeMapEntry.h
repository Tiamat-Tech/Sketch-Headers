//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface BCRangeMapEntry : NSObject
{
    id <NSObject> _object;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject> object; // @synthesize object=_object;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)initWithObject:(id)arg1 range:(struct _NSRange)arg2;

@end

