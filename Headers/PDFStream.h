//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface PDFStream : NSObject
{
    int _format;
    struct CGPDFStream *_stream;
    NSDictionary *_dictionary;
    NSData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int format; // @synthesize format=_format;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(nonatomic) struct CGPDFStream *stream; // @synthesize stream=_stream;
- (id)description;
- (void)getDataAndFormat;
- (id)initWithStream:(struct CGPDFStream *)arg1;

@end

