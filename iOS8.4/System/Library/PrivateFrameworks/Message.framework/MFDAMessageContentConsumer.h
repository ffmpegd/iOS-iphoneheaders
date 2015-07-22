/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAStreamingContentConsumer.h>

@protocol MFCollectingDataConsumer, MFMessageDataConsumerFactory;
@class NSMutableData, DAMailMessage, NSString;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer> {

	int _requestedFormat;
	id<MFCollectingDataConsumer> _dataConsumer;
	id<MFCollectingDataConsumer> _alternatePartConsumer;
	id<MFMessageDataConsumerFactory> _consumerFactory;
	BOOL _triedCreatingAlternatePartConsumer;
	BOOL _didBeginStreaming;
	BOOL _succeeded;
	NSMutableData* _bodyData;
	double _timeOfLastActivity;
	DAMailMessage* _message;

}

@property (assign,nonatomic) int requestedFormat;                                             //@synthesize requestedFormat=_requestedFormat - In the implementation block
@property (nonatomic,retain) id<MFCollectingDataConsumer> dataConsumer;                       //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,retain) id<MFCollectingDataConsumer> alternatePartConsumer;              //@synthesize alternatePartConsumer=_alternatePartConsumer - In the implementation block
@property (nonatomic,retain) id<MFMessageDataConsumerFactory> consumerFactory;                //@synthesize consumerFactory=_consumerFactory - In the implementation block
@property (nonatomic,retain,readonly) DAMailMessage * message;                                //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSMutableData * bodyData;                               //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) double timeOfLastActivity;                                     //@synthesize timeOfLastActivity=_timeOfLastActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)succeeded;
-(NSMutableData *)bodyData;
-(void)dealloc;
-(id)data;
-(DAMailMessage *)message;
-(BOOL)didBeginStreaming;
-(double)timeOfLastActivity;
-(void)setRequestedFormat:(int)arg1 ;
-(void)setConsumerFactory:(id<MFMessageDataConsumerFactory>)arg1 ;
-(id)dataConsumerForPart:(id)arg1 ;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(id<MFMessageDataConsumerFactory>)consumerFactory;
-(void)setAlternatePartConsumer:(id<MFCollectingDataConsumer>)arg1 ;
-(id<MFCollectingDataConsumer>)alternatePartConsumer;
-(int)requestedFormat;
-(void)setDataConsumer:(id<MFCollectingDataConsumer>)arg1 ;
-(id<MFCollectingDataConsumer>)dataConsumer;
@end
