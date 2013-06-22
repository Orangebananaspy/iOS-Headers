/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "BBWeeAppPresentationController-Protocol.h"

@class NSObject<SLWeeAppContainerViewControllerDelegate>, NSObject<SLWeeAppServiceHandler>, UIImageView;

@interface SLWeeAppSheetContainerViewController : UIViewController <BBWeeAppPresentationController>
{
    NSObject<SLWeeAppServiceHandler> *_serviceHandler;
    NSObject<SLWeeAppContainerViewControllerDelegate> *_delegate;
    UIViewController *_shareSheet;
    UIImageView *_vignetteView;
    BOOL _receivingKeyboardNotifications;
    BOOL _showingShareSheet;
    BOOL _presented;
    BOOL _dismissed;
    int _currentInterfaceOrientation;
}

@property(nonatomic) __weak NSObject<SLWeeAppContainerViewControllerDelegate> *sheetDelegate; // @synthesize sheetDelegate=_delegate;
@property(retain, nonatomic) NSObject<SLWeeAppServiceHandler> *serviceHandler; // @synthesize serviceHandler=_serviceHandler;
@property(nonatomic) int currentInterfaceOrientation; // @synthesize currentInterfaceOrientation=_currentInterfaceOrientation;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_animateOutPadShareSheetWithResult:(BOOL)arg1 completion:(id)arg2;
- (void)_animateInShareSheetPad;
- (struct CGSize)_screenSize;
- (BOOL)_isPad;
- (void)_informDelegateOfDismissWithResult:(BOOL)arg1;
- (void)_informDelegateOfDidAnimateWithResult:(BOOL)arg1;
- (void)_informDelegateOfWillAnimateWithTime:(double)arg1 result:(BOOL)arg2;
- (void)postCompletedWithResult:(BOOL)arg1;
- (void)_showShareSheet;
- (void)_unloadShareSheet;
- (void)_loadShareSheetIfNeeded;
- (void)_keyboardWillShow:(id)arg1;
- (struct CGRect)_verticallyCenteredFrameForShareSheet;
- (void)_animateOutShareSheetWithResult:(BOOL)arg1;
- (void)_shareSheetFinishedSlidingIn;
- (void)_animateInShareSheet;
- (BOOL)_useCustomDimmingView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
- (void)_handleGestureNoAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;
- (void)dismissWithCompletion:(id)arg1;
- (void)beginAnimation;

@end
