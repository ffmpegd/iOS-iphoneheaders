/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/UserEventPlugins/MobileBackupUEA.plugin/MobileBackupUEA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackupUEA/MBManagerDelegate.h>

@protocol OS_dispatch_queue;
@class PCPersistentTimer, NSObject, MBManager;

@interface MBUEAPlugin : NSObject <MBManagerDelegate> {

	void* _reachabilityRef;
	int _screenLockedToken;
	int _powerToken;
	int _profilesToken;
	int _keybagToken;
	int _appleAccountToken;
	PCPersistentTimer* _pcTimer;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _accountEventQueue;
	BOOL _isPowered;
	BOOL _isScreenLocked;
	BOOL _isOnWiFi;
	BOOL _ignorePowerState;
	BOOL _enabled;
	BOOL _wakeBackupOnDisconnect;
	MBManager* _manager;

}

@property (assign) BOOL isPowered; 
@property (assign) BOOL isScreenLocked; 
@property (assign) BOOL isOnWiFi; 
@property (assign) BOOL enabled; 
@property (assign) BOOL wakeBackupOnDisconnect;              //@synthesize wakeBackupOnDisconnect=_wakeBackupOnDisconnect - In the implementation block
-(BOOL)wakeBackupOnDisconnect;
-(void)setWakeBackupOnDisconnect:(BOOL)arg1 ;
-(void)setIsScreenLocked:(BOOL)arg1 ;
-(id)initWithEventQueue:(id)arg1 ;
-(void)notifyDaemonOfAccountChange;
-(void)notifyDaemonThatKeyBagIsLocking;
-(void)setIsPowered:(BOOL)arg1 ;
-(void)_updatePCTimer;
-(void)setIsOnWiFi:(BOOL)arg1 ;
-(void)notifyDaemonThatKeyBagIsUnlocked;
-(void)_stateDidChange;
-(BOOL)isPowered;
-(void)_pcTimerFired;
-(BOOL)isOnWiFi;
-(void)_updateEnabledState;
-(void)cancel;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 ;
-(void)managerDidFinishBackup:(id)arg1 ;
-(void)managerDidFinishRestore:(id)arg1 ;
-(void)managerDidCancelRestore:(id)arg1 ;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(BOOL)isScreenLocked;
-(void)_install;
@end

