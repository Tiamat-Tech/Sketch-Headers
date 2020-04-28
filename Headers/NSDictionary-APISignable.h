//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (APISignable)
- (id)signableString;
- (struct CGRect)rectForXKey:(id)arg1 yKey:(id)arg2 widthKey:(id)arg3 heightKey:(id)arg4;
- (struct CGPoint)pointForXKey:(id)arg1 yKey:(id)arg2;
- (struct CGSize)sizeForWidthKey:(id)arg1 heightKey:(id)arg2;
- (id)cloudObjectArrayForKey:(id)arg1 ofType:(Class)arg2 parentObject:(id)arg3;
- (id)cloudObjectForKey:(id)arg1 ofType:(Class)arg2 parentObject:(id)arg3;
- (BOOL)boolForKey:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)cloudDateFormatter;
- (id)objectForKeys:(id)arg1 ofType:(Class)arg2;
- (id)objectForKey:(id)arg1 ofType:(Class)arg2;
@end

