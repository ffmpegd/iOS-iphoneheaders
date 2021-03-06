/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLStoreLogger.bundle/PLStoreLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>
#import <PLStoreLogger/SSEventMonitorDelegate.h>

@class SSEventMonitor, NSMutableDictionary;

@interface PLStoreLogger : PLLogger <SSEventMonitorDelegate> {

	SSEventMonitor* monitor;
	NSMutableDictionary* currentDownloads;

}
-(void)logAssetDownloadWithState:(id)arg1 info:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)log;
-(void)eventMonitor:(id)arg1 receivedEventWithName:(id)arg2 userInfo:(id)arg3 ;
@end

