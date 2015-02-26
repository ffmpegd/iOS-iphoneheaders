/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCGestureEvent.h>

@class AXEventRepresentation;

@interface VOTGestureEvent : SCRCGestureEvent {

	AXEventRepresentation* _eventRepresentation;

}

@property (nonatomic,retain) AXEventRepresentation * eventRepresentation;              //@synthesize eventRepresentation=_eventRepresentation - In the implementation block
+(id)gestureEventWithEventRepresentation:(id)arg1 ;
-(id)_initWithDeviceIdentifier:(unsigned long long)arg1 andEventRepresentation:(id)arg2 ;
-(void)setEventRepresentation:(AXEventRepresentation *)arg1 ;
-(AXEventRepresentation *)eventRepresentation;
-(void)_addFingerInformation;
-(BOOL)isLiftEvent;
-(BOOL)isDownEvent;
-(BOOL)didFallThruToDevice;
-(void)dealloc;
-(id)description;
-(BOOL)isCancelEvent;
@end
