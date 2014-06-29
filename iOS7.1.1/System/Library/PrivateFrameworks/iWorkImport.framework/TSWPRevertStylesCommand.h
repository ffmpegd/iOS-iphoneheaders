/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextCommand.h>

@class NSSet, NSDictionary;

@interface TSWPRevertStylesCommand : TSWPTextCommand {

	NSSet* _styleClasses;
	NSDictionary* _changeDetails;

}

@property (nonatomic,retain) NSDictionary * changeDetails;              //@synthesize changeDetails=_changeDetails - In the implementation block
+(NSRange)clearAnonymousCharacterStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
+(NSRange)clearAnonymousListStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
+(NSRange)clearAnonymousParagraphStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(void)doCommit;
-(int)persistenceKind;
-(void)setChangeDetails:(id)arg1 ;
-(id)changeDetails;
-(void)doUndoRedo;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 styleClasses:(id)arg3 ;
-(void)dealloc;
-(id)actionString;
@end
