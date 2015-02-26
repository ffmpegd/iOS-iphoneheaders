/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCServer.h>

@interface FBSystemServiceServer : BSBaseXPCServer
+(id)sharedInstance;
-(void)dealloc;
-(void)_handleConnect:(id)arg1 forClient:(id)arg2 ;
-(void)_handleUIAppCheckIn:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetBadgeValue:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetBadgeValue:(id)arg1 forClient:(id)arg2 ;
-(void)_handleAppRequestBrightness:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetNextWakeInterval:(id)arg1 forClient:(id)arg2 ;
-(void)_handleIsClientLoggingEnabled:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSystemApplicationBundleIdentifier:(id)arg1 ;
-(void)_handlePidForApplication:(id)arg1 ;
-(void)_handleCanActivateApplication:(id)arg1 ;
-(void)_handleActivateApplication:(id)arg1 ;
-(void)_handleActivateURL:(id)arg1 ;
-(void)_handleActions:(id)arg1 ;
-(void)_handleTerminateApplication:(id)arg1 ;
-(void)_handleTerminateApplicationGroup:(id)arg1 ;
-(void)_handleShutdown:(id)arg1 forClient:(id)arg2 ;
-(id)_stringFromMessage:(id)arg1 key:(char*)arg2 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
-(void)queue_clientAdded:(id)arg1 ;
-(void)queue_clientRemoved:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(BOOL)ping;
@end
