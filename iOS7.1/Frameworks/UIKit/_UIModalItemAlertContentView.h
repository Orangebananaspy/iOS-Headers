//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIModalItemContentView.h>

@class UIScrollView, UITableView, UIView, _UIModalItemTextFiledBGView;

@interface _UIModalItemAlertContentView : _UIModalItemContentView
{
    _UIModalItemTextFiledBGView *_textFieldBGView;
    BOOL _alertViewIsSetup;
    UITableView *_otherTableView;
    UIView *_2ButtonsSeparators;
    UIView *_tableViewTopSeparator;
    UIScrollView *_labelsScrollView;
    BOOL _itemWantsVerticalButtons;
    BOOL _itemNeedsTwoTableViews;
}

- (void)_reloadButtons;
- (void)setEnableFirstOtherButton:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)layout;
- (void)_prepareViewIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

