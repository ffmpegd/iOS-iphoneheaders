/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <SpringBoard/SPSearchAgentDelegate.h>
#import <SpringBoard/SBSearchGestureObserver.h>
#import <UIKit/UISearchBarDelegate.h>
#import <SpringBoard/SBSearchResultsActionManagerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <SpringBoard/SBUIActiveOrientationObserver.h>
#import <SpringBoard/SBReachabilityObserver.h>
#import <SpringBoard/SBSearchHeaderDelegate.h>

@class UINavigationController, UIViewController, SBSearchFirstTimeViewController, UITableView, SBSearchHeader, SBSearchResultsBackdropView, SBSearchResultsActionManager, UIWindow, UILabel, UITapGestureRecognizer, UIPanGestureRecognizer, UIGestureRecognizer, NSString;

@interface SBSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPSearchAgentDelegate, SBSearchGestureObserver, UISearchBarDelegate, SBSearchResultsActionManagerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, SBUIActiveOrientationObserver, SBReachabilityObserver, SBSearchHeaderDelegate> {

	UINavigationController* _navigationController;
	UIViewController* _mainViewController;
	SBSearchFirstTimeViewController* _firstTimeViewController;
	UITableView* _tableView;
	SBSearchHeader* _searchHeader;
	SBSearchResultsBackdropView* _tableBackdrop;
	SBSearchResultsActionManager* _actionManager;
	UIWindow* _presentingWindow;
	long long _presentingWindowOrientation;
	UILabel* _noResultsLabel;
	UITapGestureRecognizer* _tapRecognizer;
	UIPanGestureRecognizer* _panRecognizer;
	void* _addressBook;
	double _lastContentOffsetY;
	BOOL _scrollDown;
	long long _visibility;
	double _headerHeight;
	BOOL _hasShownBackgroundSinceLastClear;
	long long _firstTimeViewShowCount;
	BOOL _canShowFirstTimeView;
	double _triggerTimestamp;
	CGPoint _preReachabilityTableViewOrigin;
	CGPoint _reachabilityTableViewOrigin;
	BOOL _showingForReachability;
	UIGestureRecognizer* _cancelRecognizer;
	/*^block*/id _fadeOutCompletionBlock;

}

@property (getter=isFadingOut,nonatomic,readonly) BOOL fadingOut; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)handleReachabilityModeDeactivated;
-(id)_actionManager;
-(void)actionManager:(id)arg1 dismissAnimated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)actionManager:(id)arg1 dismissViewController:(id)arg2 completion:(/*^block*/id)arg3 animated:(BOOL)arg4 ;
-(UIEdgeInsets)actionManagerDetailsViewEdgeInsets:(id)arg1 ;
-(void)actionManager:(id)arg1 presentViewController:(id)arg2 completion:(/*^block*/id)arg3 modally:(BOOL)arg4 ;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(void)_lockScreenUIWillLock:(id)arg1 ;
-(void)_performReachabilityTransactionForActivate:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
-(void)_handlePanRecognizer:(id)arg1 ;
-(void)_handleTapRecognizer:(id)arg1 ;
-(void)_updateCellClipping:(id)arg1 ;
-(void)_updateTableContents;
-(UIEdgeInsets)searchBorderMarginsForSearchField:(BOOL)arg1 cancelMargins:(UIEdgeInsets*)arg2 ;
-(void)_setShowingKeyboard:(BOOL)arg1 ;
-(void)_fadeOutAndHideKeyboardAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendAbandonmentFeedback;
-(BOOL)_hasNoQuery;
-(BOOL)_hasResults;
-(BOOL)_showFirstTimeView;
-(void)_setFirstTimeViewVisible:(BOOL)arg1 ;
-(BOOL)_hasNoResultsForQuery;
-(void)_sendFeedback:(id)arg1 ;
-(void)_updateHeaderHeightIfNeeded;
-(void)_fadeForLaunchWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleDismissGesture;
-(BOOL)isFadingOut;
-(void)_deselectTableViewCell;
-(void)attributionButtonTapped:(id)arg1 ;
-(BOOL)_showingKeyboard;
-(void)_updateClipping;
-(void)_rotatePresentingWindowIfNecessaryTo:(long long)arg1 withDuration:(double)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_animateForReachabilityActivatedWithHandler:(/*^block*/id)arg1 ;
-(void)_animateForReachabilityDeactivatedWithHandler:(/*^block*/id)arg1 ;
-(void)cancelButtonPressed;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)isVisible;
-(void)dismiss;
-(void)_searchFieldEditingChanged;
-(void)_searchFieldReturnPressed;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)handleReachabilityModeActivated;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)searchAgentUpdatedResults:(id)arg1 ;
-(void)searchAgentClearedResults:(id)arg1 ;
@end
