//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/NSObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol MSMetadataCoding <NSObject>
@property(readonly, nonatomic) NSString *UIMetadataKey;
- (id)metadataForKey:(NSString *)arg1 inDictionary:(NSDictionary *)arg2;
- (void)storeMetadata:(id)arg1 forKey:(NSString *)arg2 inDictionary:(NSMutableDictionary *)arg3;
@end

