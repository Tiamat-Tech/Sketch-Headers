//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSGraphicsContext, NSString;

@interface MSTransparencyLayerSavedState : NSObject
{
    BOOL _shouldFlip;
    NSGraphicsContext *_graphicsContext;
    struct CGContext *_contextRef;
    NSString *_name;
    struct CGRect _deviceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL shouldFlip; // @synthesize shouldFlip=_shouldFlip;
@property(nonatomic) struct CGRect deviceRect; // @synthesize deviceRect=_deviceRect;
@property(nonatomic) struct CGContext *contextRef; // @synthesize contextRef=_contextRef;
@property(retain, nonatomic) NSGraphicsContext *graphicsContext; // @synthesize graphicsContext=_graphicsContext;
- (void)dealloc;

@end

