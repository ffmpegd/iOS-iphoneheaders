/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:35:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UITextField, ABRepeatingGradientSeparatorView;

@interface ABSplitTextFieldCell : UITableViewCell {

	UITextField* _textFieldLeft;
	UITextField* _textFieldRight;
	ABRepeatingGradientSeparatorView* _separator;

}

@property (nonatomic,retain) UITextField * textFieldLeft;                               //@synthesize textFieldLeft=_textFieldLeft - In the implementation block
@property (nonatomic,retain) UITextField * textFieldRight;                              //@synthesize textFieldRight=_textFieldRight - In the implementation block
@property (nonatomic,retain) ABRepeatingGradientSeparatorView * separator;              //@synthesize separator=_separator - In the implementation block
+(char)requiresConstraintBasedLayout;
-(UITextField *)textFieldLeft;
-(UITextField *)textFieldRight;
-(void)setTextFieldLeft:(UITextField *)arg1 ;
-(void)setTextFieldRight:(UITextField *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)setNeedsUpdateConstraints;
-(void)setSeparator:(ABRepeatingGradientSeparatorView *)arg1 ;
-(ABRepeatingGradientSeparatorView *)separator;
@end
