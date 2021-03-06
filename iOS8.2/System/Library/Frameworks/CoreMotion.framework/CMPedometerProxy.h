/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMPedometerProxy : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	int fStepCountFromStart;
	int fStepCountOffset;
	double fDistanceFromStart;
	double fDistanceOffset;
	int fFloorAscendedStart;
	int fFloorAscendedOffset;
	int fFloorDescendedStart;
	int fFloorDescendedOffset;
	double fValidStartDate;
	char fStopUpdates;

}
-(void)_handleQueryResponse:(CLConnectionMessage*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_handleRecordQueryResponse:(CLConnectionMessage*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_stopPedometerUpdates;
-(void)_queryPedometerDataSinceRecord:(int)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_teardown;
@end

