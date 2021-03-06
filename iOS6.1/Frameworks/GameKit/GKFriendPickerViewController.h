/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTableViewControllerV2.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GKFriendPickerDataSource, GKGameInviteComposeController, GKTableHeaderSearchController, GKUITheme, NSSet, NSString;

@interface GKFriendPickerViewController : GKTableViewControllerV2 <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    id <GKFriendPickerViewControllerDelegate> _delegate;
    int _maxPlayers;
    int _numSelected;
    GKUITheme *_theme;
    BOOL _loadingFriendsFailed;
    NSString *_inviteMessage;
    GKFriendPickerDataSource *_dataSource;
    GKTableHeaderSearchController *_searchController;
    GKGameInviteComposeController *_composeMessageViewController;
}

@property(retain, nonatomic) GKGameInviteComposeController *composeMessageViewController; // @synthesize composeMessageViewController=_composeMessageViewController;
@property(retain, nonatomic) GKTableHeaderSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) GKFriendPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(nonatomic) BOOL loadingFriendsFailed; // @synthesize loadingFriendsFailed=_loadingFriendsFailed;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
@property(nonatomic) int numSelected; // @synthesize numSelected=_numSelected;
@property(nonatomic) int maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) id <GKFriendPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateEnabledStateForVisibleCells;
- (id)visibleTableView;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)predicateForSearchText:(id)arg1;
- (void)done;
- (void)donePickingPlayersWithMessage:(id)arg1;
- (void)showMessageViewController;
- (id)selectedPlayers;
- (void)setPlayerRangeText;
@property(nonatomic) BOOL showsNearbyPlayers; // @dynamic showsNearbyPlayers;
@property(retain, nonatomic) NSSet *uninvitableFriends; // @dynamic uninvitableFriends;
- (void)friendPickerSelectionDidChangeNotification:(id)arg1;
- (void)friendPickerScopeSelectorTouched:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
@property(retain, nonatomic) NSString *achievementID; // @dynamic achievementID;
@property(retain, nonatomic) NSString *leaderboardID; // @dynamic leaderboardID;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (id)initWithGame:(id)arg1;

@end

