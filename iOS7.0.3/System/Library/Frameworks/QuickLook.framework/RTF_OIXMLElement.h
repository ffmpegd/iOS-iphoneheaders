/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/RTF_OIXMLNode.h>

@interface RTF_OIXMLElement : RTF_OIXMLNode {

	id _attributes;
	id _children;
	BOOL _hasMultipleAttributes;
	BOOL _hasMultipleChildren;

}
+(void)_initEmptyHTMLNames;
+(BOOL)isEmptyHTMLElement:(id)arg1 ;
-(void)_appendXMLStringToString:(CFStringRef)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(id)objectValue;
-(id)stringValue;
-(void)addChild:(id)arg1 ;
-(void)addAttribute:(id)arg1 ;
-(id)openingTagString;
-(id)closingTagString;
-(int)childrenCount;
-(id)initWithName:(id)arg1 stringValue:(id)arg2 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)contentString;
-(int)attributeCount;
@end

