//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchCloudKit/SCKAPIURLRequest.h>

@interface SCKShareAPIURLRequest : SCKAPIURLRequest
{
}

+ (id)shareCancelUpdateRequestWithID:(id)arg1;
+ (id)shareDeletionRequestWithID:(id)arg1;
+ (id)shareUpdateRequestWithManifest:(id)arg1 existingShare:(id)arg2;
+ (id)shareCreationRequestWithManifest:(id)arg1;
+ (id)userSharesListRequest;
+ (id)shareRequestWithShortID:(id)arg1;
+ (id)shareRequestWithID:(id)arg1;
+ (id)baseURLForEnvironment:(id)arg1;
- (Class)resultType;

@end

