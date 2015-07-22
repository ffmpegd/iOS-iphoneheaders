/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class CALayer, TSUImage;

@interface TSKHighlightController : NSObject {

	CALayer* _imageLayer;
	TSUImage* _image;
	CGRect _overallRect;
	CGAffineTransform _canvasTransform;
	CGAffineTransform _layerTransform;
	CALayer* _containingLayer;
	float _viewScale;
	CGPathRef _path;

}

@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) float viewScale;                          //@synthesize viewScale=_viewScale - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                        //@synthesize containingLayer=_containingLayer - In the implementation block
@property (assign,nonatomic) CGPathRef path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) TSUImage * image;                         //@synthesize image=_image - In the implementation block
-(float)viewScale;
-(char)drawRoundedRect;
-(void)createLayerWithZOrder:(float)arg1 contentsScaleForLayers:(float)arg2 ;
-(CGRect)buildLayersForPath:(CGPathRef)arg1 withImage:(id)arg2 ;
-(void)setCanvasTransform:(CGAffineTransform)arg1 layerTransform:(CGAffineTransform)arg2 ;
-(void)hide;
-(void)dealloc;
-(void)setImage:(TSUImage *)arg1 ;
-(CALayer *)layer;
-(CGPathRef)path;
-(TSUImage *)image;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)reset;
-(void)setPath:(CGPathRef)arg1 ;
-(void)disconnect;
-(void)setViewScale:(float)arg1 ;
@end
