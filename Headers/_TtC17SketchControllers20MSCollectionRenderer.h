//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchRendering/MSOverlayRenderer.h>

@class _TtC17SketchControllers26MSCollectionRendererLayout;
@protocol _TtP17SketchControllers30MSCollectionRendererDataSource_;

@interface _TtC17SketchControllers20MSCollectionRenderer : MSOverlayRenderer
{
    // Error parsing type: , name: layout
    // Error parsing type: , name: layoutIsPrepared
    // Error parsing type: , name: dataSource
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1 context:(id)arg2;
- (void)reloadData;
@property(nonatomic) __weak id <_TtP17SketchControllers30MSCollectionRendererDataSource_> dataSource; // @synthesize dataSource;
- (long long)numberOfItemsIn:(long long)arg1;
@property(nonatomic, readonly) long long numberOfSections;
@property(nonatomic, readonly) _TtC17SketchControllers26MSCollectionRendererLayout *layout; // @synthesize layout;
- (id)init;

@end

