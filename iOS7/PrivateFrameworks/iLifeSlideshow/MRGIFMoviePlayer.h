/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MRGIFMoviePlayer : NSObject
{
    NSString *_path;
    struct CGSize _size;
    struct CGImageSource *_imageSource;
    struct CGImage *_currentImage;
    unsigned int _currentIndex;
    unsigned int _numberOfImages;
    double _nextImageTime;
    double _playTimeOffset;
    float _imageDuration;
    _Bool _isPlaying;
}

@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)getNextImage;
@property(readonly) struct CGImage *currentImage;
- (void)setTime:(double)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithPath:(id)arg1 andSize:(struct CGSize)arg2;

@end

