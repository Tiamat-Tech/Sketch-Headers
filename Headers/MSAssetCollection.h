//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSAssetCollection.h>

@interface MSAssetCollection : _MSAssetCollection
{
}

- (BOOL)moveAssetAtIndex:(unsigned long long)arg1 beforeObjectAtIndex:(unsigned long long)arg2 ofType:(unsigned long long)arg3;
- (id)moveAssetInArray:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)indicesForAsset:(id)arg1;
- (id)arrayForType:(unsigned long long)arg1;
- (void)removeAssetAtIndex:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
- (id)assetAtIndex:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
- (void)setName:(id)arg1 forAssetAtIndex:(unsigned long long)arg2 ofType:(unsigned long long)arg3;
- (id)nameOfAssetAtIndex:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
- (void)addAsset:(id)arg1 withName:(id)arg2;
- (void)addAsset:(id)arg1;
- (unsigned long long)numberOfAssetsOfType:(unsigned long long)arg1;

@end

