/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class UILabel, UIView, NSString;

@interface SBUIPasscodeLockViewSIMLockKeypad : SBUIPasscodeLockViewLongNumericKeypad {

	UILabel* _statusSubtitleView;
	UIView* _entryFieldFiller;
	float _targetEntryFieldFillerAlpha;
	char _isShowingStatus;
	UIView* _statusSpringView;
	UIView* _statusSpringViewParent;

}

@property (nonatomic,copy) NSString * statusTitle; 
@property (nonatomic,copy) NSString * statusSubtitle; 
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)resetForFailedPasscode;
-(id)initWithLightStyle:(char)arg1 ;
-(void)_setHasInput:(char)arg1 ;
-(void)_layoutStatusView;
-(char)_showsPromptLabelOnEntryField;
-(id)_statusSubtitleFont;
-(void)forceShowStatus:(char)arg1 ;
-(void)_setText:(id)arg1 onLabel:(id)arg2 ;
-(char)_needsToHideTextFieldForStatus;
-(void)_shakeStatus;
-(void)_sizeLabel:(id)arg1 ;
-(float)_expectedYOffsetBetweenTitleAndSubtitleViews;
-(float)_subtitleBaselineYOffsetFromTopOfNumberPad;
-(float)_subtitleBaselineYOffsetFromTopOfEntryField;
-(float)_expectedDistanceBetweenTitleAndSubtitleBaselines;
-(float)_distanceToFirstLineBaseline:(id)arg1 ;
-(float)_distanceFromLastLineBaselineToTextFieldBoundsHeight:(id)arg1 ;
-(NSString *)statusTitle;
-(void)setStatusTitle:(NSString *)arg1 ;
-(NSString *)statusSubtitle;
-(void)setStatusSubtitle:(NSString *)arg1 ;
@end

