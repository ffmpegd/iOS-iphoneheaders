/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class MCProfileServiceServer;

@interface MCBTAJobManager : NSObject {

	int _profileChangeNotificationToken;
	MCProfileServiceServer* _server;
	id _activationLockGenerationObserver;

}

@property (assign,nonatomic,__weak) MCProfileServiceServer * server;              //@synthesize server=_server - In the implementation block
@property (assign,nonatomic) int profileChangeNotificationToken;                  //@synthesize profileChangeNotificationToken=_profileChangeNotificationToken - In the implementation block
@property (nonatomic,retain) id activationLockGenerationObserver;                 //@synthesize activationLockGenerationObserver=_activationLockGenerationObserver - In the implementation block
-(void)rescheduleProfileJanitorJob;
-(void)rescheduleActivationLockCleanupJob;
-(int)profileChangeNotificationToken;
-(id)activationLockGenerationObserver;
-(void)setProfileChangeNotificationToken:(int)arg1 ;
-(void)setActivationLockGenerationObserver:(id)arg1 ;
-(MCProfileServiceServer *)server;
-(void)start;
-(void)stop;
-(void)setServer:(MCProfileServiceServer *)arg1 ;
@end
