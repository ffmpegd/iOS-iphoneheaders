/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class NSMutableData, NSError;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {

	NSMutableData* _octetStreamData;
	NSError* _parserError;

}

@property (retain) NSMutableData * octetStreamData;              //@synthesize octetStreamData=_octetStreamData - In the implementation block
@property (readonly) NSError * parserError; 
+(bool)canHandleContentType:(id)arg1 ;
-(id)parserError;
-(void)dealloc;
-(id)init;
-(id)description;
-(bool)processData:(id)arg1 forTask:(id)arg2 ;
-(id)octetStreamData;
-(void)setOctetStreamData:(id)arg1 ;
@end

