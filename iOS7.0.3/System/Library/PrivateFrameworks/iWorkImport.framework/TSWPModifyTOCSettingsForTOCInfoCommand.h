/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPModifyTOCSettingsBaseCommand.h>

@class TSWPTOCInfo, TSSStylesheet, TSSPropertyMap, NSSet;

@interface TSWPModifyTOCSettingsForTOCInfoCommand : TSWPModifyTOCSettingsBaseCommand {

	TSWPTOCInfo* _tocInfo;
	BOOL _coalesceable;
	TSSStylesheet* _stylesheet;
	TSSPropertyMap* _propertyMap;
	NSSet* _paragraphStyles;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithTOCInfo:(id)arg1 tocSettings:(id)arg2 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(BOOL)shouldRunSynchronously;
-(id)initWithTOCInfo:(id)arg1 tocSettings:(id)arg2 coalesceable:(BOOL)arg3 ;
-(void)p_undoRedo;
-(void)saveToMessage:(ModifyTOCSettingsForTOCInfoCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromMessage:(const ModifyTOCSettingsForTOCInfoCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithTOCInfo:(id)arg1 coalesceable:(BOOL)arg2 paragraphStyles:(id)arg3 stylesheet:(id)arg4 propertyMap:(id)arg5 ;
-(const ModifyTOCSettingsBaseCommandArchive*)tocCommandArchiveFromUnarchiver:(id)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
@end

