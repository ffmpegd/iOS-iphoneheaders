/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDKnob.h>

@class TSUImage;

@interface TSDButtonKnob : TSDKnob {

	TSUImage* mImage;
	BOOL mEnabled;
	BOOL mHighlighted;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
-(id)initWithType:(int)arg1 position:(CGPoint)arg2 radius:(float)arg3 tag:(unsigned)arg4 onRep:(id)arg5 ;
-(id)knobImage;
-(BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 returningDistance:(float*)arg3 ;
-(id)initWithImage:(id)arg1 tag:(unsigned)arg2 onRep:(id)arg3 ;
-(void)p_updateLayerImage;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
@end

