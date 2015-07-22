/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <ActiveSyncSettings/PSHeaderFooterView.h>

@class UILabel, ASExchangeIdTextView;

@interface ASExchangeIdView : UIView <PSHeaderFooterView> {

	UILabel* _label;
	ASExchangeIdTextView* _idTextView;
	double _sized;
	double _labelTopPadding;
	double _textViewTopPadding;

}

@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) ASExchangeIdTextView * idTextView;              //@synthesize idTextView=_idTextView - In the implementation block
@property (assign,nonatomic) double sized;                                   //@synthesize sized=_sized - In the implementation block
@property (assign,nonatomic) double labelTopPadding;                         //@synthesize labelTopPadding=_labelTopPadding - In the implementation block
@property (assign,nonatomic) double textViewTopPadding;                      //@synthesize textViewTopPadding=_textViewTopPadding - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(double)labelTopPadding;
-(void)handleLongPressGesture:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(ASExchangeIdTextView *)idTextView;
-(void)setSized:(double)arg1 ;
-(void)setLabelTopPadding:(double)arg1 ;
-(void)setTextViewTopPadding:(double)arg1 ;
-(id)_generateExchangeIdLabel;
-(id)_generateExchangeIdText;
-(void)setTextForExchangeId:(id)arg1 ;
-(double)sized;
-(double)textViewTopPadding;
-(void)setIdTextView:(ASExchangeIdTextView *)arg1 ;
-(id)_accessibilityLabels;
@end
