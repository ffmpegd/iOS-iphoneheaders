/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface SUScriptTelephony : SUScriptObject {

	NSObject*<OS_dispatch_queue> _telephonyQueue;
	CTServerConnectionRef _telephonyServer;

}

@property (getter=isCellularRoaming,nonatomic,readonly) id cellularRoaming; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@property (nonatomic,readonly) NSString * operatorName; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * providerName; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)phoneNumber;
-(NSString *)providerName;
-(NSString *)operatorName;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)formattedPhoneNumber:(id)arg1 ;
-(id)isCellularRoaming;
-(NSString *)mobileCountryCode;
-(NSString *)mobileNetworkCode;
-(NSString *)countryCode;
-(id)attributeKeys;
-(id)sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
@end
