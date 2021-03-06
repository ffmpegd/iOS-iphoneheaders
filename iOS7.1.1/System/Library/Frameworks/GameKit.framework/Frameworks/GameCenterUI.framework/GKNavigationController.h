/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UIViewControllerRestoration.h>

@class NSMutableArray;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration> {

	NSMutableArray* _deferredTransitions;

}

@property (nonatomic,retain) NSMutableArray * deferredTransitions;              //@synthesize deferredTransitions=_deferredTransitions - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)setupGKNavigationController;
-(void)setDeferredTransitions:(id)arg1 ;
-(void)_performDeferredTransition;
-(id)deferredTransitions;
-(void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(bool)arg3 ;
-(void)dealloc;
-(id)init;
-(id)popViewControllerAnimated:(bool)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(bool)arg2 ;
-(id)popToViewController:(id)arg1 animated:(bool)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(bool)arg2 ;
-(void)willShowViewController:(id)arg1 animated:(bool)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)popToRootViewControllerAnimated:(bool)arg1 ;
@end

