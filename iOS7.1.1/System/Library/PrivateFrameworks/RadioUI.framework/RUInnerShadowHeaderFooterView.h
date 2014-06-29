/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView, UIColor;

@interface RUInnerShadowHeaderFooterView : UITableViewHeaderFooterView {

	UIView* _shadowBackgroundView;
	UIView* _shadowView;
	UIEdgeInsets _shadowEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets shadowEdgeInsets;                //@synthesize shadowEdgeInsets=_shadowEdgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * shadowBackgroundColor; 
+(double)defaultInnerShadowRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setShadowBackgroundColor:(id)arg1 ;
-(void)setShadowEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)shadowBackgroundColor;
-(UIEdgeInsets)shadowEdgeInsets;
@end
