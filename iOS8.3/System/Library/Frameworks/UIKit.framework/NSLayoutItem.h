/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:31 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSLayoutItem <NSObject>
@optional
-(void)nsli_addConstraint:(id)arg1;
-(char)nsli_removeConstraint:(id)arg1;
-(float)nsli_marginOffsetForAttribute:(int)arg1;

@required
-(id)nsli_description;
-(char)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(float)arg3 container:(id)arg4;
-(char)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(float)arg3 forConstraint:(id)arg4;
-(id)nsli_layoutEngine;
-(CGSize*)nsli_convertSizeToEngineSpace:(CGSize)arg1;
-(CGSize*)nsli_convertSizeFromEngineSpace:(CGSize)arg1;
-(id)nsli_superitem;
-(char)nsli_resolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
-(char)nsli_descriptionIncludesPointer;
-(unsigned)nsli_autoresizingMask;
-(char)nsli_isFlipped;

@end
