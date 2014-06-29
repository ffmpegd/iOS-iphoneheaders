/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class MCDButton;

@interface MCDPlayModeControlView : UIView {

	bool _creatingGenius;
	MCDButton* _repeatButton;
	MCDButton* _geniusButton;
	MCDButton* _shuffleButton;

}

@property (nonatomic,readonly) MCDButton * repeatButton;               //@synthesize repeatButton=_repeatButton - In the implementation block
@property (nonatomic,readonly) MCDButton * geniusButton;               //@synthesize geniusButton=_geniusButton - In the implementation block
@property (nonatomic,readonly) MCDButton * shuffleButton;              //@synthesize shuffleButton=_shuffleButton - In the implementation block
@property (assign,nonatomic) bool creatingGenius;                      //@synthesize creatingGenius=_creatingGenius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(id)repeatButton;
-(id)geniusButton;
-(id)shuffleButton;
-(bool)creatingGenius;
-(void)setCreatingGenius:(bool)arg1 ;
@end
