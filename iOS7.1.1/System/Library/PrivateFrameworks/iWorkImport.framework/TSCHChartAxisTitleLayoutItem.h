/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@interface TSCHChartAxisTitleLayoutItem : TSCHChartLayoutItem {

	CGSize mChartBodySize;

}

@property (assign,nonatomic) CGSize chartBodySize; 
-(CGRect)calcDrawingRect;
-(id)axisLayoutItem;
-(CGAffineTransform)transformForRenderingOutElementSize:(CGSize*)arg1 outClipRect:(CGRect*)arg2 ;
-(CGAffineTransform)transformForRenderingRange:(NSRange)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(void)setChartBodySize:(CGSize)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGSize)calcMinSize;
-(CGSize)chartBodySize;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/ id)arg2 ;
-(CGAffineTransform)p_transformForRenderingRangePtr:(NSRange*)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(double)titlePaddingForAxis:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
@end
