/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKTransitionView.h>
#import <iBooks/BKOpenContentTransitionProtocol.h>

@class UIImage, UIView, UIImageView, NSString;

@interface BKPDFTransitionView : BKTransitionView <BKOpenContentTransitionProtocol> {

	char _open;
	char _contentLoaded;
	char _fadeToTransparent;
	UIImage* _coverImage;
	UIImage* _bookshelfImage;
	UIView* _coverShadow;
	UIView* _bookContainer;
	UIView* _content;
	UIImageView* _cover;
	float _closedFrameOffsetY;
	float _contentFrameOffsetY;
	CGPoint _contentOffset;
	CGRect _closedFrame;
	CGRect _shadowFrame;
	CGRect _destRect;

}

@property (assign,nonatomic) CGPoint contentOffset;                  //@synthesize contentOffset=_contentOffset - In the implementation block
@property (nonatomic,retain) UIView * coverShadow;                   //@synthesize coverShadow=_coverShadow - In the implementation block
@property (nonatomic,retain) UIView * bookContainer;                 //@synthesize bookContainer=_bookContainer - In the implementation block
@property (nonatomic,retain) UIView * content;                       //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) UIImageView * cover;                    //@synthesize cover=_cover - In the implementation block
@property (assign,nonatomic) CGRect destRect;                        //@synthesize destRect=_destRect - In the implementation block
@property (assign,nonatomic) float closedFrameOffsetY;               //@synthesize closedFrameOffsetY=_closedFrameOffsetY - In the implementation block
@property (assign,nonatomic) float contentFrameOffsetY;              //@synthesize contentFrameOffsetY=_contentFrameOffsetY - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char dynamicContent; 
@property (assign,nonatomic) char open;                              //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) CGRect closedFrame;                     //@synthesize closedFrame=_closedFrame - In the implementation block
@property (assign,nonatomic) CGRect shadowFrame;                     //@synthesize shadowFrame=_shadowFrame - In the implementation block
@property (nonatomic,retain) UIImage * coverImage;                   //@synthesize coverImage=_coverImage - In the implementation block
@property (nonatomic,retain) UIImage * bookshelfImage;               //@synthesize bookshelfImage=_bookshelfImage - In the implementation block
@property (assign,nonatomic) char contentLoaded;                     //@synthesize contentLoaded=_contentLoaded - In the implementation block
@property (assign,nonatomic) char fadeToTransparent;                 //@synthesize fadeToTransparent=_fadeToTransparent - In the implementation block
-(void)setContentLoaded:(char)arg1 ;
-(void)setFadeToTransparent:(char)arg1 ;
-(void)setClosedFrame:(CGRect)arg1 ;
-(void)setShadowFrame:(CGRect)arg1 ;
-(void)setBookshelfImage:(UIImage *)arg1 ;
-(char)managesToView;
-(char)dynamicContent;
-(CGRect)closedFrame;
-(CGRect)shadowFrame;
-(UIImage *)bookshelfImage;
-(char)contentLoaded;
-(char)fadeToTransparent;
-(id)bookViewController;
-(void)setupLayers;
-(void)_animateWithDuration:(float)arg1 inReverse:(char)arg2 ;
-(void)buildContent;
-(void)buildBookContainer;
-(void)doAnimation;
-(UIView *)coverShadow;
-(void)setCoverShadow:(UIView *)arg1 ;
-(UIView *)bookContainer;
-(void)setBookContainer:(UIView *)arg1 ;
-(UIImageView *)cover;
-(void)setCover:(UIImageView *)arg1 ;
-(CGRect)destRect;
-(void)setDestRect:(CGRect)arg1 ;
-(float)closedFrameOffsetY;
-(void)setClosedFrameOffsetY:(float)arg1 ;
-(float)contentFrameOffsetY;
-(void)setContentFrameOffsetY:(float)arg1 ;
-(void)beginTransition;
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(double)duration;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(UIView *)content;
-(char)open;
-(void)setCoverImage:(UIImage *)arg1 ;
-(UIImage *)coverImage;
-(void)setContent:(UIView *)arg1 ;
-(void)setOpen:(char)arg1 ;
@end

