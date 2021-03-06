//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchBlurLayer : BLRetouchEffectLayer
{
    BOOL _sharpen;
    int _radius;
    float _radiusScale;
}

+ (id)layerWithBlur:(int)arg1;
+ (id)layerWithSharpen:(int)arg1;
@property(nonatomic) BOOL sharpen; // @synthesize sharpen=_sharpen;
@property(nonatomic) float radiusScale; // @synthesize radiusScale=_radiusScale;
@property(nonatomic) int radius; // @synthesize radius=_radius;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(float)arg3;
- (int)radiusToApply;
- (BOOL)hasAmount;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg1;

@end

