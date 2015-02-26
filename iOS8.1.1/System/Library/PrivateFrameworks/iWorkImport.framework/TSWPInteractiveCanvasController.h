/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDInteractiveCanvasController.h>

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController {

	BOOL _isTearingDown;
	BOOL _layoutBordersVisible;
	BOOL _isEditingText;

}

@property (nonatomic,readonly) BOOL shouldRespondToTextHyperlinks; 
@property (nonatomic,readonly) BOOL handleHyperlinksWithTextGRs; 
@property (nonatomic,readonly) BOOL layoutBordersVisible;                       //@synthesize layoutBordersVisible=_layoutBordersVisible - In the implementation block
@property (nonatomic,readonly) BOOL isEditingText;                              //@synthesize isEditingText=_isEditingText - In the implementation block
@property (nonatomic,readonly) BOOL isTearingDown;                              //@synthesize isTearingDown=_isTearingDown - In the implementation block
+(CGColorRef)layoutBorderColor;
-(CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2 ;
-(BOOL)showsComments;
-(void)setShowsComments:(BOOL)arg1 ;
-(void)hideDisplayedAnnotation;
-(void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(BOOL)arg4 pinned:(BOOL)arg5 shouldSetSelection:(BOOL)arg6 ;
-(id)infosToHideForCanvas:(id)arg1 ;
-(BOOL)shouldRespondToTextHyperlinks;
-(void)p_recursivelyAddRep:(id)arg1 forStorage:(id)arg2 toSet:(id)arg3 ;
-(id)p_repsForStorage:(id)arg1 ;
-(void)closeHyperlinkPopover;
-(void)withLayoutForModel:(id)arg1 withSelection:(id)arg2 performBlock:(/*^block*/id)arg3 ;
-(BOOL)handleHyperlinksWithTextGRs;
-(void)didBeginEditingText;
-(void)willEndEditingText;
-(id)closestRepToPoint:(CGPoint)arg1 forStorage:(id)arg2 ;
-(void)showHyperlinkInfoForField:(id)arg1 inRep:(id)arg2 openInEditMode:(BOOL)arg3 ;
-(BOOL)hyperlinkPopoverIsShown;
-(id)storageForAnnotationModel:(id)arg1 selection:(id)arg2 ;
-(void)getColumnLeftPosition:(double*)arg1 columnRightPosition:(double*)arg2 singleColumnAtSelectionPoint:(BOOL)arg3 ;
-(void)getColumnLeftPosition:(double*)arg1 columnRightPosition:(double*)arg2 ;
-(BOOL)cellCommentsAllowedForTableInfo:(id)arg1 ;
-(BOOL)isTearingDown;
-(BOOL)layoutBordersVisible;
-(BOOL)isEditingText;
-(void)dealloc;
-(void)teardown;
@end
