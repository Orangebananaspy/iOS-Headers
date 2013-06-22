/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class NSArray, NSString;

@interface CKTranscriptHeaderViewController : UITableViewController <UIActionSheetDelegate>
{
    BOOL _isVisible;
    BOOL __showPhoneButton;
    BOOL __showFaceTimeAudioButton;
    BOOL __showEmailButton;
    id <CKTranscriptHeaderControllerDelegate> _delegate;
    NSArray *_recipients;
    NSString *_serviceAvailabilityKey;
}

@property(readonly, nonatomic) BOOL _showEmailButton; // @synthesize _showEmailButton=__showEmailButton;
@property(readonly, nonatomic) BOOL _showFaceTimeAudioButton; // @synthesize _showFaceTimeAudioButton=__showFaceTimeAudioButton;
@property(readonly, nonatomic) BOOL _showPhoneButton; // @synthesize _showPhoneButton=__showPhoneButton;
@property(retain, nonatomic) NSString *serviceAvailabilityKey; // @synthesize serviceAvailabilityKey=_serviceAvailabilityKey;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) id <CKTranscriptHeaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_hasLinkedTelephoneNumbersForEntity:(id)arg1;
@property(readonly, nonatomic) BOOL _isFaceTimeAudioAvailable;
@property(readonly, nonatomic) BOOL _isFaceTimeVideoAvailable;
@property(readonly, nonatomic) BOOL _isTelephonyDevice;
- (BOOL)_showEmailButtonForEntity:(id)arg1;
- (BOOL)_showFaceTimeAudioButtonForEntity:(id)arg1;
@property(readonly, nonatomic) BOOL _showFaceTimeVideoButton;
- (BOOL)_showPhoneButtonForEntity:(id)arg1;
@property(readonly, nonatomic) BOOL _showInfoButton;
- (void)_startCommunicationForEntity:(id)arg1;
- (void)infoAction:(id)arg1;
- (void)facetimeAudioAction:(id)arg1;
- (void)facetimeVideoAction:(id)arg1;
- (void)phoneCallAction:(id)arg1;
- (void)sendEmailAction:(id)arg1;
- (id)entityForButton:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadView;
- (id)initWithStyle:(int)arg1;
- (void)dealloc;

@end
