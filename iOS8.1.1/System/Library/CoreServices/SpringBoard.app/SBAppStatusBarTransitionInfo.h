/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject {

	UIStatusBarStyleRequest* _startStyleRequest;
	long long _startOrientation;
	UIStatusBarStyleRequest* _endStyleRequest;
	long long _endOrientation;
	int _transition;
	BOOL _zoomOther;

}

@property (nonatomic,copy) UIStatusBarStyleRequest * startStyleRequest;              //@synthesize startStyleRequest=_startStyleRequest - In the implementation block
@property (assign,nonatomic) long long startOrientation;                             //@synthesize startOrientation=_startOrientation - In the implementation block
@property (nonatomic,copy) UIStatusBarStyleRequest * endStyleRequest;                //@synthesize endStyleRequest=_endStyleRequest - In the implementation block
@property (assign,nonatomic) long long endOrientation;                               //@synthesize endOrientation=_endOrientation - In the implementation block
@property (assign,nonatomic) int transition;                                         //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) BOOL zoomOther;                                         //@synthesize zoomOther=_zoomOther - In the implementation block
-(void)setEndStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(void)setStartOrientation:(long long)arg1 ;
-(void)setEndOrientation:(long long)arg1 ;
-(void)setStartStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(void)setZoomOther:(BOOL)arg1 ;
-(long long)startOrientation;
-(long long)endOrientation;
-(UIStatusBarStyleRequest *)startStyleRequest;
-(UIStatusBarStyleRequest *)endStyleRequest;
-(BOOL)zoomOther;
-(void)dealloc;
-(id)description;
-(void)setTransition:(int)arg1 ;
-(int)transition;
@end
