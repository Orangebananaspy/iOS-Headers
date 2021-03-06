/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class EKEvent, EKEventDetailItem, NSArray, NSString, UIActionSheet, UIButton, UITableView, UIToolbar;

@interface EKEventViewController : UIViewController
{
    EKEvent *_event;
    NSString *_eventId;
    UIActionSheet *_alertSheet;
    int _pendingStatus;
    id <EKEventViewDelegate> _delegate;
    id _editor;
    UIButton *_responseButtons[3];
    UIToolbar *_buttonBar;
    int _lastOrientation;
    id _currentEditItem;
    UITableView *_tableView;
    unsigned int _didAppear:1;
    unsigned int _autoPop:1;
    unsigned int _allowsEditing:1;
    unsigned int _allowsSubitems:1;
    unsigned int _showsPreview:1;
    unsigned int _forcePreview:1;
    unsigned int _trustsStatus:1;
    unsigned int _allowsInviteResponses:1;
    unsigned int _showsAddToCalendar:1;
    unsigned int _icsPreview:1;
    unsigned int _needsReload:1;
    unsigned int _showsDoneButton:1;
    NSArray *_items;
    NSArray *_currentSections;
    int _scrollToSection;
    BOOL _ignoreDBChanges;
    BOOL _showsTimeZone;
}

+ (void)setDefaultDatesForEvent:(id)arg1;
@property(nonatomic) BOOL showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) BOOL ignoreDBChanges; // @synthesize ignoreDBChanges=_ignoreDBChanges;
@property(nonatomic) id <EKEventViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_responseChanged:(id)arg1;
- (void)_declineButtonPressed:(id)arg1;
- (void)_maybeButtonPressed:(id)arg1;
- (void)_acceptButtonPressed:(id)arg1;
- (void)_selectButtonWithTag:(int)arg1;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)_addToCalendarClicked:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)invokeInviteAction:(int)arg1;
- (void)_prepareEventForEdit;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)_dismissEditor:(BOOL)arg1;
- (id)viewControllerForEventItem:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_presentDetachSheet;
- (BOOL)_canDetachSingleOccurrence;
- (struct CGSize)contentSizeForViewInPopover;
- (void)_performDelete;
- (void)_presentValidationAlert:(id)arg1;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_saveStatus:(int)arg1 span:(int)arg2;
- (void)_markEventAsRead;
- (void)editEvent;
- (void)doneButtonPressed;
- (void)setupForEvent;
- (void)_updateFooterIfNeeded;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (id)_items;
- (void)_setupAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_localeChanged;
- (void)_storeChanged:(id)arg1;
- (void)accessibilityLargeTextDidChange;
@property(retain, nonatomic) EKEventDetailItem *_currentEditItem;
- (int)scrollToSection;
- (void)setScrollToSection:(int)arg1;
- (void)completeWithAction:(int)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (BOOL)showsDoneButton;
- (void)setShowsAddToCalendar:(BOOL)arg1;
- (BOOL)showsAddToCalendar;
- (void)setICSPreview:(BOOL)arg1;
- (BOOL)isICSPreview;
- (void)setAlwaysShowsCalendarPreview:(BOOL)arg1;
- (BOOL)alwaysShowsCalendarPreview;
@property(nonatomic) BOOL allowsCalendarPreview;
- (void)setAllowsSubitems:(BOOL)arg1;
- (BOOL)allowsSubitems;
@property(nonatomic) BOOL allowsEditing;
@property(retain, nonatomic) EKEvent *event;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (void)_pop;
- (struct CGSize)_idealSize;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (BOOL)_shouldDisplayDoneButton;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) UITableView *tableView;
- (void)dealloc;
- (void)_teardownTableView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithEvent:(id)arg1;

@end

