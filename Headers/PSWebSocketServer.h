//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/NSStreamDelegate-Protocol.h>
#import <SketchCloudKit/PSWebSocketDelegate-Protocol.h>

@class NSArray, NSData, NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue, PSWebSocketServerDelegate;

@interface PSWebSocketServer : NSObject <NSStreamDelegate, PSWebSocketDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSArray *_SSLCertificates;
    BOOL _secure;
    NSData *_addrData;
    struct {
        long long version;
        void *info;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType copyDescription;
    } _socketContext;
    BOOL _running;
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_socketRunLoopSource;
    NSMutableSet *_connections;
    NSMapTable *_connectionsByStreams;
    NSMutableSet *_webSockets;
    id <PSWebSocketServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)serverWithHost:(id)arg1 port:(unsigned long long)arg2 SSLCertificates:(id)arg3;
+ (id)serverWithHost:(id)arg1 port:(unsigned long long)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <PSWebSocketServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)executeDelegateAndWait:(CDUnknownBlockType)arg1;
- (void)executeDelegate:(CDUnknownBlockType)arg1;
- (void)executeWorkAndWait:(CDUnknownBlockType)arg1;
- (void)executeWork:(CDUnknownBlockType)arg1;
- (BOOL)askDelegateShouldAcceptConnection:(id)arg1 request:(id)arg2 response:(id *)arg3;
- (void)notifyDelegateWebSocketDidFlushOutput:(id)arg1;
- (void)notifyDelegateWebSocketDidFlushInput:(id)arg1;
- (void)notifyDelegateWebSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;
- (void)notifyDelegateWebSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)notifyDelegateWebSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)notifyDelegateWebSocketDidOpen:(id)arg1;
- (void)notifyDelegateDidStop;
- (void)notifyDelegateFailedToStart:(id)arg1;
- (void)notifyDelegateDidStart;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)pumpOutput;
- (void)pumpInput;
- (void)disconnectConnection:(id)arg1;
- (void)disconnectConnectionGracefully:(id)arg1 statusCode:(long long)arg2 description:(id)arg3 headers:(id)arg4;
- (void)detatchConnection:(id)arg1;
- (void)attachConnection:(id)arg1;
- (void)webSocketDidFlushOutput:(id)arg1;
- (void)webSocketDidFlushInput:(id)arg1;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)detachWebSocket:(id)arg1;
- (void)attachWebSocket:(id)arg1;
- (void)accept:(int)arg1;
- (void)disconnect:(BOOL)arg1;
- (void)disconnectGracefully:(BOOL)arg1;
- (void)connect:(BOOL)arg1;
- (void)stop;
- (void)start;
- (id)initWithHost:(id)arg1 port:(unsigned long long)arg2 SSLCertificates:(id)arg3;
- (id)runLoop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

