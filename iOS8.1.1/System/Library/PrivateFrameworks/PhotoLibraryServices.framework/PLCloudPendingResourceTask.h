/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPLResourceTransferTask, NSMutableDictionary, NSDate;

@interface PLCloudPendingResourceTask : NSObject {

	CPLResourceTransferTask* _transferTask;
	NSMutableDictionary* _pendingTasks;
	NSDate* _lastUpdated;
	BOOL _completed;

}
-(void)dealloc;
-(void)setTransferTask:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportProgress:(float)arg1 ;
-(void)reportCompletionWithError:(id)arg1 ;
-(id)taskIDs;
-(void)keepAlive;
-(void)cancelAllTask;
-(id)lastUpdated;
@end
