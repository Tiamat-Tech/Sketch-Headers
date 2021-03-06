//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSImmutableDocumentData, MSPatch, NSArray, NSMutableArray, NSSet, NSString;

@interface MSMoment : NSObject
{
    BOOL _committed;
    double _timestamp;
    NSString *_title;
    MSImmutableDocumentData *_initialDocument;
    MSImmutableDocumentData *_finalDocument;
    NSMutableArray *_supplementalActions;
    NSSet *_selection;
    NSArray *_selectedOverrides;
    MSPatch *_forwardPatch;
    NSString *_pageID;
}

+ (void)setTimestampCoalesingThreshold:(double)arg1;
+ (double)timestampCoalesingThreshold;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(retain, nonatomic) MSPatch *forwardPatch; // @synthesize forwardPatch=_forwardPatch;
@property(readonly, nonatomic) NSArray *selectedOverrides; // @synthesize selectedOverrides=_selectedOverrides;
@property(readonly, nonatomic) NSSet *selection; // @synthesize selection=_selection;
@property(readonly, nonatomic) BOOL committed; // @synthesize committed=_committed;
@property(readonly, nonatomic) NSMutableArray *supplementalActions; // @synthesize supplementalActions=_supplementalActions;
@property(retain, nonatomic) MSImmutableDocumentData *finalDocument; // @synthesize finalDocument=_finalDocument;
@property(retain, nonatomic) MSImmutableDocumentData *initialDocument; // @synthesize initialDocument=_initialDocument;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)affectedPageIDMovingBackwards:(BOOL)arg1;
- (id)patchMovingBackwards:(BOOL)arg1;
- (void)commit:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL canCoalesce;
@property(readonly, nonatomic) BOOL hasCoalescePeriodExpired;
- (void)performSupplementalActions;
- (id)init;
- (id)initWithInitialDocument:(id)arg1 finalDocument:(id)arg2 patch:(id)arg3;

@end

