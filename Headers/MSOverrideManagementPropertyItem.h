//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchControllers/MSOverrideManagementItem.h>

@class NSString;

@interface MSOverrideManagementPropertyItem : MSOverrideManagementItem
{
    BOOL _enabled;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (id)description;
- (unsigned long long)indentationLevel;
@property(nonatomic) long long canOverride;
@property(readonly, nonatomic) NSString *title;
- (id)initWithComplimentaryOverrides:(id)arg1;

@end

