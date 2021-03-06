//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

@class MSDragGestureRecognizer, MSNormalEventHandler, NSNumberFormatter, _TtC17SketchControllers14MSOverlayLabel, _TtC17SketchControllers15MSResizeSession;

@interface MSNormalResizeEventHandler : MSNormalBaseEventHandler
{
    long long _handle;
    MSNormalEventHandler *_normalEventHandler;
    _TtC17SketchControllers15MSResizeSession *_resizeSession;
    MSDragGestureRecognizer *_resizeGestureRecognizer;
    _TtC17SketchControllers14MSOverlayLabel *_sizeLabel;
    NSNumberFormatter *_lengthFormatter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumberFormatter *lengthFormatter; // @synthesize lengthFormatter=_lengthFormatter;
@property(readonly, nonatomic) _TtC17SketchControllers14MSOverlayLabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(readonly, nonatomic) MSDragGestureRecognizer *resizeGestureRecognizer; // @synthesize resizeGestureRecognizer=_resizeGestureRecognizer;
@property(readonly, nonatomic) _TtC17SketchControllers15MSResizeSession *resizeSession; // @synthesize resizeSession=_resizeSession;
@property(retain, nonatomic) MSNormalEventHandler *normalEventHandler; // @synthesize normalEventHandler=_normalEventHandler;
@property(nonatomic) long long handle; // @synthesize handle=_handle;
- (BOOL)updateCursor;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (long long)oppositeCorner;
- (void)updateResize:(id)arg1;
- (void)resizeLayer:(id)arg1;
- (void)finishResizing;
- (void)prepareForResize;
- (id)initWithManager:(id)arg1;

@end

