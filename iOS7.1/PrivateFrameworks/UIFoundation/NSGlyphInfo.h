//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSGlyphInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_baseString;
}

+ (void)initialize;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned int)arg1 collection:(unsigned int)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)characterCollection;
- (unsigned int)characterIdentifier;
- (id)glyphName;
- (id)_baseString;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (void)dealloc;
- (id)initWithBaseString:(id)arg1;

@end

