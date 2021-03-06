/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class ML3DatabaseConnection, NSObject, NSUUID, NSXPCConnection;

@interface MLActiveTransaction : NSObject {

	ML3DatabaseConnection* _connection;
	NSObject<OS_dispatch_semaphore>* _connectionSemaphore;
	unsigned _transactionTerminationRule;
	BOOL _inUseByOperation;
	BOOL _startedByOperation;
	BOOL _connectionInUse;
	NSUUID* _identifier;
	NSXPCConnection* _xpcConnection;
	double _lastUsedTime;

}

@property (nonatomic,retain) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) double lastUsedTime;                          //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) BOOL inUseByOperation;                        //@synthesize inUseByOperation=_inUseByOperation - In the implementation block
@property (assign,nonatomic) BOOL startedByOperation;                      //@synthesize startedByOperation=_startedByOperation - In the implementation block
@property (nonatomic,readonly) BOOL connectionInUse;                       //@synthesize connectionInUse=_connectionInUse - In the implementation block
-(id)init;
-(id)description;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)useConnectionWithBlock:(/*^block*/ id)arg1 ;
-(void)setStartedByOperation:(BOOL)arg1 ;
-(void)updateLastUsed;
-(void)setInUseByOperation:(BOOL)arg1 ;
-(id)xpcConnection;
-(id)initWithConnection:(id)arg1 identifier:(id)arg2 xpcConnection:(id)arg3 ;
-(id)relinquishConnection:(BOOL)arg1 ;
-(double)lastUsedTime;
-(BOOL)connectionInUse;
-(BOOL)inUseByOperation;
-(unsigned)_transactionTerminationRule;
-(void)_setTransactionTerminationRule:(unsigned)arg1 ;
-(id)checkoutTransactionConnection;
-(void)checkInTransactionConnection:(id)arg1 ;
-(void)setXpcConnection:(id)arg1 ;
-(void)setLastUsedTime:(double)arg1 ;
-(BOOL)startedByOperation;
-(void).cxx_destruct;
@end

