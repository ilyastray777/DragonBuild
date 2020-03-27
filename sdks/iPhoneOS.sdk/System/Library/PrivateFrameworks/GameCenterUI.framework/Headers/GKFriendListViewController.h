//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>


@class NSArray, NSMutableArray, UIActivityIndicatorView, UISearchController;
@protocol GKFriendListViewControllerDelegate;

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _needsShowMoreFooter;
    id <GKFriendListViewControllerDelegate> _delegate;
    NSMutableArray *_friendPlayers;
    NSMutableArray *_recentPlayers;
    NSMutableArray *_allPlayers;
    NSArray *_friendsForDisplay;
    NSArray *_recentsForDisplay;
    NSArray *_allPlayersForDisplay;
    UISearchController *_searchController;
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) BOOL needsShowMoreFooter; // @synthesize needsShowMoreFooter=_needsShowMoreFooter;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *allPlayersForDisplay; // @synthesize allPlayersForDisplay=_allPlayersForDisplay;
@property(retain, nonatomic) NSArray *recentsForDisplay; // @synthesize recentsForDisplay=_recentsForDisplay;
@property(retain, nonatomic) NSArray *friendsForDisplay; // @synthesize friendsForDisplay=_friendsForDisplay;
@property(retain, nonatomic) NSMutableArray *allPlayers; // @synthesize allPlayers=_allPlayers;
@property(retain, nonatomic) NSMutableArray *recentPlayers; // @synthesize recentPlayers=_recentPlayers;
@property(retain, nonatomic) NSMutableArray *friendPlayers; // @synthesize friendPlayers=_friendPlayers;
@property(nonatomic) id <GKFriendListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)addFriends:(id)arg1;
- (void)reportPlayerAtIndexPath:(id)arg1;
- (void)deletePlayerAtIndexPath:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)getPlayerAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (BOOL)tableViewHasFooter:(long long)arg1;
- (void)showLoadingIndicator;
- (void)loadMoreFriends;
- (void)loadDataWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)loadData;
- (void)setupNavBar;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupSearchController;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end
