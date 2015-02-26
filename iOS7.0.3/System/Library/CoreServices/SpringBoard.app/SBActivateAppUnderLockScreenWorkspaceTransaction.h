/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBToAppWorkspaceTransaction.h>

@class SBLockScreenViewControllerBase, SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction {

	SBLockScreenViewControllerBase* _lockScreenController;
	SBDisableActiveInterfaceOrientationChangeAssertion* _disableActiveOrientationChangeAssertion;

}
-(id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 application:(id)arg3 lockScreenController:(id)arg4 ;
-(id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 application:(id)arg3 lockScreenController:(id)arg4 activationHandler:(/*^block*/ id)arg5 ;
-(void)_transactionComplete;
-(void)_alertDidActivate;
-(BOOL)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2 ;
-(BOOL)selfAlertDidActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfWorkspaceDidResume;
-(BOOL)selfApplicationActivated:(id)arg1 ;
-(BOOL)selfApplicationLaunchDidFail:(id)arg1 ;
-(BOOL)selfApplicationExited:(id)arg1 ;
-(BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(void)_suspendWorkspaceIfNecessary;
-(void)_setupAndActivate;
-(BOOL)_shouldWorkspaceBeSuspended;
-(void)_handleAppActivationFailure;
-(void)_commit;
-(void)dealloc;
@end
