/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSCharacterSet;

@interface SFUJsonScanner : NSObject {

	NSString* mString;
	unsigned short* mCharacters;
	unsigned long long mLength;
	unsigned long long mOffset;
	NSCharacterSet* mWhitespaceCharacterSet;
	NSCharacterSet* mDecimalDigitCharacterSet;

}
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(void)skipWhitespace;
-(id)parseObject;
-(id)parseArray;
-(id)parseDictionary;
-(unsigned short)nextCharacter;
-(void)appendCharactersInRange:(NSRange)arg1 toString:(id)arg2 ;
-(id)parseHexCharacter;
-(id)parseString;
-(bool)parseConstantString:(const char*)arg1 ;
-(id)parseNull;
-(id)parseTrue;
-(id)parseFalse;
-(id)parseNumber;
@end

