//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MSInferredLayoutState : NSObject
{
    NSMutableArray *_changedLayersRegions;
}

@property(retain, nonatomic) NSMutableArray *changedLayersRegions; // @synthesize changedLayersRegions=_changedLayersRegions;
- (void).cxx_destruct;
- (void)addLayerPair:(id)arg1;
- (id)changedRegions;
- (id)init;

@end
