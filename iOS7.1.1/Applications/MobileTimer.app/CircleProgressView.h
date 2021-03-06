/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIImageView.h>

@class CAShapeLayer;

@interface CircleProgressView : UIImageView {

	CAShapeLayer* _maskLayer;
	float _progress;
	float _animateNextPathChange;

}

@property (assign,nonatomic) float progress;                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) float animateNextPathChange;              //@synthesize animateNextPathChange=_animateNextPathChange - In the implementation block
-(void)setMaskPath:(CGPathRef)arg1 ;
-(float)animateNextPathChange;
-(void)setAnimateNextPathChange:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
@end

