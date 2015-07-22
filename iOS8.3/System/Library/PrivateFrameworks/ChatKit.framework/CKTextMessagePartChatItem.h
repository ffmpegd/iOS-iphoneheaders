/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:00:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKMessagePartChatItem.h>

@class NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem

@property (nonatomic,copy,readonly) NSAttributedString * text; 
@property (nonatomic,copy,readonly) NSAttributedString * subject; 
@property (nonatomic,readonly) char containsHyperlink; 
-(id)composition;
-(NSAttributedString *)text;
-(NSAttributedString *)subject;
-(id)loadTranscriptText;
-(Class)balloonViewClass;
-(id)pasteboardItems;
-(char)containsHyperlink;
@end
