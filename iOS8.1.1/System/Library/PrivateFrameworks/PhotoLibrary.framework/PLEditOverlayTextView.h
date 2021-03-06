/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, NSString;

@interface PLEditOverlayTextView : UIView {

	UIView* __backgroundView;
	UILabel* __textLabel;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UIView * _backgroundView;              //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _textLabel;                  //@synthesize _textLabel=__textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)_backgroundView;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UILabel *)_textLabel;
-(void)_commonPLEditOverlayTextViewInitialization;
@end

