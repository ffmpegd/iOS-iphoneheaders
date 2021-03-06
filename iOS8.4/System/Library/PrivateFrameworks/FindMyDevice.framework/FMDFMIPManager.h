/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface FMDFMIPManager : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionCreationQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcConnectionCreationQueue;              //@synthesize xpcConnectionCreationQueue=_xpcConnectionCreationQueue - In the implementation block
+(id)sharedInstance;
-(BOOL)_quickFetchFMIPEnabledstate;
-(BOOL)lostModeIsActive;
-(void)initiateLostModeExitAuthWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)fmipStateWithCompletion:(/*^block*/id)arg1 ;
-(id)enableFMIPInContext:(unsigned long long)arg1 ;
-(id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned long long)arg2 ;
-(void)_destroyXPCConnection;
-(void)_checkCallingOSUser;
-(id)currentXPCConnection;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(id)lostModeInfo;
-(void)disableLostMode;
-(void)deviceActivationDidSucceed;
-(BOOL)lockdownShouldDisableDeviceRestore;
-(BOOL)lockdownShouldDisableDevicePairing;
-(id)fmipDeviceId;
-(id)fmipAccount;
-(void)didChangeFMIPAccountInfo:(id)arg1 ;
-(void)enableActivationLockWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsLostModeExitAuth;
-(void)didReceiveLostModeExitAuthToken:(id)arg1 ;
-(void)lowBatteryLocateEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)setLowBatteryLocateEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)xpcConnectionCreationQueue;
-(void)setXpcConnectionCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)enableLostModeWithInfo:(id)arg1 ;
-(void)isActivationLockedWithCompletion:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

