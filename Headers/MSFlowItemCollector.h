//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSImmutablePage, NSArray, NSDictionary, NSMutableArray;

@interface MSFlowItemCollector : NSObject
{
    MSImmutablePage *_page;
    MSImmutableDocumentData *_document;
    NSDictionary *_collectedFlows;
    NSDictionary *_artboardsByID;
    NSArray *_artboardsByRect;
    NSMutableArray *_symbolMasterStack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *symbolMasterStack; // @synthesize symbolMasterStack=_symbolMasterStack;
@property(retain, nonatomic) NSArray *artboardsByRect; // @synthesize artboardsByRect=_artboardsByRect;
@property(retain, nonatomic) NSDictionary *artboardsByID; // @synthesize artboardsByID=_artboardsByID;
@property(copy, nonatomic) NSDictionary *collectedFlows; // @synthesize collectedFlows=_collectedFlows;
@property(retain, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(retain, nonatomic) MSImmutablePage *page; // @synthesize page=_page;
- (void)pushSymbolMaster:(id)arg1 onStackInBlock:(CDUnknownBlockType)arg2;
- (id)collectFlowForLayer:(id)arg1 destinationArtboardAncestry:(id)arg2 flowInfo:(struct MSFlowInfo)arg3 clipToRects:(id)arg4 mayDrawHotspotBounds:(BOOL)arg5;
- (id)destinationArtboardAncestryForFlow:(id)arg1;
- (id)recursivelyCollectFlowsForLayer:(id)arg1 ancestors:(id)arg2 mayDrawHotspotBounds:(BOOL)arg3 existingFlows:(id)arg4;
- (id)flowKeyForLayerAncestry:(id)arg1 destinationArtboardAncestry:(id)arg2 clipToRects:(id)arg3;
- (id)artboardRectsIntersectingSegmentBounds:(struct CGRect)arg1 excludingArtboards:(id)arg2;
- (id)collectFlows:(id)arg1;
- (BOOL)shouldInvalidateCollectedFlowsWithDiff:(id)arg1;
- (id)initWithPage:(id)arg1 document:(id)arg2;

@end

