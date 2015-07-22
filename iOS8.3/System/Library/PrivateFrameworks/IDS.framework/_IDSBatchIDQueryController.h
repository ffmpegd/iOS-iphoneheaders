/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:03:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSIDQueryControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, CUTWeakReference, NSObject, NSArray, NSMutableArray, NSTimer, NSDate;

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate> {

	NSString* _serviceName;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _listenerID;
	NSArray* _destinations;
	NSMutableArray* _destinationsToQuery;
	NSTimer* _nextQueryTimer;
	NSDate* _timeOfDeath;
	int _numberOfQueriesDone;
	char _isDead;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)setDestinations:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidateNextQueryTimer;
-(void)_nextQuery:(id)arg1 ;
-(void)_scheduleNextQuery:(double)arg1 ;
@end
