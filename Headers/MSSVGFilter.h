//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchSVG/MSXMLElementWrapper.h>

@class MSSVGMerge, NSString;

@interface MSSVGFilter : MSXMLElementWrapper
{
    MSSVGMerge *_finalMerge;
}

+ (id)filter;
+ (id)elementName;
- (void).cxx_destruct;
@property(retain, nonatomic) MSSVGMerge *finalMerge; // @synthesize finalMerge=_finalMerge;
- (void)close;
- (void)addFilterOutput:(id)arg1;
- (void)addFilterItem:(id)arg1;
@property(copy, nonatomic) NSString *href; // @dynamic href;
- (void)dealloc;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *filterRes; // @dynamic filterRes;
@property(copy, nonatomic) NSString *filterUnits; // @dynamic filterUnits;
@property(copy, nonatomic) NSString *height; // @dynamic height;
@property(copy, nonatomic) NSString *primitiveUnits; // @dynamic primitiveUnits;
@property(copy, nonatomic) NSString *width; // @dynamic width;
@property(copy, nonatomic) NSString *x; // @dynamic x;
@property(copy, nonatomic) NSString *y; // @dynamic y;

@end

