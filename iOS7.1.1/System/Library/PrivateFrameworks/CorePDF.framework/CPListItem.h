/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {

	CPList* list;
	int number;
	CFArrayRef paragraphs;

}

@property (nonatomic,retain) CPList * list; 
@property (assign,nonatomic) int number; 
-(void)dealloc;
-(id)init;
-(int)number;
-(void)dispose;
-(void)addParagraph:(id)arg1 ;
-(id)list;
-(id)paragraphAtIndex:(unsigned)arg1 ;
-(unsigned)paragraphCount;
-(void)setNumber:(int)arg1 ;
-(void)setList:(id)arg1 ;
-(void)finalize;
@end

