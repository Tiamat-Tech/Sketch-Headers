//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

@class NSView, NSViewController;

@interface MSManageComponentsSheet : CHSheetController
{
    NSView *_containerView;
    NSViewController *_canvasViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void)windowDidLoad;

@end

