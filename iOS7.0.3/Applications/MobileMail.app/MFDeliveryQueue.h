/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFDeliveryDelegate.h>
#import <Message/MFContentProtectionObserver.h>

@class MFMailMessageStore, NSMutableDictionary;

@interface MFDeliveryQueue : NSObject <MFDeliveryDelegate, MFContentProtectionObserver> {

	int _state;
	unsigned _messagesTotal;
	unsigned _messagesFromActiveAccounts;
	unsigned _messageWithUIFocus;
	MFMailMessageStore* _outboxStore;
	NSMutableDictionary* _lastErrorForMessage;
	unsigned _resetDeliveryQueueWhenDoneWithCurrentMessage : 1;
	unsigned _suspendRequested : 1;
	unsigned _isReachable : 1;
	unsigned _deviceUnlockedAfterBoot : 1;

}
+(id)sharedDeliveryQueue;
-(void)processQueue;
-(void)processQueueAndPlaySoundOnSuccess:(BOOL)arg1 forceAll:(BOOL)arg2 ;
-(void)_messagesAdded:(id)arg1 ;
-(id)_sortedMessages;
-(id)lastErrorForMessage:(id)arg1 ;
-(int)deliverSynchronously:(id)arg1 ;
-(id)_outboxStore;
-(id)_messagesInProgress;
-(void)_mailAccountsChanged:(id)arg1 ;
-(void)_focusedMessageDidChange:(id)arg1 ;
-(void)_updateCounts;
-(void)_processQueueWithOptions:(id)arg1 ;
-(unsigned)_append:(id)arg1 newMessages:(id)arg2 ;
-(void)_setDeliveryFlag:(id)arg1 state:(BOOL)arg2 ;
-(void)_updateDeliveryInfoFromResult:(id)arg1 forMessage:(id)arg2 ;
-(void)_setErrorForMessageLibraryID:(id)arg1 error:(id)arg2 ;
-(void)_updateStateFile:(BOOL)arg1 ;
-(void)_sendUnsentCountChangedNotification:(int)arg1 activeAccountsOnly:(int)arg2 ;
-(void)_sendProcessingStartedNotification;
-(BOOL)_shouldSend:(id)arg1 options:(id)arg2 ;
-(void)_setErrorForMessage:(id)arg1 error:(id)arg2 ;
-(void)_sendProcessingFinishedNotification:(int)arg1 failed:(int)arg2 playSound:(BOOL)arg3 ;
-(BOOL)isReady;
-(void)dealloc;
-(id)init;
-(BOOL)isSuspended;
-(void)suspend;
-(void)resume;
-(id)copyDiagnosticInformation;
-(void)setPercentDone:(double)arg1 ;
-(unsigned)append:(id)arg1 ;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_flagsChanged:(id)arg1 ;
-(BOOL)isProcessing;
@end

