//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSForeignSwatch.h>

#import <SketchModel/MSSharedObjectPasting-Protocol.h>

@class NSString;

@interface MSForeignSwatch : _MSForeignSwatch <MSSharedObjectPasting>
{
}

+ (id)symbolPrivateSwatchWithID:(id)arg1 forForeignSymbol:(id)arg2 fromDocument:(id)arg3;
+ (id)foreignObjectCollectionInDocument:(id)arg1;
+ (id)masterFromDocument:(id)arg1 withID:(id)arg2;
+ (unsigned long long)containerType;
- (id)debugQuickLookObject;
- (id)findOrCreatePublicVersion;
- (void)addOrReplaceInDocument:(id)arg1;
- (void)addToDocument:(id)arg1;
- (void)removeFromOwningDocument;
- (void)syncWithRemote:(id)arg1;
- (id)unlinkFromRemote;
- (BOOL)isOutOfDateWithLibrary:(id)arg1;
- (id)remoteShareID;
- (void)setLocalShareID:(id)arg1;
- (id)localShareID;
- (void)setLocalObject:(id)arg1;
- (id)localObject;
- (id)initAsPrivateReferenceForSymbol:(id)arg1 withForeignSwatch:(id)arg2;
- (id)initAsPrivateReferenceForSymbol:(id)arg1 withOriginal:(id)arg2;
- (id)initWithOriginalObject:(id)arg1 inLibrary:(id)arg2;
- (id)handlePasteIntoDocument:(id)arg1;
@property(readonly, nonatomic) NSString *currentObjectID_MSSharedObjectPasting;

@end

