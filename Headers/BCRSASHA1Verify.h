//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError;

@interface BCRSASHA1Verify : NSObject
{
    BOOL _verified;
    NSError *_error;
    NSData *_inputData;
    struct __SecKey *_publicKey;
    NSData *_signatureData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) struct __SecKey *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSData *inputData; // @synthesize inputData=_inputData;
@property(nonatomic) BOOL verified; // @synthesize verified=_verified;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)verify;
- (void)dealloc;
- (id)initWithInputData:(id)arg1 publicKey:(struct __SecKey *)arg2 signatureData:(id)arg3;

@end

