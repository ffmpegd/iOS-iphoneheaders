/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>
#import <AppLaunchStats/DuetSaveAndRestore.h>

@class AppLaunchStatsState, NSDate, NSRunLoop, PCPersistentTimer;

@interface AppLaunchStatsScheduler : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	bool usefulDate;
	/*^block*/ id theCallback;
	AppLaunchStatsState* aplsState;
	int timeZoneSecondsFromGMT;
	NSDate* fireWakeupDate;
	NSDate* startDate;
	NSRunLoop* aplsRunloop;
	PCPersistentTimer* pcpTimer;

}
-(void)timerFired:(id)arg1 ;
-(void)save:(id)arg1 ;
-(void)logAll:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)restore:(id)arg1 ;
-(void)checkTimeZone;
-(void)programTimer;
-(id)init:(id)arg1 withRunLoop:(id)arg2 withCallback:(/*^block*/ id)arg3 ;
-(void)generateFireDates;
-(void).cxx_destruct;
@end
