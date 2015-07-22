/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Fitness/MonthScrollViewDelegate.h>

@class UIPanGestureRecognizer, PaletteViewController, FitnessModel, NSDate, MonthScrollViewController, MonthInfiniteScrollView, UILabel, NSString;

@interface MonthViewController : UIViewController <UIGestureRecognizerDelegate, MonthScrollViewDelegate> {

	UIPanGestureRecognizer* _panGestureRecognizer;
	float _panXMax;
	float _panXStart;
	float _panYStart;
	float _panXPercent;
	PaletteViewController* _paletteVC;
	FitnessModel* _model;
	NSDate* _currentDateForNavigationTitle;
	char _needsRefreshedData;
	MonthScrollViewController* _scrollVC;
	MonthInfiniteScrollView* _scrollView;
	UILabel* _leftYearLabel;
	UILabel* _monthTitleLabel;

}

@property (assign,nonatomic) char needsRefreshedData;                           //@synthesize needsRefreshedData=_needsRefreshedData - In the implementation block
@property (nonatomic,retain) MonthScrollViewController * scrollVC;              //@synthesize scrollVC=_scrollVC - In the implementation block
@property (nonatomic,retain) MonthInfiniteScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * leftYearLabel;                           //@synthesize leftYearLabel=_leftYearLabel - In the implementation block
@property (nonatomic,retain) UILabel * monthTitleLabel;                         //@synthesize monthTitleLabel=_monthTitleLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)todayButtonPressed:(id)arg1 ;
-(void)setNeedsRefreshedData:(char)arg1 ;
-(MonthScrollViewController *)scrollVC;
-(void)scrolledPastMonthWithDate:(id)arg1 ;
-(void)dateSelected:(id)arg1 ;
-(id)_yearFromDate:(id)arg1 ;
-(id)_monthFromDate:(id)arg1 ;
-(void)handleMonthsViewGesture:(id)arg1 ;
-(char)needsRefreshedData;
-(void)_updateBackButtonOnDateChange:(id)arg1 ;
-(char)_isSameMonthAsCurrentMonth:(id)arg1 ;
-(void)setScrollVC:(MonthScrollViewController *)arg1 ;
-(UILabel *)leftYearLabel;
-(void)setLeftYearLabel:(UILabel *)arg1 ;
-(UILabel *)monthTitleLabel;
-(void)setMonthTitleLabel:(UILabel *)arg1 ;
-(void)_registerForNotifications;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setScrollView:(MonthInfiniteScrollView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(MonthInfiniteScrollView *)scrollView;
-(id)initWithModel:(id)arg1 ;
@end
