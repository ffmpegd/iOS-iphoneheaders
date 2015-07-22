/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MusicEntityPlayabilityController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _cellularNetworkAllowed;
	BOOL _hasValidNetworkType;
	long long _networkType;

}
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEntityValueContextPlayable:(id)arg1 ;
-(void)_fairPlaySubscriptionStatusDidChangeNotification:(id)arg1 ;
-(long long)_networkType;
-(BOOL)_isCellularNetworkAllowed;
@end
