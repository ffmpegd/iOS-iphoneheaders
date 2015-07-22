/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBStarkSessionConfiguring;
@class SBStarkScreenController, SBStarkLockOutView, SBUIStarkStartupAnimation;

@interface SBStarkLockOutViewController : UIViewController {

	id<SBStarkSessionConfiguring> _configuration;
	SBStarkScreenController* _screenController;
	long long _mode;
	SBStarkLockOutView* _modeView;
	SBStarkLockOutView* _previousModeView;
	BOOL _inDealloc;
	BOOL _pendingAnimated;
	long long _pendingMode;
	SBUIStarkStartupAnimation* _startupAnimation;

}

@property (assign,nonatomic) long long lockOutMode; 
@property (nonatomic,retain,readonly) SBStarkLockOutView * lockoutView;               //@synthesize modeView=_modeView - In the implementation block
@property (nonatomic,retain) SBStarkScreenController * screenController;              //@synthesize screenController=_screenController - In the implementation block
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)setScreenController:(SBStarkScreenController *)arg1 ;
-(void)setLockOutMode:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)lockOutMode;
-(id)_newModeViewForMode:(long long)arg1 ;
-(void)_updateLockOutModeIfPending;
-(SBStarkLockOutView *)lockoutView;
-(void)setLockOutMode:(long long)arg1 ;
-(SBStarkScreenController *)screenController;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)preferredFocusedItem;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end
