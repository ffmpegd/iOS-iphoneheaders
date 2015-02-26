/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCall.h>
#import <TelephonyUtilities/NSSecureCoding.h>

@class NSString;

@interface TUProxyCall : TUCall <NSSecureCoding> {

	BOOL _conferenced;
	BOOL _outgoing;
	BOOL _voicemail;
	int _status;
	int _callIdentifier;
	int _service;
	double _startTime;
	NSString* _destinationID;
	NSString* _conferenceIdentifier;
	NSString* _callerNameFromNetwork;

}

@property (nonatomic,copy) NSString * destinationID;                             //@synthesize destinationID=_destinationID - In the implementation block
@property (assign,nonatomic) int callIdentifier;                                 //@synthesize callIdentifier=_callIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,getter=isConferenced,nonatomic) BOOL conferenced;              //@synthesize conferenced=_conferenced - In the implementation block
@property (assign,nonatomic) int service;                                        //@synthesize service=_service - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;                    //@synthesize outgoing=_outgoing - In the implementation block
@property (nonatomic,retain) NSString * conferenceIdentifier;                    //@synthesize conferenceIdentifier=_conferenceIdentifier - In the implementation block
@property (assign,getter=isVoicemail,nonatomic) BOOL voicemail;                  //@synthesize voicemail=_voicemail - In the implementation block
@property (nonatomic,copy) NSString * callerNameFromNetwork;                     //@synthesize callerNameFromNetwork=_callerNameFromNetwork - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStartTime:(double)arg1 ;
-(void)disconnect;
-(double)startTime;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)audioCategory;
-(void)setOutgoing:(BOOL)arg1 ;
-(BOOL)isOutgoing;
-(int)service;
-(void)setService:(int)arg1 ;
-(int)supportedModelType;
-(id)audioMode;
-(void)answerWithSourceIdentifier:(id)arg1 ;
-(BOOL)isUplinkMuted;
-(BOOL)setUplinkMuted:(BOOL)arg1 ;
-(BOOL)isDownlinkMuted;
-(BOOL)setDownlinkMuted:(BOOL)arg1 ;
-(BOOL)isConferenced;
-(void)joinConference;
-(void)leaveConference;
-(NSString *)destinationID;
-(NSString *)callerNameFromNetwork;
-(int)callIdentifier;
-(id)callUUID;
-(BOOL)managesAudioInterruptions;
-(id)localFrequency;
-(NSString *)conferenceIdentifier;
-(id)remoteFrequency;
-(BOOL)isHostedOnCurrentDevice;
-(BOOL)isVoicemail;
-(void)setDestinationID:(NSString *)arg1 ;
-(void)setCallIdentifier:(int)arg1 ;
-(void)setConferenceIdentifier:(NSString *)arg1 ;
-(void)setCallerNameFromNetwork:(NSString *)arg1 ;
-(void)updateWithCall:(id)arg1 ;
-(id)initWithDestinationID:(id)arg1 service:(int)arg2 status:(int)arg3 sourceIdentifier:(id)arg4 outgoing:(BOOL)arg5 conferenceIdentifier:(id)arg6 voicemail:(BOOL)arg7 callerNameFromNetwork:(id)arg8 ;
-(id)initWithCall:(id)arg1 ;
-(void)hold;
-(void)unhold;
-(void)playDTMFToneForKey:(unsigned char)arg1 ;
-(BOOL)supportsRelayingCallState;
-(BOOL)supportsRelayingAudioOrVideo;
-(void)setConferenced:(BOOL)arg1 ;
-(void)setVoicemail:(BOOL)arg1 ;
-(double)callDuration;
@end
