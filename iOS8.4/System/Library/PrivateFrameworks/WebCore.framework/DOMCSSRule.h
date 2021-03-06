/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMCSSStyleSheet;

@interface DOMCSSRule : DOMObject

@property (readonly) unsigned short type; 
@property (copy) NSString * cssText; 
@property (readonly) DOMCSSStyleSheet * parentStyleSheet; 
@property (readonly) DOMCSSRule * parentRule; 
-(void)dealloc;
-(unsigned short)type;
-(void)setCssText:(NSString *)arg1 ;
-(void)finalize;
-(NSString *)cssText;
-(DOMCSSStyleSheet *)parentStyleSheet;
-(DOMCSSRule *)parentRule;
@end

