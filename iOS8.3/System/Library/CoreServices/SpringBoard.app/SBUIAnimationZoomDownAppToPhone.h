/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:34 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomDownApp.h>

@interface SBUIAnimationZoomDownAppToPhone : SBUIAnimationZoomDownApp {

	char _usingSuperZoomImplementation;
	char _fromPhoneAppToFaceTimeAppDuringCall;

}
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(char)_waitsForApplicationActivationIfNecessary;
-(id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(char)arg1 endStyleRequest:(id)arg2 endOrientation:(int)arg3 ;
-(void)_cleanupPhonesContextHostView;
-(char)_shouldZoomUsingSuperImplementation;
-(void)_startAnimation;
-(void)dealloc;
@end

