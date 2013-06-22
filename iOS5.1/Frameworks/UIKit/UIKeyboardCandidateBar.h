/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateList-Protocol.h"
#import "UIKeyboardCandidateListDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIKeyboardCandidateBarBackgroundView, UIKeyboardCandidateExtended, UIScrollView;

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate>
{
    id <UIKeyboardCandidateListDelegate> m_delegate;
    UIKeyboardCandidateBarBackgroundView *m_cellsContainerView;
    NSArray *m_candidates;
    NSArray *m_allCandidates;
    NSString *m_inlineText;
    NSMutableArray *m_cells;
    unsigned int m_currentCandidateIndex;
    struct CGRect m_inlineRect;
    float m_maxX;
    BOOL m_largeUIShowing;
    UIKeyboardCandidateExtended *m_extendedCandidatesView;
    UIScrollView *m_scrollView;
    UIView *m_extendedButton;
    UIView *m_shadowView;
    BOOL m_minimized;
    BOOL m_animating;
}

+ (float)candidateBarHeight;
+ (id)activeInstance;
+ (id)sharedInstance;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=m_animating;
@property(nonatomic, getter=isMinimized) BOOL minimized; // @synthesize minimized=m_minimized;
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView; // @synthesize extendedCandidatesView=m_extendedCandidatesView;
@property(retain, nonatomic) UIKeyboardCandidateBarBackgroundView *cellsContainerView; // @synthesize cellsContainerView=m_cellsContainerView;
- (id).cxx_construct;
- (void)_hideExtendedCandidatesViewWithAnimation:(BOOL)arg1;
- (void)_showExtendedCandidatesView;
- (void)_forceLayoutTo:(unsigned int)arg1;
- (BOOL)_addCells:(int)arg1;
- (void)_bgAddCells:(id)arg1;
- (struct CGSize)screenSpaceBetweenStatusBarAndKeyboard;
- (void)_cellSelected:(id)arg1;
- (void)_clearAll;
- (void)_clearCells;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)configureKeyboard:(id)arg1;
- (unsigned int)count;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)_setCurrentCandidateIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)layout;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
