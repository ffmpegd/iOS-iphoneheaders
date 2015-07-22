/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface FBPreferences : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _enabledLogNames;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reload;
-(BOOL)isLogEnabled:(id)arg1 ;
-(void)_queue_reload;
-(id)_extractEnabledLoggersFromPreferenceDomain:(id)arg1 ;
-(id)enabledLogNames;
@end
