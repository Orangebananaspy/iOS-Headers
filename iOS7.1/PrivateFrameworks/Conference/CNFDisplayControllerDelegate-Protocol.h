//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNFAudioDeviceController, CNFDisplayController, NSURL;

@protocol CNFDisplayControllerDelegate <NSObject>
- (void)conferenceDisplayController:(CNFDisplayController *)arg1 endCallWithReason:(unsigned int)arg2;

@optional
- (CNFAudioDeviceController *)audioDeviceController;
- (void)conferenceDisplayControllerEndedWhileSuspending:(CNFDisplayController *)arg1;
- (void)conferenceDisplayController:(CNFDisplayController *)arg1 endWithReason:(unsigned int)arg2;
- (void)conferenceDisplayController:(CNFDisplayController *)arg1 didFinishAnimatingCallEndWithReason:(unsigned int)arg2;
- (BOOL)auxiliaryAudioRoutesAvailable;
- (void)conferenceDisplayController:(CNFDisplayController *)arg1 cameraToggleWithReason:(unsigned int)arg2;
- (void)conferenceDisplayController:(CNFDisplayController *)arg1 muteConferenceWithReason:(unsigned int)arg2;
- (void)conferenceDisplayController:(CNFDisplayController *)arg1 retryVideoConferenceInvitationWithReason:(unsigned int)arg2;
- (void)conferenceDisplayController:(CNFDisplayController *)arg1 cancelCallFailureRecoveryWithReason:(unsigned int)arg2;
- (NSURL *)originationURL;
- (BOOL)isInPhoneCall;
- (BOOL)isOutgoingInvitation;
@end

