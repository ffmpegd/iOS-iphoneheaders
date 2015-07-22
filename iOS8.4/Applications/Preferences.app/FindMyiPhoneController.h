/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface FindMyiPhoneController : NSObject {

	NSObject*<OS_dispatch_semaphore> _stateChangeSem;

}
+(id)shared;
-(char)isFindMyiPhoneEnabled;
-(id)preferredFindMyiPhoneAccount;
-(void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)locatorStateDidChange:(id)arg1 ;
-(char)isFindMyiPhoneProvisioned;
-(void)enablePhoneLocatorWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
@end
