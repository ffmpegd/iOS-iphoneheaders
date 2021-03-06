/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSResetServerProtocolDelegate.h>

@class NSString, MSResetServerProtocol, MSMediaStreamDaemon;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {

	NSString* _personID;
	MSResetServerProtocol* _protocol;
	MSMediaStreamDaemon* _daemon;
	id _selfReference;

}

@property (nonatomic,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) MSMediaStreamDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void).cxx_destruct;
-(void)setDaemon:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(id)daemon;
-(void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)resetServer;
-(id)personID;
@end

