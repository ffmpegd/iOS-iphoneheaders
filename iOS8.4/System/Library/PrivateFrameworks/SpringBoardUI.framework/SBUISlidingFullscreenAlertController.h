/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIFullscreenAlertController.h>

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController {

	UIView* _topBar;
	UIView* _bottomBar;
	BOOL _animatingIn;
	BOOL _animatingOut;

}

@property (nonatomic,readonly) UIView * topBar;                 //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,readonly) UIView * bottomBar;              //@synthesize bottomBar=_bottomBar - In the implementation block
-(void)dealloc;
-(id)backgroundView;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)viewDidLoad;
-(UIView *)topBar;
-(UIView *)bottomBar;
-(BOOL)isSlidingViewController;
-(BOOL)viewIsReadyToBeRemoved;
-(BOOL)hasTranslucentBackground;
-(BOOL)shouldShowBottomBar;
-(void)_performAnimateDisplayIn;
-(double)_slideOutAnimationDelay;
-(double)_slideOutAnimationDuration;
-(void)_viewAnimatedOut;
-(BOOL)_animatingToHomescreenWallpaper;
-(double)_animationDelayForOthersActivation;
-(void)updateSpringBoardInPreparationForTransparentDismiss;
-(BOOL)isShowingWallpaper;
-(void)finishedAnimatingIn;
-(void)viewWillAnimateIn;
-(void)animateViewIn;
-(void)viewWillAnimateOut;
-(void)animateViewOut;
-(id)newTopBar;
-(id)newBottomBar;
@end
