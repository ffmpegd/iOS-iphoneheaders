/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, CDDXPCConnection, CDDebug;

@interface CDPClientConnection : NSObject {

	char _admissionOverride;
	char _admissionResult;
	NSString* _clientName;
	CDDXPCConnection* _connection;
	CDDebug* _debug;

}

@property (readonly) NSString * clientName;                      //@synthesize clientName=_clientName - In the implementation block
@property (assign) char admissionOverride;                       //@synthesize admissionOverride=_admissionOverride - In the implementation block
@property (assign) char admissionResult;                         //@synthesize admissionResult=_admissionResult - In the implementation block
@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
-(CDDebug *)debug;
-(id)init;
-(CDDXPCConnection *)connection;
-(id)messageWithError:(id*)arg1 ;
-(char)sendMessage:(int)arg1 withXPCdictionaryKey:(id)arg2 dictionary:(id)arg3 admissionId:(id)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(id)initWithPluginName:(id)arg1 error:(id*)arg2 ;
-(char)bootstrapWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)triggerWithConditions:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)admissionSignoffForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)activitySignal:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)admissionCheckAndStartedForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)admissionOverride;
-(void)setAdmissionOverride:(char)arg1 ;
-(char)admissionResult;
-(void)setAdmissionResult:(char)arg1 ;
-(NSString *)clientName;
@end

