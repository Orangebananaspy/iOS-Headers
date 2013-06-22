/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDPath.h>

#import "GQDNameMappable-Protocol.h"

@interface GQDBezierPath : GQDPath <GQDNameMappable>
{
    struct CGPath *mPath;
    char *mPathStr;
    BOOL mHasVFlip;
    BOOL mVFlip;
    BOOL mHasHFlip;
    BOOL mHFlip;
}

+ (const struct StateSpec *)stateForReading;
+ (struct __CFString *)createCFStringFromPath:(struct CGPath *)arg1;
- (id)initWithPathString:(const char *)arg1;
- (void)dealloc;
- (BOOL)isRectangular;
- (struct CGPath *)path;
- (char *)pathStr;
- (struct CGPath *)createBezierPath;
- (BOOL)hasVerticalFlip;
- (BOOL)hasHorizontalFlip;
- (BOOL)verticalFlip;
- (BOOL)horizontalFlip;

@end
