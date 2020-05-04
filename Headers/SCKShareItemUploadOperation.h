//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BCFoundation/BCOperation.h>

#import <SketchCloudKit/NSProgressReporting-Protocol.h>
#import <SketchCloudKit/NSURLSessionTaskDelegate-Protocol.h>

@class NSError, NSProgress, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionUploadTask;

@interface SCKShareItemUploadOperation : BCOperation <NSURLSessionTaskDelegate, NSProgressReporting>
{
    NSURLSession *_urlSession;
    NSURL *_sourceURL;
    unsigned long long _multipartIndex;
    unsigned long long _maxPartSize;
    NSProgress *_progress;
    unsigned long long _additionalRetryAttempts;
    NSError *_error;
    NSURLRequest *_urlRequest;
    NSURLSessionUploadTask *_task;
    unsigned long long _currentAttempt;
}

+ (unsigned long long)fileSizeOfItemAtURL:(id)arg1 multipartIndex:(unsigned long long)arg2 maxChunkSize:(unsigned long long)arg3;
+ (unsigned long long)fileSizeOfItemAtURL:(id)arg1;
+ (unsigned long long)unitsToUploadFromURL:(id)arg1;
+ (id)urlRequestWithDocumentUploadURL:(id)arg1;
+ (id)urlRequestWithItem:(id)arg1;
+ (id)itemUploadOperationWithDocumentUploadURL:(id)arg1 fromURL:(id)arg2;
+ (id)itemUploadOperationWithItem:(id)arg1 fromURL:(id)arg2;
@property(nonatomic) unsigned long long currentAttempt; // @synthesize currentAttempt=_currentAttempt;
@property(retain, nonatomic) NSURLSessionUploadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long additionalRetryAttempts; // @synthesize additionalRetryAttempts=_additionalRetryAttempts;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long maxPartSize; // @synthesize maxPartSize=_maxPartSize;
@property(nonatomic) unsigned long long multipartIndex; // @synthesize multipartIndex=_multipartIndex;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)updateProgress;
- (void)deleteChunkFile;
- (void)exportChunkToFile;
- (id)multipartChunkURL;
- (void)startUploadAttempt:(unsigned long long)arg1;
- (void)cancel;
- (void)start;
@property(readonly, nonatomic) long long taskIdentifier;
- (BOOL)isAsynchronous;
- (id)initWithURLRequest:(id)arg1 fromURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
