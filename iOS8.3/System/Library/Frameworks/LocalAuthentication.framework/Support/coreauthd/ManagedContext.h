/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:55:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <coreauthd/coreauthd-Structs.h>
#import <coreauthd/LAContextXPC.h>
#import <coreauthd/LAUIDelegate.h>

@protocol LAUIDelegate;
@class NSDictionary, NSMutableArray, AuthenticationInProgress, NSData;

@interface ManagedContext : NSObject <LAContextXPC, LAUIDelegate> {

	ACMHandleRef _acmContext;
	NSDictionary* _eventProcessing;
	NSMutableArray* _callerInfoRecords;
	NSDictionary* _resultInfo;
	/*^block*/id _evaluatePolicyReply;
	id<LAUIDelegate> _uiDelegate;
	AuthenticationInProgress* _authenticationInProgress;
	NSDictionary* _constInfo;
	NSDictionary* _constCreatorInfo;
	NSData* _externalizedACMContext;

}

@property (readonly) NSDictionary * constInfo;                     //@synthesize constInfo=_constInfo - In the implementation block
@property (readonly) NSDictionary * constCreatorInfo;              //@synthesize constCreatorInfo=_constCreatorInfo - In the implementation block
@property (readonly) NSData * externalizedACMContext;              //@synthesize externalizedACMContext=_externalizedACMContext - In the implementation block
+(int)policyFromString:(id)arg1 error:(id*)arg2 ;
+(int)_getPolicy:(CFDictionaryRef)arg1 withError:(id*)arg2 ;
-(void)evaluatePolicy:(int)arg1 options:(id)arg2 barrier:(/*^block*/id)arg3 hasSPIEntitlement:(char)arg4 hasBgndEntitlement:(char)arg5 reply:(/*^block*/id)arg6 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 barrier:(/*^block*/id)arg4 hasSPIEntitlement:(char)arg5 hasBgndEntitlement:(char)arg6 reply:(/*^block*/id)arg7 ;
-(void)validateACL:(id)arg1 hasSPIEntitlement:(char)arg2 hasBgndEntitlement:(char)arg3 reply:(/*^block*/id)arg4 ;
-(NSData *)externalizedACMContext;
-(id)callerInfoRecords;
-(void)addCallerInfoRecord:(id)arg1 ;
-(id)initWithUiDelegate:(id)arg1 callerInfoRecord:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)constInfo;
-(char)_createACMContextWithError:(id*)arg1 ;
-(id)_createConstCreatorInfo:(id)arg1 ;
-(id)_createConstInfo;
-(void)_createACMContextWithReply:(/*^block*/id)arg1 ;
-(char*)_acmPolicyForPolicy:(int)arg1 ;
-(char)_isPublicPolicy:(int)arg1 options:(id)arg2 ;
-(id)_createInternalInfoWithPolicy:(int)arg1 policyOptions:(id)arg2 hasBgndEntitlement:(char)arg3 ;
-(void)_handleAcmRequirement:(const ACMRequirementRef)arg1 policy:(int)arg2 internalInfo:(id)arg3 barrier:(/*^block*/id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_replyToEvaluatePolicy:(int)arg1 internalInfo:(id)arg2 mechanism:(id)arg3 error:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_finishedRunningMechanism:(id)arg1 policy:(int)arg2 result:(id)arg3 error:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_validateACL:(id)arg1 operation:(id)arg2 hasSPIEntitlement:(char)arg3 hasBgndEntitlement:(char)arg4 reply:(/*^block*/id)arg5 ;
-(NSDictionary *)constCreatorInfo;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)creatorName:(/*^block*/id)arg1 ;
-(void)evaluatePolicy:(int)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)failProcessedEvent:(int)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)event:(int)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
@end
