//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/SCKDiff-Protocol.h>

@class NSString, SCKCollectionDiff, SCKPage;

@interface SCKPageDiff : NSObject <SCKDiff>
{
    SCKCollectionDiff *_artboardsDiff;
    SCKPage *_object;
    SCKPage *_comparedObject;
    unsigned long long _attributes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) SCKPage *comparedObject; // @synthesize comparedObject=_comparedObject;
@property(readonly, copy, nonatomic) SCKPage *object; // @synthesize object=_object;
@property(readonly, nonatomic) BOOL objectsAreEqual;
@property(readonly, nonatomic) SCKCollectionDiff *artboardsDiff; // @synthesize artboardsDiff=_artboardsDiff;
- (id)initWithObject:(id)arg1 comparedTo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

