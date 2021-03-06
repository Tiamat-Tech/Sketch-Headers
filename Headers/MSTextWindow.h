//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class MSCanvasView, NSTextView;

@interface MSTextWindow : NSWindow
{
    MSCanvasView *_canvasView;
    NSTextView *_textView;
}

+ (struct CGRect)adjustFrameWidth:(struct CGRect)arg1 alignment:(long long)arg2;
+ (struct CGRect)adjustFrameHeight:(struct CGRect)arg1;
+ (struct CGRect)makeBiggerRect:(struct CGRect)arg1 withBehaviour:(long long)arg2 alignment:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MSCanvasView *canvasView; // @synthesize canvasView=_canvasView;
- (BOOL)canBecomeKeyWindow;
- (void)addTextView:(id)arg1 toView:(id)arg2;
- (void)moveToRect:(struct CGRect)arg1 canvasViewRect:(struct CGRect)arg2 behaviour:(long long)arg3;
- (void)mouseDown:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;

@end

