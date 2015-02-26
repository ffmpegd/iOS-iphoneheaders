/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBPresentation : NSObject
+(void)setFontEntites:(id)arg1 environmentHolder:(id)arg2 ;
+(void)setDefaultTextStyleWithEnvironmentHolder:(id)arg1 state:(id)arg2 ;
+(id)drawingGroupHolderWithDocumentContainerHolder:(id)arg1 ;
+(void)readMasterAndLayouts:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3 ;
+(void)readSlides:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 isThumbnail:(BOOL)arg5 delegate:(id)arg6 ;
+(void)addHeadersFootersToDocumentContainer:(id)arg1 instance:(int)arg2 ;
+(void)readFrom:(PptBinaryReader*)arg1 to:(id)arg2 cancel:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5 ;
+(void)writeGlobalsWithPresentationState:(id)arg1 ;
+(void)finalizeWritingGlobalsWithPresentationState:(id)arg1 ;
+(void)writeNotesMasterWithPresentationState:(id)arg1 ;
+(void)writeSlideMastersWithPresentationState:(id)arg1 ;
+(void)writeSlidesWithPresentationState:(id)arg1 ;
+(void)readDefaultTextListStyle:(id)arg1 fromDocumentContainer:(id)arg2 state:(id)arg3 ;
+(void)scanSlideListForLayoutTypes:(id)arg1 slideListHolder:(id)arg2 masterLayoutMap:(id)arg3 ;
+(void)processLayoutTypesFromDocument:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3 ;
+(void)readNotes:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 ;
@end
