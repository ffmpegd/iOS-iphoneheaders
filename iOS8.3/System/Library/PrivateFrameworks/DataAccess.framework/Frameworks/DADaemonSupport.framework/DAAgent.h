/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:23:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DAAccount, DATrustHandler;

@interface DAAgent : NSObject {

	char _isMonitoring;
	char _syncWhenReachable;
	char _isWaitingForPassword;
	DAAccount* _account;
	/*^block*/id _networkReachableBlock;
	double _lastRetryTimeout;

}

@property (assign,nonatomic) char isMonitoring;                            //@synthesize isMonitoring=_isMonitoring - In the implementation block
@property (nonatomic,retain) DAAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
@property (assign,nonatomic) double lastRetryTimeout;                      //@synthesize lastRetryTimeout=_lastRetryTimeout - In the implementation block
@property (assign,nonatomic) char syncWhenReachable;                       //@synthesize syncWhenReachable=_syncWhenReachable - In the implementation block
@property (nonatomic,copy) id networkReachableBlock;                       //@synthesize networkReachableBlock=_networkReachableBlock - In the implementation block
@property (assign,nonatomic) char isWaitingForPassword;                    //@synthesize isWaitingForPassword=_isWaitingForPassword - In the implementation block
-(void)startMonitoring;
-(char)isMonitoring;
-(id)initWithAccount:(id)arg1 ;
-(void)shutdown;
-(DAAccount *)account;
-(void)setAccount:(DAAccount *)arg1 ;
-(DATrustHandler *)trustHandler;
-(int)preferredEventDaysToSync;
-(int)preferredToDoDaysToSync;
-(char)syncWhenReachable;
-(id)networkReachableBlock;
-(void)setNetworkReachableBlock:(id)arg1 ;
-(double)lastRetryTimeout;
-(void)setLastRetryTimeout:(double)arg1 ;
-(char)isWaitingForPassword;
-(void)setIsWaitingForPassword:(char)arg1 ;
-(void)setSyncWhenReachable:(char)arg1 ;
-(void)addObserverForPreferredDaysToSyncChangeNotifications;
-(void)removeObserverForPreferredDaysToSyncChangeNotifications;
-(void)setIsMonitoring:(char)arg1 ;
-(void)observeReachabilityWithBlock:(/*^block*/id)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(char)arg1 isUserRequested:(char)arg2 ;
-(void)stopObservingReachability;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(char)arg3 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)stateString;
-(void)_reachabilityChanged:(id)arg1 ;
@end

