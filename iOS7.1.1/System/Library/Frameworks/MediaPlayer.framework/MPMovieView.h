/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MPMovieViewDelegate;
@interface MPMovieView : UIView {

	<MPMovieViewDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <MPMovieViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(id)delegate;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void).cxx_destruct;
@end
