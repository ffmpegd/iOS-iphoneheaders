/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class WorldClockView, UIView;

@interface WorldClockCollectionCell : UICollectionViewCell {

	WorldClockView* _clockView;
	BOOL _verticalLines;
	BOOL _horizontalLines;
	UIView* _verticalLineView;
	UIView* _horizontalLineView;

}

@property (nonatomic,retain) WorldClockView * clockView;              //@synthesize clockView=_clockView - In the implementation block
+(float)heightForOrientation:(int)arg1 ;
-(id)clockView;
-(void)setClockView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
@end
