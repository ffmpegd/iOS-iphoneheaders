/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/XPCServices/com.apple.voicetrigger.voicetriggerservice.xpc/com.apple.voicetrigger.voicetriggerservice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class VTServiceClient;

@interface VTFeedback : NSObject {

	VTServiceClient* _service;

}
+(id)sharedFeedback;
-(void)feedbackWithReason:(unsigned char)arg1 atTime:(double)arg2 ;
-(void)feedbackWithReason:(unsigned char)arg1 ;
-(void)feedbackEventSucceeded;
-(void)feedbackEventWasCancelled;
-(void)feedbackEventFailedWithReason:(unsigned char)arg1 ;
@end

