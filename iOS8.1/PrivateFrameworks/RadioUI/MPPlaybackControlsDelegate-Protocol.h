//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVItem, MPPlaybackControlsView;

@protocol MPPlaybackControlsDelegate <NSObject>

@optional
- (BOOL)controlsOverlay:(MPPlaybackControlsView *)arg1 shouldDisableMailPodcastLinkButtonForItem:(MPAVItem *)arg2;
- (BOOL)controlsOverlay:(MPPlaybackControlsView *)arg1 shouldHideMailPodcastLinkButtonForItem:(MPAVItem *)arg2;
- (void)controlsOverlay:(MPPlaybackControlsView *)arg1 didClickMailPodcastLinkButtonForItem:(MPAVItem *)arg2;
- (void)controlsOverlayDetailSliderInstructionOverlayWillHide:(MPPlaybackControlsView *)arg1;
- (void)controlsOverlayDetailSliderInstructionOverlayWillShow:(MPPlaybackControlsView *)arg1;
- (void)controlsOverlay:(MPPlaybackControlsView *)arg1 detailSliderTrackingDidChangeScrubSpeed:(int)arg2;
- (void)controlsOverlayDetailSliderTrackingDidEnd:(MPPlaybackControlsView *)arg1;
- (void)controlsOverlayDetailSliderTrackingDidBegin:(MPPlaybackControlsView *)arg1;
- (BOOL)controlsOverlay:(MPPlaybackControlsView *)arg1 shouldUseDetailScrubberForItem:(MPAVItem *)arg2;
- (unsigned int)controlsOverlay:(MPPlaybackControlsView *)arg1 playbackSpeedForItem:(MPAVItem *)arg2;
- (BOOL)controlsOverlay:(MPPlaybackControlsView *)arg1 shouldDisablePlaybackSpeedButtonForItem:(MPAVItem *)arg2;
- (void)controlsOverlayDidClickPlaybackSpeedButton:(MPPlaybackControlsView *)arg1;
- (BOOL)controlsOverlay:(MPPlaybackControlsView *)arg1 shouldDisableFastFowardAndRewindButtonForItem:(MPAVItem *)arg2;
- (void)controlsOverlayDidClickFastForwardButton:(MPPlaybackControlsView *)arg1;
- (void)controlsOverlayDidClickRewindButton:(MPPlaybackControlsView *)arg1;
- (unsigned int)shuffleTypeForPlaybackControls:(MPPlaybackControlsView *)arg1;
- (unsigned int)repeatTypeForPlaybackControls:(MPPlaybackControlsView *)arg1;
- (BOOL)hideGeniusButtonForPlaybackControls:(MPPlaybackControlsView *)arg1;
- (BOOL)playbackControlsScrubberShouldDisplaySingleChapters:(MPPlaybackControlsView *)arg1;
- (BOOL)playbackControlsDidTapGeniusButton:(MPPlaybackControlsView *)arg1;
- (BOOL)playbackControls:(MPPlaybackControlsView *)arg1 changedShuffleType:(unsigned int)arg2;
- (BOOL)playbackControls:(MPPlaybackControlsView *)arg1 changedRepeatType:(unsigned int)arg2;
@end

