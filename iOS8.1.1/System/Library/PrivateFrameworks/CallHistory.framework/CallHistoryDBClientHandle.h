/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {

	CallHistoryDBHandle* dbStoreHandle;
	id _observerCallRecordRef;
	id _observerCallTimersRef;

}

@property (nonatomic,readonly) CallHistoryDBHandle * dbStoreHandle; 
-(void)dealloc;
-(id)init;
-(BOOL)deleteAll:(id*)arg1 ;
-(void)unRegisterForNotifications;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 ;
-(id)timerIncoming;
-(id)timerOutgoing;
-(id)timerLifetime;
-(void)resetTimers;
-(BOOL)createCallRecord:(id)arg1 ;
-(BOOL)createCallRecords:(id)arg1 ;
-(id)fetchAll;
-(id)fetchObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithPredicate:(id)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 ;
-(id)fetchObjectsWithUniqueIds:(id)arg1 ;
-(id)fetchAllNoLimit;
-(id)updateCallRecords:(id)arg1 ;
-(id)updateAllCallRecords:(id)arg1 ;
-(id)fetchWithCallTypes:(unsigned)arg1 ;
-(id)timerLastReset;
-(void)parseCallStatus_sync:(unsigned)arg1 isAnswered:(BOOL*)arg2 isOriginated:(BOOL*)arg3 ;
-(unsigned)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3 ;
-(void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2 ;
-(void)handleCallRecordSave_sync:(id)arg1 ;
-(void)handleCallTimersSave_sync:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)createCallRecord:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2 ;
-(BOOL)createCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateCallRecords:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateCallRecords_sync:(id)arg1 error:(id*)arg2 save:(BOOL)arg3 ;
-(id)updateAllCallRecords:(id)arg1 error:(id*)arg2 ;
-(id)updateAllCallRecords_sync:(id)arg1 error:(id*)arg2 ;
-(BOOL)willHandleNotification_sync:(id)arg1 ;
-(BOOL)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2 ;
-(BOOL)saveDatabase:(id*)arg1 ;
-(CallHistoryDBHandle *)dbStoreHandle;
-(void)registerForNotifications;
-(BOOL)deleteAll;
@end
