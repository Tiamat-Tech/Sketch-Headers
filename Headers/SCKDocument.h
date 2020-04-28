//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKObject.h>

#import <SketchCloudKit/SCKDiffable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SCKDocument : SCKObject <SCKDiffable>
{
    NSNumber *_fileID;
    NSArray *_pages;
    unsigned long long _colorSpace;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(readonly, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)pageWithID:(struct NSString *)arg1;
- (id)artboardWithPredicate:(id)arg1;
- (id)artboardWithID:(struct NSString *)arg1;
- (BOOL)isIdentityEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)diffComparedTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

