/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class BBSectionIcon, NSNumber, NSSet, NSString;

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding>
{
    BBSectionSubtypeParameters *_fallbackParameters;
    NSString *_topic;
    NSString *_missedBannerDescriptionFormat;
    NSString *_fullUnlockActionLabel;
    NSString *_unlockActionLabel;
    NSSet *_alertSuppressionAppIDs;
    BBSectionIcon *_sectionIconOverride;
    NSNumber *_boxedCoalescesWhenLocked;
    NSNumber *_boxedSuppressesMessageForPrivacy;
    NSNumber *_boxedRealertCount;
    NSNumber *_boxedInertWhenLocked;
    NSNumber *_boxedPreservesUnlockActionCase;
    NSNumber *_boxedBannerShowsSubtitle;
    NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;
    NSNumber *_boxedSubtypePriority;
    NSNumber *_boxedIPodOutAlertType;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *boxedIPodOutAlertType; // @synthesize boxedIPodOutAlertType=_boxedIPodOutAlertType;
@property(retain, nonatomic) NSNumber *boxedSubtypePriority; // @synthesize boxedSubtypePriority=_boxedSubtypePriority;
@property(retain, nonatomic) NSNumber *boxedVisuallyIndicatesWhenDateIsInFuture; // @synthesize boxedVisuallyIndicatesWhenDateIsInFuture=_boxedVisuallyIndicatesWhenDateIsInFuture;
@property(retain, nonatomic) NSNumber *boxedBannerShowsSubtitle; // @synthesize boxedBannerShowsSubtitle=_boxedBannerShowsSubtitle;
@property(retain, nonatomic) NSNumber *boxedPreservesUnlockActionCase; // @synthesize boxedPreservesUnlockActionCase=_boxedPreservesUnlockActionCase;
@property(retain, nonatomic) NSNumber *boxedInertWhenLocked; // @synthesize boxedInertWhenLocked=_boxedInertWhenLocked;
@property(retain, nonatomic) NSNumber *boxedRealertCount; // @synthesize boxedRealertCount=_boxedRealertCount;
@property(retain, nonatomic) NSNumber *boxedSuppressesMessageForPrivacy; // @synthesize boxedSuppressesMessageForPrivacy=_boxedSuppressesMessageForPrivacy;
@property(retain, nonatomic) NSNumber *boxedCoalescesWhenLocked; // @synthesize boxedCoalescesWhenLocked=_boxedCoalescesWhenLocked;
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs; // @synthesize alertSuppressionAppIDs=_alertSuppressionAppIDs;
@property(copy, nonatomic) NSString *unlockActionLabel; // @synthesize unlockActionLabel=_unlockActionLabel;
@property(copy, nonatomic) NSString *fullUnlockActionLabel; // @synthesize fullUnlockActionLabel=_fullUnlockActionLabel;
@property(copy, nonatomic) NSString *missedBannerDescriptionFormat; // @synthesize missedBannerDescriptionFormat=_missedBannerDescriptionFormat;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) BBSectionSubtypeParameters *fallbackParameters; // @synthesize fallbackParameters=_fallbackParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long iPodOutAlertType;
@property(nonatomic) unsigned long long subtypePriority;
@property(nonatomic) _Bool visuallyIndicatesWhenDateIsInFuture;
@property(nonatomic) _Bool bannerShowsSubtitle;
@property(nonatomic) _Bool preservesUnlockActionCase;
@property(nonatomic) _Bool inertWhenLocked;
@property(nonatomic) unsigned long long realertCount;
@property(nonatomic) _Bool suppressesMessageForPrivacy;
@property(nonatomic) _Bool coalescesWhenLocked;
@property(copy, nonatomic) BBSectionIcon *sectionIconOverride; // @synthesize sectionIconOverride=_sectionIconOverride;
- (void)dealloc;
- (id)initWithFallbackParameters:(id)arg1;

@end

