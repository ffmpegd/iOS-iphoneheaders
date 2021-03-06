/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class NSTimer;

@interface SBSoftwareUpdateForcedInstallAlertItem : SBBaseSoftwareUpdateAlertItem {

	NSTimer* _timer;
	unsigned _timeLeftUntilInstall;
	BOOL _delayOnDismissForNonUserAction;
	BOOL _delayAfterNextUnlock;

}

@property (assign,nonatomic) BOOL delayOnDismissForNonUserAction;              //@synthesize delayOnDismissForNonUserAction=_delayOnDismissForNonUserAction - In the implementation block
@property (assign,nonatomic) BOOL delayAfterNextUnlock;                        //@synthesize delayAfterNextUnlock=_delayAfterNextUnlock - In the implementation block
-(void)setDelayOnDismissForNonUserAction:(BOOL)arg1 ;
-(void)_installUpdate;
-(void)updateBodyText;
-(void)setDelayAfterNextUnlock:(BOOL)arg1 ;
-(BOOL)delayOnDismissForNonUserAction;
-(BOOL)delayAfterNextUnlock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)_timerFired;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)undimsScreen;
-(id)lockLabel;
-(id)shortLockLabel;
-(void)performUnlockAction;
-(void)willDeactivateForReason:(int)arg1 ;
-(BOOL)dismissOnLock;
@end

