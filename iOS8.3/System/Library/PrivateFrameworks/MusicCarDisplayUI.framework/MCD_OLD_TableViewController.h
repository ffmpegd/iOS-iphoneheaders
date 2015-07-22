/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:41:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MCDCarDisplayServiceProvider;
@class MPAVController, MPMediaQuery, UIView;

@interface MCD_OLD_TableViewController : UITableViewController {

	id<MCDCarDisplayServiceProvider> _serviceProvider;
	MPAVController* _player;
	MPMediaQuery* _query;
	char _viewHasAppeared;
	UIView* _nowPlayingButton;
	char _alwaysShowNavBar;

}

@property (nonatomic,readonly) id<MCDCarDisplayServiceProvider> serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,readonly) MPAVController * player;                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * query;                                          //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) char alwaysShowNavBar;                                           //@synthesize alwaysShowNavBar=_alwaysShowNavBar - In the implementation block
@property (assign,nonatomic) char viewHasAppeared;                                            //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
+(id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3 ;
+(id)addAlbumArtViewFromItem:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3 ;
-(void)_itemChanged:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(MPMediaQuery *)query;
-(id)preferredFocusedItem;
-(char)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(id)dequeueReusableCarDisplayCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id<MCDCarDisplayServiceProvider>)serviceProvider;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(char)alwaysShowNavBar;
-(void)_updateNowPlayingVisibility;
-(void)setViewHasAppeared:(char)arg1 ;
-(char)viewHasAppeared;
-(char)hasRowsToDisplay;
-(void)_presentNowPlayingViewController;
-(void)setAlwaysShowNavBar:(char)arg1 ;
-(MPAVController *)player;
@end
