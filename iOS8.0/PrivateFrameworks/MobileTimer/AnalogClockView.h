//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "Clock.h"

@class NSCalendar, NSDate, NSTimeZone, UIImage, UIImageView, UIView<HandView>;

@interface AnalogClockView : UIView <Clock>
{
    int _runMode;
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIImageView *_faceView;
    UIView<HandView> *_dayHands[3];
    UIView<HandView> *_nightHands[3];
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    NSDate *_time;
    BOOL _nighttime;
    double _seconds;
    int _flutterIndex;
    BOOL _isRenderStateStale;
    NSCalendar *_calendar;
    BOOL _minuteHourAnimationTriggered;
}

+ (id)imageInBundleForName:(id)arg1;
+ (id)overSecondHandDotImage;
+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotForDayTime:(BOOL)arg1;
+ (id)overHourHandDotImageForDaytime:(BOOL)arg1;
+ (id)makeDotImageSize:(float)arg1 color:(id)arg2;
+ (id)clockHand:(int)arg1 daytime:(BOOL)arg2;
+ (id)makeClockHand:(int)arg1 daytime:(BOOL)arg2;
+ (id)clockFaceForDaytime:(BOOL)arg1;
+ (void)adjustNumberalCenter:(struct CGPoint *)arg1 forNumeralIndex:(int)arg2;
+ (id)makeClockFaceForDaytime:(BOOL)arg1;
+ (id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(CDUnknownBlockType)arg3;
+ (BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2;
+ (id)imageCacheNameForType:(int)arg1 daytime:(BOOL)arg2;
+ (struct CGPoint)shadowRotationalCenterForHand:(int)arg1;
+ (struct CGPoint)handRotationalCenterForHand:(int)arg1;
+ (struct ShadowInfo)shadowInfoAtIndex:(unsigned int)arg1;
+ (struct CGSize)clockSize;
+ (id)overSecondHandDotColor;
+ (id)nightTimeOverHourHandDotColor;
+ (id)dayTimeOverHourHandDotColor;
+ (float)overSecondHandDotSize;
+ (float)overHourHandDotSize;
+ (BOOL)hasOverSecondHandDot;
+ (BOOL)hasOverHourHandDot;
+ (struct UIEdgeInsets)shadowInsets;
+ (BOOL)doesFaceHaveShadow;
+ (id)numeralFont;
+ (float)numeralInset;
+ (id)nightTimeFaceColor;
+ (id)nightTimeTextColor;
+ (id)dayTimeFaceColor;
+ (id)dayTimeTextColor;
+ (id)resourcePath;
+ (int)style;
+ (float)hourHandWidth;
+ (float)minuteHandWidth;
+ (float)secondHandWidth;
+ (float)hourHandLength;
+ (float)minuteHandLength;
+ (float)secondHandLength;
+ (float)faceRadius;
+ (id)analogClockWithStyle:(int)arg1;
+ (struct UIEdgeInsets)insetsForStyle:(int)arg1;
+ (struct CGSize)sizeForStyle:(int)arg1;
+ (void)unregisterSweepingClock:(id)arg1;
+ (void)unregisterTickingClock:(id)arg1;
+ (void)unregisterClock:(id)arg1;
+ (void)registerSweepingClock:(id)arg1;
+ (void)registerTickingClock:(id)arg1;
+ (void)registerClock:(id)arg1;
+ (BOOL)isClockRegistered:(id)arg1;
+ (void)updateTimeForAllSweeping;
+ (void)updateFlutterForAllTicking;
+ (void)updateTimeForAllTicking;
+ (id)cacheVersionHash;
+ (id)cacheVersionedPath;
+ (id)cacheTopLevelPath;
+ (void)initialize;
+ (Class)classForStyle:(int)arg1;
@property(readonly, nonatomic, getter=isNighttime) BOOL nighttime; // @synthesize nighttime=_nighttime;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) UIImageView *faceView; // @synthesize faceView=_faceView;
@property(nonatomic) int runMode; // @synthesize runMode=_runMode;
- (void)stop;
- (void)start;
@property(readonly, nonatomic, getter=isStarted) BOOL started;
@property(retain, nonatomic) NSTimeZone *timeZone;
- (void)setTime:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) int minute;
@property(readonly, nonatomic) int hour;
- (void)updateTimeAnimated:(BOOL)arg1;
- (void)updateTime;
- (void)setNighttime:(BOOL)arg1;
- (void)updateFlutter;
- (void)setHandAngle:(float)arg1 forHandIndex:(int)arg2;
- (void)updateTimeContinuously:(int)arg1;
- (void)setHandTransformForHandIndex:(int)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) int style;
- (void)dealloc;
- (id)init;
- (void)setFrame:(struct CGRect)arg1;
- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

