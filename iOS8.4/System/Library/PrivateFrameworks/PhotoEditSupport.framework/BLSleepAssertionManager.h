/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface BLSleepAssertionManager : NSObject {

	NSObject*<OS_dispatch_semaphore> m_assertionSemaphore;
	long long m_assertionCount;
	BOOL m_waiting;
	int m_assertionLock;
	long long m_idleCount;
	int m_idleLock;

}
+(id)sharedInstance;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(void)takeSleepAssertion;
-(void)releaseSleepAssertion;
-(void)waitForOutstandingSleepAssertions;
-(void)takeIdleAssertion;
-(void)releaseIdleAssertion;
-(oneway void)release;
-(id)hidden;
@end
