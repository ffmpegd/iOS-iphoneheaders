/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>
#import <iWorkImport/TSDPropagatableCommand.h>

@protocol TSSPreset;
@class TSSTheme, NSString, TSPObject;

@interface TSSThemeReplacePresetCommand : TSKCommand <TSDPropagatableCommand> {

	TSSTheme* mTheme;
	NSString* mPresetKind;
	TSPObject<TSSPreset>* mPreset;
	TSPObject<TSSPreset>* mOldPreset;
	unsigned long long mIndex;

}

@property (readonly) TSSTheme * theme; 
@property (readonly) TSPObject<TSSPreset> * preset; 
@property (readonly) TSPObject<TSSPreset> * oldPreset; 
-(bool)modifiesAnyObjectPassingTest:(/*^block*/ id)arg1 ;
-(void)populateChangePropagationMapAfterCommit:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithTheme:(id)arg1 preset:(id)arg2 index:(unsigned long long)arg3 context:(id)arg4 ;
-(id)oldPreset;
-(void)p_installPreset:(id)arg1 ;
-(id)preset;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)theme;
-(bool)process;
@end
