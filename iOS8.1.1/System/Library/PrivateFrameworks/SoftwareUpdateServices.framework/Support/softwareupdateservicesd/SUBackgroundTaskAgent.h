/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class SUManager;

@interface SUBackgroundTaskAgent : NSObject {

	SUManager* _manager;

}
+(id)sharedInstance;
-(void)_initBackgroundTaskAgent;
-(void)_handleBackgroundAgentAutoScan:(const char*)arg1 parameters:(id)arg2 ;
-(void)_handleAutodownloadRetryTask:(id)arg1 ;
-(void)_handleAutodownloadWifiPeriodEndTask:(id)arg1 ;
-(void)_printDetailsForJob:(const char*)arg1 ;
-(void)scheduleDefaultAutoScanTaskIfNecessary;
-(void)scheduleEmergencyAutoScanTaskIfNecessary;
-(void)scheduleAutodownloadRetryTaskIfNecessary;
-(void)scheduleAutodownloadWifiPeriodEndTaskIfNecessary;
-(void)cancelDefaultAutoScanTask;
-(void)cancelEmergencyAutoScanTask;
-(void)cancelAutodownloadRetryTask;
-(void)cancelAutodownloadWifiPeriodEndTask;
-(void)_scheduleAutoScanForTypeIfNecessary:(int)arg1 jobName:(const char*)arg2 ;
-(void)_addAutodownloadPowerRequirementsToRequest:(id)arg1 ;
-(void)scheduleAutodownloadRetryTaskFromDate:(id)arg1 toDate:(id)arg2 policy:(id)arg3 ;
-(void)scheduleAutodownloadWifiPeriodEndTask;
-(void)_scheduleNewBackgroundAgentAutoScanForType:(int)arg1 jobName:(const char*)arg2 previousStartDate:(id)arg3 previousEndDate:(id)arg4 ;
-(void)scheduleAnyTasksIfNecessary;
-(void)cancelAllAutoscanTasks;
-(void)cancelAllAutodownloadTasks;
-(void)dealloc;
-(id)init;
-(void)cancelAllTasks;
@end
