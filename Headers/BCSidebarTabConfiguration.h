//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BCSidebarTabConfiguration : NSObject
{
    NSString *_tabIdentifier;
    CDUnknownBlockType _actionFilter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType actionFilter; // @synthesize actionFilter=_actionFilter;
@property(readonly, nonatomic) NSString *tabIdentifier; // @synthesize tabIdentifier=_tabIdentifier;
- (BOOL)shouldShowAction:(SEL)arg1;
- (id)initWithTabIdentifier:(id)arg1 actionFilter:(CDUnknownBlockType)arg2;

@end

