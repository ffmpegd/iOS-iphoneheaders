/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LTEAudioSessionDelegate;
@class LTEConferenceXPCClient, LTEConference, NSDictionary, LTEAudioSessionConfig;

@interface LTEAudioSession : NSObject {

	LTEConferenceXPCClient* connection;
	unsigned long long sessionID;
	id<LTEAudioSessionDelegate> _delegate;
	id weakSelf;
	LTEConference* opaqueSession;
	NSDictionary* _capabilities;
	LTEAudioSessionConfig* _configuration;

}

@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (nonatomic,retain) NSDictionary * capabilities;                                      //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) id<LTEAudioSessionDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) LTEAudioSessionConfig * configuration;                            //@synthesize configuration=_configuration - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<LTEAudioSessionDelegate>)arg1 ;
-(id<LTEAudioSessionDelegate>)delegate;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(void)setConfiguration:(LTEAudioSessionConfig *)arg1 ;
-(void)start;
-(void)stop;
-(LTEAudioSessionConfig *)configuration;
-(void)refreshLoggingParameters;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(NSDictionary *)capabilities;
-(BOOL)isRTCPEnabled;
-(BOOL)isRTCPTimeOutEnabled;
-(BOOL)isRTPTimeOutEnabled;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 isOriginator:(BOOL)arg3 error:(id*)arg4 ;
-(void)registerBlocksForDelegateNotifications;
-(void)prepareForCall;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(void)lteConference:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(id)initWithLocalAddress:(id)arg1 error:(id*)arg2 ;
-(id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 error:(id*)arg3 ;
-(void)configure:(id)arg1 error:(id*)arg2 ;
-(void)sendDTMFDigitString:(id)arg1 withVolume:(unsigned char)arg2 duration:(unsigned short)arg3 interval:(unsigned short)arg4 ;
-(void)startContinuousDTMFWithDigit:(char)arg1 volume:(unsigned char)arg2 ;
-(void)stopContinuousDTMF;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
-(void)lteConference:(id)arg1 didStartSession:(BOOL)arg2 error:(id)arg3 ;
-(void)lteConferenceDidStop:(id)arg1 ;
-(void)lteConferenceDidRTPTimeOut:(id)arg1 ;
-(void)lteConferenceDidRTCPTimeOut:(id)arg1 ;
-(void)lteConference:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
@end

