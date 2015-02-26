/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SMS/SMS-Structs.h>
#import <IMFoundation/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface SuperToSMSParserContext : IMFromSuperParserContext {

	NSMutableString* _outHTML;
	BOOL _isSimpleString;

}

@property (nonatomic,readonly) NSString * outHTML;               //@synthesize outHTML=_outHTML - In the implementation block
@property (nonatomic,readonly) BOOL isSimpleString;              //@synthesize isSimpleString=_isSimpleString - In the implementation block
-(void)dealloc;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(BOOL)isSimpleString;
-(id)outHTML;
-(id)resultsForLogging;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)shouldPreprocess;
-(void)parserDidEnd:(id)arg1 ;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
@end
