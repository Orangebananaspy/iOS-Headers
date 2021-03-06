/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptController.h>

@interface CKTranscriptController (MediaEntry)
+ (void)_sendDidFinishSavingImageNotificationWithImage:(id)arg1 error:(id)arg2 context:(void *)arg3;
+ (void)_sendDidFinishSavingVideoNotificationWithPath:(id)arg1 error:(id)arg2 context:(void *)arg3;
+ (void)_sendDidStartSavingMediaNotification;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (void)previewController:(id)arg1 didTransitionToState:(long long)arg2;
- (void)previewController:(id)arg1 willTransitionToState:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (void)_showCurrentPreviewItemForPreviewController:(id)arg1;
- (void)_hideCurrentPreviewItemForPreviewController:(id)arg1;
- (_Bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)readerViewControllerWillDismiss:(id)arg1;
- (id)_supportedMediaTypesForPhotoPicker;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (void)_showVCardViewerForMediaObject:(id)arg1;
- (void)_showMapViewerForMediaObject:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)_showPassbookCardViewForMediaObject:(id)arg1;
- (void)showViewerForMediaObject:(id)arg1;
- (void)dismissPresentedViewController:(id)arg1;
- (void)showReaderForPart:(id)arg1;
- (_Bool)_displayPreviewItemForMediaObject:(id)arg1;
- (void)updateQLPreviewControllerIfVisible;
- (id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(long long *)arg2 containsRestoring:(_Bool *)arg3;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)hideMediaPickerAnimated:(_Bool)arg1;
- (void)showMediaPicker:(id)arg1 animated:(_Bool)arg2;
- (void)_addPart:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)_userDidCaptureImage;
- (void)_userDidCancelCapturingImage;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_showMediaSourceSelectionSheet;
- (void)addMedia:(id)arg1;
- (_Bool)_shouldAllowCameraAttachments;
- (void)_setupMediaEntry;
@end

