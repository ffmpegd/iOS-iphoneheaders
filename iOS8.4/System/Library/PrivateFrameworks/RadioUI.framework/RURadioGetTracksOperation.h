/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ISDialogOperation, MPUserNotification, RadioGetTracksRequest, NSLock, RadioPlaybackContext, SSVPlaybackLease, RadioRequestContext, RadioStation, RadioStationMatchContext;

@interface RURadioGetTracksOperation : NSOperation {

	ISDialogOperation* _dialogOperation;
	MPUserNotification* _explicitUserNotification;
	RadioGetTracksRequest* _getTracksRequest;
	NSLock* _lock;
	unsigned long long _numberOfTracks;
	RadioPlaybackContext* _playbackContext;
	SSVPlaybackLease* _playbackLease;
	RadioRequestContext* _requestContext;
	/*^block*/id _responseBlock;
	BOOL _shouldIncludeStationInResponse;
	RadioStation* _station;
	RadioStationMatchContext* _stationMatchContext;
	long long _reasonType;

}

@property (assign) unsigned long long numberOfTracks; 
@property (copy) RadioPlaybackContext * playbackContext; 
@property (retain) SSVPlaybackLease * playbackLease; 
@property (readonly) long long reasonType;                                      //@synthesize reasonType=_reasonType - In the implementation block
@property (retain) RadioRequestContext * requestContext; 
@property (copy) id responseBlock; 
@property (assign) BOOL shouldIncludeStationInResponse; 
@property (retain) RadioStation * station; 
@property (retain) RadioStationMatchContext * stationMatchContext; 
-(RadioStation *)station;
-(SSVPlaybackLease *)playbackLease;
-(void)setResponseBlock:(id)arg1 ;
-(id)responseBlock;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)main;
-(void)setStation:(RadioStation *)arg1 ;
-(void)setStationMatchContext:(RadioStationMatchContext *)arg1 ;
-(id)initWithReasonType:(long long)arg1 ;
-(void)setNumberOfTracks:(unsigned long long)arg1 ;
-(RadioStationMatchContext *)stationMatchContext;
-(void)setPlaybackContext:(RadioPlaybackContext *)arg1 ;
-(id)_newGetTracksRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3 ;
-(id)_runRequestAllowingHeartbeatDelay:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3 ;
-(id)_runFullGetTracksProcessAllowingNoAvailableVersionDialog:(BOOL)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3 ;
-(id)_heartbeatTokenDataAllowingDelay:(BOOL)arg1 error:(id*)arg2 ;
-(RadioPlaybackContext *)playbackContext;
-(long long)reasonType;
-(void)setPlaybackLease:(SSVPlaybackLease *)arg1 ;
-(RadioRequestContext *)requestContext;
-(void)setRequestContext:(RadioRequestContext *)arg1 ;
-(unsigned long long)numberOfTracks;
-(BOOL)shouldIncludeStationInResponse;
-(void)setShouldIncludeStationInResponse:(BOOL)arg1 ;
@end
