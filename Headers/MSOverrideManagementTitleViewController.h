//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSOverrideManagementViewController.h"

#import "MSThemeImageViewDelegate-Protocol.h"

@class MSOverrideManagementPropertyTitle, MSThemeImageView, NSString;

@interface MSOverrideManagementTitleViewController : MSOverrideManagementViewController <MSThemeImageViewDelegate>
{
    MSThemeImageView *_previewView;
    NSString *_overrideName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *overrideName; // @synthesize overrideName=_overrideName;
@property(retain, nonatomic) MSThemeImageView *previewView; // @synthesize previewView=_previewView;
- (id)imageForThemeImageView:(id)arg1;
- (id)contextMenuForCurrentItem;
- (void)setManagementItem:(id)arg1;
@property(readonly, nonatomic) MSOverrideManagementPropertyTitle *propertyTitle;
- (void)disableAllOverridesWithEvent:(id)arg1;
- (void)enableAllOverridesWithEvent:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;

@end

