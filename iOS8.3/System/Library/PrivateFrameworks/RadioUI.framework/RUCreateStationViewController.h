/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:21:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUSearchViewControllerDelegate.h>
#import <RadioUI/RUStationTreeViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol RUCreateStationViewControllerDelegate;
@class RUMetricsController, NSMutableArray, UISearchDisplayController, RUSearchViewController, RUStationTreeViewController, NSString;

@interface RUCreateStationViewController : UIViewController <RUSearchViewControllerDelegate, RUStationTreeViewControllerDelegate, UIScrollViewDelegate> {

	RUMetricsController* _metricsController;
	NSMutableArray* _queuedMetricsOperations;
	UISearchDisplayController* _searchDisplayController;
	RUSearchViewController* _searchResultsViewController;
	char _shouldScrollSearchBar;
	char _shouldUseSearchingInsetsForSearchBar;
	RUStationTreeViewController* _stationTreeViewController;
	id<RUCreateStationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RUCreateStationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)setDelegate:(id<RUCreateStationViewControllerDelegate>)arg1 ;
-(id<RUCreateStationViewControllerDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)_contentInset;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)_addMetricsControllerOperationBlock:(/*^block*/id)arg1 ;
-(void)removeAddingIndicator;
-(void)_updateViewForHorizontalSizeClassChange;
-(void)stationTreeViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)stationTreeViewController:(id)arg1 didSelectStationTreeNode:(id)arg2 ;
-(id)metricsPageDescriptionForSearchViewController:(id)arg1 ;
-(id)metricsPageTypeForSearchViewController:(id)arg1 ;
-(void)searchViewController:(id)arg1 didSelectStation:(id)arg2 ;
-(void)searchViewControllerDidBeginSearching:(id)arg1 ;
-(void)searchViewControllerWillBeginSearching:(id)arg1 ;
-(void)searchViewControllerDidEndSearching:(id)arg1 ;
-(void)searchViewControllerWillEndSearching:(id)arg1 ;
-(id)_searchDisplayController;
-(void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1 ;
-(void)_statusBarHeightChangedNotification:(id)arg1 ;
-(UIEdgeInsets)_searchBarContentInset;
-(void)_updateSearchBarFrameForced:(char)arg1 ;
-(CGRect)_searchBarSearchingFrame;
-(void)_doneAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateSearchBarContentInset;
-(void)_addStationWithDictionary:(id)arg1 ;
@end

