//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MSInspectorLeftAlignedPopUp, NSArray, NSButton;
@protocol _TtP6Sketch35MSColorModePickerControllerDelegate_;

@interface _TtC6Sketch27MSColorModePickerController : NSViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: fillTypeButton
    // Error parsing type: , name: swatchesToggleButton
    // Error parsing type: , name: addSwatchButton
    // Error parsing type: , name: allowsFillTypeSelection
    // Error parsing type: , name: fillType
    // Error parsing type: , name: styleParts
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)showColorsPressed:(id)arg1;
- (void)addColorPressed:(id)arg1;
- (void)fillTypeSelected:(id)arg1;
@property(nonatomic, copy) NSArray *styleParts;
@property(nonatomic) unsigned long long fillType; // @synthesize fillType;
@property(nonatomic) BOOL allowsFillTypeSelection; // @synthesize allowsFillTypeSelection;
@property(nonatomic, retain) NSButton *addSwatchButton; // @synthesize addSwatchButton;
@property(nonatomic, retain) NSButton *swatchesToggleButton; // @synthesize swatchesToggleButton;
@property(nonatomic, retain) MSInspectorLeftAlignedPopUp *fillTypeButton; // @synthesize fillTypeButton;
@property(nonatomic, retain) id <_TtP6Sketch35MSColorModePickerControllerDelegate_> delegate; // @synthesize delegate;

@end

