/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Health/WDDashboardDataUnitGroupsObserver.h>
#import <Health/WDDataProviderOrderObserver.h>
#import <UIKit/UIViewControllerRestoration.h>

@class WDControllerManager, HKDataUnitGroup, HKSwitchTableViewCell, WDDataUnitGroupDescriptionTableViewCell, NSArray, WDDashboardTableViewCell, WDDashboardChartItem, _UINavigationControllerPalette, WDTimeScopeControl, UITableView, NSSet, UITableViewCell, NSString;

@interface WDDataUnitGroupDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WDDashboardDataUnitGroupsObserver, WDDataProviderOrderObserver, UIViewControllerRestoration> {

	WDControllerManager* _controllerManager;
	HKDataUnitGroup* _dataUnitGroup;
	HKSwitchTableViewCell* _dashboardSwitchCell;
	WDDataUnitGroupDescriptionTableViewCell* _dataUnitGroupDescriptionCell;
	NSArray* _cells;
	WDDashboardTableViewCell* _chartCell;
	WDDashboardChartItem* _chartItem;
	_UINavigationControllerPalette* _palette;
	WDTimeScopeControl* _timeSpanControl;
	UITableView* _tableView;
	NSSet* _availableUnits;
	UITableViewCell* _selectedUnitCell;
	char _wasOnDashboard;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 ;
-(void)_setupCells;
-(void)_setupObservers;
-(id)_dashboardTableViewCell;
-(id)_dashboardSwitchCell;
-(id)_showAllCell;
-(id)_addDataCell;
-(id)_shareDataCell;
-(id)_selectedUnitCell;
-(char)_shouldShowUnitsRow;
-(char)_canSelectUnitsRow;
-(void)_timeFrameForChartsChanged:(id)arg1 ;
-(void)_updateDashboardDataUnitGroups;
-(id)_selectedUnitCellText;
-(id)_showAllDataVC;
-(void)dashboardDataUnitGroupsUpdated:(id)arg1 ;
-(void)dataProviderOrderUpdatedWithOrder:(id)arg1 dataType:(id)arg2 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_attachPaletteIfNecessary;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
@end

