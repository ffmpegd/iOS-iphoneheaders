/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDStyledDrawableEditor.h>
#import <iWorkImport/TSDInfoImporterDelegate.h>

@class NSSet, TSDMediaInfo;

@interface TSDMediaEditor : TSDStyledDrawableEditor <TSDInfoImporterDelegate>

@property (nonatomic,readonly) NSSet * mediaInfos; 
@property (nonatomic,readonly) TSDMediaInfo * firstMediaInfo; 
-(void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2 ;
-(void)endChangingStrokeWidth:(id)arg1 ;
-(id)strokeSwatches;
-(id)strokeColorPickerTitle;
-(id)stroke;
-(void)setStrokeColor:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)selectedObjectsSupportingOpacity;
-(void)resetSelectionToInsertedSize:(id)arg1 ;
-(void)resetSelectionToNaturalDataSize:(id)arg1 ;
-(void)makeCurrentSelectionPlaceholder:(id)arg1 ;
-(void)replaceSelectedMediaWithFileAtURL:(id)arg1 ;
-(void)showMediaReplaceUI:(id)arg1 ;
-(void)p_resetSelectionToInsertedSize:(int)arg1 ;
-(id)p_commandsToSwapConnectionsFromInfo:(id)arg1 infoMap:(id)arg2 ;
-(bool)p_allSelectedInfosArePlaceholders;
-(void)infoImporter:(id)arg1 needsMoviePlayabilityOnAllDevicesRequirementUsingBlock:(/*^block*/ id)arg2 ;
-(id)mediaInfos;
-(id)firstMediaInfo;
@end
