//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDataAction.h"

#import "MSDataMenuRefreshDataAction-Protocol.h"

@interface MSRefreshDataAction : MSDataAction <MSDataMenuRefreshDataAction>
{
}

- (BOOL)validateMenuItem:(id)arg1;
- (id)label;
- (void)doPerformAction:(id)arg1;
- (void)doRefreshDataOnCurrentSelection:(id)arg1;

@end
