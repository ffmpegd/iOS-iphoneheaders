/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface STTwoPartLabel : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;

}

@property (nonatomic,readonly) UILabel * primaryLabel;                //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;              //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
+(id)defaultFormatForSecondaryLabel;
+(id)defaultTextForPrimaryLabel;
+(id)defaultTextForSecondaryLabel;
+(char)shouldFlipLabels;
-(UILabel *)secondaryLabel;
-(void)setFrame:(CGRect)arg1 primaryFont:(id)arg2 secondaryFont:(id)arg3 inset:(CGSize)arg4 ;
-(UILabel *)primaryLabel;
@end
