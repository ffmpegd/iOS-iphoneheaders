/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface ML3DispatchQueue : NSObject {

	NSString* _identifier;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) bool isOnQueue; 
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
+(id)currentQueueIdentifier;
+(id)serialQueueWithIdentifierPrefix:(id)arg1 ;
-(id)init;
-(id)identifier;
-(void).cxx_destruct;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 serial:(bool)arg2 ;
-(bool)isOnQueue;
-(void)dispatchSyncOrInvokeImmediately:(/*^block*/ id)arg1 ;
-(void)dispatchSync:(/*^block*/ id)arg1 ;
-(void)dispatchAsyncOrInvokeImmediately:(/*^block*/ id)arg1 ;
-(void)dispatchAsync:(/*^block*/ id)arg1 ;
@end
