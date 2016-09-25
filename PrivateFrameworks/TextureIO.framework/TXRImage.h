/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRImage : NSObject <NSCopying> {
    <TXRBuffer> * _buffer;
    unsigned int  _bytesPerImage;
    unsigned int  _bytesPerRow;
    <TXRDataSourceProvider> * _dataSourceProvider;
    unsigned int  _element;
    NSError * _error;
    int  _face;
    unsigned int  _level;
    unsigned int  _offset;
}

@property (readonly) <TXRBuffer> *buffer;
@property (readonly) unsigned int bytesPerImage;
@property (readonly) unsigned int bytesPerRow;
@property (readonly) NSError *error;
@property (readonly) unsigned int offset;

- (void).cxx_destruct;
- (id)buffer;
- (unsigned int)bytesPerImage;
- (unsigned int)bytesPerRow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deferredProvide;
- (id)error;
- (id)initAsLevel:(unsigned int)arg1 element:(unsigned int)arg2 face:(unsigned int)arg3 dataSourceProvider:(id)arg4;
- (id)initWithBytesPerRow:(unsigned int)arg1 bytesPerImage:(unsigned int)arg2 buffer:(id)arg3 offset:(unsigned int)arg4;
- (unsigned int)offset;

@end