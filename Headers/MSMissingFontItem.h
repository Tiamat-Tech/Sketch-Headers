//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class NSButton, NSTextField;

@interface MSMissingFontItem : MSInspectorItem
{
    NSTextField *_missingFontsLabel;
    NSButton *_missingFontFamilyButton;
}

+ (BOOL)canHandleLayer:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *missingFontFamilyButton; // @synthesize missingFontFamilyButton=_missingFontFamilyButton;
@property(retain, nonatomic) NSTextField *missingFontsLabel; // @synthesize missingFontsLabel=_missingFontsLabel;
- (void)updateDisplayedValues;
- (id)missingFontTitle;
- (BOOL)hasMoreThanOneMissingFont;

@end

