/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKSWorkspaceDelegate <NSObject>
@optional
-(void)workspace:(id)arg1 applicationDidRemainReceiver:(id)arg2 fromApplication:(id)arg3;
-(void)workspace:(id)arg1 applicationDidFailToActivate:(id)arg2;
-(void)workspace:(id)arg1 applicationFinishedBackgroundContentFetching:(id)arg2 withInfo:(id)arg3;
-(int)workspace:(id)arg1 canOpenApplication:(id)arg2;
-(void)workspace:(id)arg1 handleOpenApplicationRequest:(id)arg2 withOptions:(id)arg3 origin:(id)arg4 withResult:(/*^block*/ id)arg5;
-(void)workspace:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 withOptions:(id)arg4 origin:(id)arg5 withResult:(/*^block*/ id)arg6;

@required
-(id)workspace:(id)arg1 applicationWillBecomeReceiver:(id)arg2 fromApplication:(id)arg3;
-(void)workspaceWillSuspend:(id)arg1;
-(void)workspace:(id)arg1 applicationDidBecomeReceiver:(id)arg2 fromApplication:(id)arg3;
-(void)workspace:(id)arg1 handleStatusBarReturnActionFromApplication:(id)arg2 statusBarStyle:(id)arg3;
-(void)workspace:(id)arg1 applicationDidStartLaunching:(id)arg2;
-(void)workspace:(id)arg1 applicationDidFinishLaunching:(id)arg2 withInfo:(id)arg3;
-(void)workspace:(id)arg1 applicationActivated:(id)arg2;
-(void)workspace:(id)arg1 applicationExited:(id)arg2 withInfo:(id)arg3;
-(void)workspace:(id)arg1 applicationSuspended:(id)arg2 withSettings:(id)arg3;
-(void)workspace:(id)arg1 applicationSuspensionSettingsUpdated:(id)arg2 withSettings:(id)arg3;
-(void)workspaceDidSuspend:(id)arg1;
-(void)workspaceDidResume:(id)arg1;
-(void)workspaceWillResume:(id)arg1;
-(void)workspace:(id)arg1 applicationDidFailToLaunch:(id)arg2;
-(void)workspace:(id)arg1 applicationDebugStateChanged:(id)arg2 newState:(BOOL)arg3;
@end
