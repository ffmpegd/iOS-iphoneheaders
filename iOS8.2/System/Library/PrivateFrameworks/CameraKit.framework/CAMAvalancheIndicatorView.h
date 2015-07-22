/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface CAMAvalancheIndicatorView : UIView {

	char _showsWhenStarted;
	UIView* __backgroundView;
	UILabel* __countLabel;
	int __numberOfPhotos;

}

@property (assign,nonatomic) char showsWhenStarted;                   //@synthesize showsWhenStarted=_showsWhenStarted - In the implementation block
@property (nonatomic,readonly) UIView * _backgroundView;              //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _countLabel;                 //@synthesize _countLabel=__countLabel - In the implementation block
@property (nonatomic,readonly) int _numberOfPhotos;                   //@synthesize _numberOfPhotos=__numberOfPhotos - In the implementation block
-(int)_numberOfPhotos;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)_backgroundView;
-(CGSize)intrinsicContentSize;
-(void)reset;
-(void)_updateCountLabelWithNumberOfPhotos;
-(void)_commonCAMAvalancheIndicatorViewInitialization;
-(void)_performCaptureAnimation;
-(char)showsWhenStarted;
-(void)finishIncrementingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)incrementWithCaptureAnimation:(char)arg1 ;
-(void)setShowsWhenStarted:(char)arg1 ;
-(UILabel *)_countLabel;
@end
