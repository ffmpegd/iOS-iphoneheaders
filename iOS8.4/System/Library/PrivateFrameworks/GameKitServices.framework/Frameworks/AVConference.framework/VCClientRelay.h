/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCClientRelay : NSObject {

	int _vtpSocket;
	int _idsSocket;
	NSObject*<OS_dispatch_source> _idsReadSource;
	NSObject*<OS_dispatch_queue> _idsReadQueue;
	BOOL _isConnectionResultSet;
	tagCONNRESULT* _connectionResult;
	sockaddr_storage _vtpDestination;
	unsigned _vtpDestinationLength;
	OpaqueFigThreadRef _vtpReceiveTID;
	BOOL _stopVTPReceiveThread;

}

@property (readonly) BOOL stopVTPReceiveThread;              //@synthesize stopVTPReceiveThread=_stopVTPReceiveThread - In the implementation block
-(void)dealloc;
-(void)setConnectionResult:(tagCONNRESULT*)arg1 ;
-(int)stopRelay;
-(int)startRelay;
-(id)initWithIDSSocket:(int)arg1 ;
-(int)setupVTPSocket;
-(BOOL)relayIDSPacket;
-(BOOL)relayVTPPacket;
-(BOOL)stopVTPReceiveThread;
@end

