/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAppToAppWorkspaceTransaction.h>

@class SBAlert;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction {

	SBAlert* _deactivatingAlert;
	BOOL _animatedAppActivation;

}
-(id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5 ;
-(void)_doCommit;
-(int)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(id)_newAnimationFromAppToApp;
-(id)_newAnimationFromAppToNowPlaying;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_transactionComplete;
-(BOOL)selfApplicationLaunchDidFail:(id)arg1 ;
-(BOOL)selfApplicationExited:(id)arg1 ;
-(BOOL)selfStarkAlertDidDeactivate:(id)arg1 ;
-(void)_deactivateAlertIfPossible;
-(void)_handleFailureToLaunch;
-(id)_newAnimationFromAppToLauncher;
-(BOOL)selfStarkAlertWillDeactivate:(id)arg1 ;
-(void)dealloc;
@end
