/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPRep.h>

@interface TSWPHeaderRep : TSWPRep {

	double _leftClip;
	double _rightClip;

}

@property (assign,nonatomic) double leftClip;               //@synthesize leftClip=_leftClip - In the implementation block
@property (assign,nonatomic) double rightClip;              //@synthesize rightClip=_rightClip - In the implementation block
-(void)setupForDrawingInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(void)setLeftClip:(double)arg1 ;
-(void)setRightClip:(double)arg1 ;
-(double)leftClip;
-(double)rightClip;
@end

