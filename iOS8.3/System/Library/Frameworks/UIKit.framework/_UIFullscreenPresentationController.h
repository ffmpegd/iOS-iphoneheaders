/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UICurrentContextPresentationController.h>

@class UIView;

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {

	UIView* _counterRotatedView;
	float _counterRotatedAngle;
	CGRect _counterRotatedOriginalBounds;
	int _originalOrientation;
	int _computedOrientation;

}
-(void)dealloc;
-(int)presentationStyle;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_setPresentedViewController:(id)arg1 ;
-(char)shouldRemovePresentersView;
-(char)shouldPresentInFullscreen;
-(char)_shouldRespectDefinesPresentationContext;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(void)transitionDidFinish:(char)arg1 ;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)_removeCounterRotation;
-(char)_invokesDelegatesOnOrientationChange;
-(void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(int)arg3 toOrientation:(int)arg4 force:(char)arg5 ;
@end
