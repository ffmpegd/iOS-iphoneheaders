/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeRep.h>

@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep {

	TSDPathSource* mLastPathSource;

}
+(bool)canConnectToRep:(id)arg1 ;
+(id)infosToConnectFromSelection:(id)arg1 withInteractiveCanvasController:(id)arg2 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(bool)directlyManagesLayerContent;
-(void)updateFromLayout;
-(id)overlayLayers;
-(bool)shouldCreateKnobs;
-(unsigned long long)enabledKnobMask;
-(bool)shouldCreateSelectionKnobs;
-(bool)shouldShowCommentHighlight;
-(CGPoint)i_dragOffset;
-(double)shortestDistanceToPoint:(CGPoint)arg1 countAsHit:(bool*)arg2 ;
-(id)additionalRepsForDragging;
-(bool)canUseSpecializedHitRegionForKnob:(id)arg1 ;
-(CGRect)targetRectForEditMenu;
-(bool)i_editMenuOverlapsEndKnobs;
-(bool)shouldShowSmartShapeKnobs;
-(bool)canMakePathEditable;
-(bool)canBeUsedForImageMask;
-(bool)canConnectToRep:(id)arg1 ;
-(id)connectionLineLayout;
-(bool)p_isConnected;
-(bool)p_isConnectedToLockedObjects;
-(bool)p_controlKnobVisible;
-(void)dealloc;
-(bool)containsPoint:(CGPoint)arg1 ;
-(bool)isSelectable;
-(bool)isDraggable;
@end

