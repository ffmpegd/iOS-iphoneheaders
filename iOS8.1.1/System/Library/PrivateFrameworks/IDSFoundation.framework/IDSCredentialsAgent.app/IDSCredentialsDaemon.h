/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSCredentialsAgent.app/IDSCredentialsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSCredentialsDaemon : NSObject {

	NSMutableDictionary* _uniqueIDToCredentialLoaderMap;
	void* _transaction;
	id _stateMonitor;

}
+(id)sharedInstance;
-(void)_pidSuspended:(int)arg1 ;
-(void)_terminate;
-(void)logState;
-(void)addCredentialLoader:(id)arg1 ;
-(void)removeCredentialLoaderForUniqueID:(id)arg1 ;
-(id)credentialLoaderForUniqueID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)shutdown;
@end

