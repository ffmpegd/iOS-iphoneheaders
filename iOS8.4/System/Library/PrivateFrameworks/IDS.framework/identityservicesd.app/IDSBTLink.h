/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/NSStreamDelegate.h>

@protocol IDSLinkDelegate;
@class NSString, CBScalablePipe;

@interface IDSBTLink : NSObject <IDSLink, NSStreamDelegate> {

	NSString* _deviceID;
	unsigned long long _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;
	NSString* _linkID;
	CBScalablePipe* _pipe;
	int _socket;
	unsigned _totalReceivedRawBytes;
	SCD_Struct_ID13* _currentIncomingPacket;
	SCD_Struct_ID13* _currentOutgoingPacket;
	BOOL _resyncing;
	double _lastResyncTime;
	double _lastDownstreamDumpLogTime;
	double _lastUpstreamDumpLogTime;
	BOOL _writeSuspended;
	BOOL _remoteHostAwake;
	BOOL _postedFirstHostStateChange;
	BOOL _linkSuspended;
	id<IDSLinkDelegate> _delegate;

}

@property (readonly) NSString * linkID;                                            //@synthesize linkID=_linkID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead; 
@property (assign) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)copyLinkStatsDict;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID13*)arg1 toDeviceID:(id)arg2 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(NSString *)linkID;
-(void)_processIncomingPacket;
-(BOOL)isLinkSuspended;
-(void)suspendLink:(BOOL)arg1 ;
-(void)remoteDetectedCorruption;
-(id)initWithPipe:(id)arg1 withIdentifier:(id)arg2 deviceID:(id)arg3 ;
-(void)_dumpLogs:(double)arg1 isDownstream:(BOOL)arg2 ;
-(void)_processOutgoingPacket;
-(void)_localDetectedCorruption;
-(void)dealloc;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(id<IDSLinkDelegate>)delegate;
-(unsigned long long)state;
-(void)invalidate;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
@end
