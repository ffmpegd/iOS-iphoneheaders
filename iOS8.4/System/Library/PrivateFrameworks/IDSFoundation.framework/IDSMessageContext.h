/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSNumber;

@interface IDSMessageContext : NSObject {

	NSMutableDictionary* _dict;
	id _boostContext;

}

@property (nonatomic,copy) NSString * outgoingResponseIdentifier; 
@property (nonatomic,copy) NSString * incomingResponseIdentifier; 
@property (assign,nonatomic) BOOL expectsPeerResponse; 
@property (assign,nonatomic) BOOL wantsAppAck; 
@property (nonatomic,copy) NSString * storageGuid; 
@property (assign,nonatomic) NSNumber * originalCommand; 
@property (assign,nonatomic) NSNumber * broadcastTime; 
@property (assign,nonatomic) NSNumber * priority; 
@property (nonatomic,retain) id boostContext; 
@property (assign,nonatomic) long long broadcastID; 
-(id)nfmDescription;
-(id)pbDescription;
-(id)npkDescription;
-(void)dealloc;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSNumber *)priority;
-(BOOL)expectsPeerResponse;
-(NSString *)outgoingResponseIdentifier;
-(NSString *)incomingResponseIdentifier;
-(void)setWantsAppAck:(BOOL)arg1 ;
-(void)setExpectsPeerResponse:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 boostContext:(id)arg2 ;
-(NSString *)storageGuid;
-(NSNumber *)broadcastTime;
-(long long)broadcastID;
-(BOOL)wantsAppAck;
-(void)setBoostContext:(id)arg1 ;
-(id)boostContext;
-(void)setOutgoingResponseIdentifier:(NSString *)arg1 ;
-(void)setIncomingResponseIdentifier:(NSString *)arg1 ;
-(void)setStorageGuid:(NSString *)arg1 ;
-(void)setOriginalCommand:(NSNumber *)arg1 ;
-(NSNumber *)originalCommand;
-(void)setBroadcastTime:(NSNumber *)arg1 ;
-(void)setBroadcastID:(long long)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
