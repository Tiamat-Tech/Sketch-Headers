//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageCell.h>

@class MSBorderedImageView, NSBezierPath;

@interface MSBorderedImageViewCell : NSImageCell
{
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property(readonly, nonatomic) struct CGRect contentRect;
@property(readonly, nonatomic) NSBezierPath *backgroundPath;
@property(readonly, nonatomic) struct CGRect backgroundRect;
@property(readonly, nonatomic) MSBorderedImageView *imageView;

@end

