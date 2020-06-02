//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSBitmapEffectsContext : NSObject
{
    struct vImage_Buffer _workingBuffer;
    void *_tempData;
    unsigned long long _tempDataSize;
    CDUnknownBlockType _imageFreeBlock;
    struct vImage_Buffer _imageBuffer;
}

+ (struct CGImage *)createImageWithSize:(struct CGSize)arg1 blurRadius:(double)arg2 saturation:(double)arg3 options:(unsigned long long)arg4 colorSpace:(struct CGColorSpace *)arg5 drawingBlock:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType imageFreeBlock; // @synthesize imageFreeBlock=_imageFreeBlock;
@property(nonatomic) struct vImage_Buffer imageBuffer; // @synthesize imageBuffer=_imageBuffer;
- (id)description;
- (unsigned long long)memorySize;
- (struct CGImage *)createImageWithSize:(struct CGSize)arg1 blurRadius:(double)arg2 saturation:(double)arg3 options:(unsigned long long)arg4 colorSpace:(struct CGColorSpace *)arg5 drawingBlock:(CDUnknownBlockType)arg6 imageFreeBlock:(CDUnknownBlockType)arg7;
- (void)saturateBuffer:(struct vImage_Buffer *)arg1 saturation:(double)arg2;
- (struct vImage_Buffer *)blurBuffer:(struct vImage_Buffer *)arg1 workingBuffer:(struct vImage_Buffer *)arg2 tempBuffer:(void *)arg3 kernelSize:(unsigned int)arg4 options:(unsigned long long)arg5;
- (struct CGImage *)createImageFromBuffer:(struct vImage_Buffer *)arg1 colorSpace:(struct CGColorSpace *)arg2 imageFreeCallack:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (struct CGContext *)createContextForImageBuffer:(struct vImage_Buffer *)arg1 size:(struct CGSize)arg2 scale:(struct CGSize)arg3 colorSpace:(struct CGColorSpace *)arg4 blur:(BOOL)arg5;
- (void)checkTempDataSizeForImageBuffer:(struct vImage_Buffer *)arg1 workingBuffer:(struct vImage_Buffer *)arg2 kernelSize:(unsigned int)arg3;
- (struct vImage_Buffer)checkSize:(struct CGSize)arg1 forBuffer:(struct vImage_Buffer *)arg2;
- (double)imageScaleForBlurRadius:(double)arg1;
- (void)dealloc;

@end

