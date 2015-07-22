/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCController.h>
#import <GameController/NSSecureCoding.h>

@protocol GCNamedProfile;
@class NSString;

@interface _GCController : GCController <NSSecureCoding> {

	/*^block*/id _controllerPausedHandler;
	NSString* _vendorName;
	long long _playerIndex;
	id<GCNamedProfile> _profile;
	IOHIDDeviceRef _deviceRef;
	unsigned _service;
	unsigned long long _deviceHash;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)deviceHash;
-(/*^block*/id)controllerPausedHandler;
-(id)motion;
-(void)setPlayerIndex:(long long)arg1 ;
-(void)setControllerPausedHandler:(/*^block*/id)arg1 ;
-(BOOL)isAttachedToDevice;
-(long long)playerIndex;
-(id)gamepad;
-(id)extendedGamepad;
-(id)initWithDeviceRef:(IOHIDDeviceRef)arg1 ;
-(void)clearDeviceRef;
-(IOHIDDeviceRef)deviceRef;
-(id)vendorName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)service;
-(id)initWithProfile:(id)arg1 ;
-(id)profile;
-(void)setProfile:(id)arg1 ;
@end
