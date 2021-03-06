/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface RKResponseCollection : NSObject {

	NSString* _context;
	NSMutableDictionary* _responseCatalog;
	NSMutableDictionary* _phraseMap;

}

@property (retain) NSString * context;                                 //@synthesize context=_context - In the implementation block
@property (retain) NSMutableDictionary * responseCatalog;              //@synthesize responseCatalog=_responseCatalog - In the implementation block
@property (retain) NSMutableDictionary * phraseMap;                    //@synthesize phraseMap=_phraseMap - In the implementation block
+(id)responseCollectionWithContext:(id)arg1 ;
-(id)init;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(id)_initWithContext:(id)arg1 ;
-(void)resetResponseCatalog;
-(void)resetPhraseMap;
-(void)setResponseCatalog:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)responseCatalog;
-(void)setPhraseMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)phraseMap;
-(id)responsesForCategory:(unsigned long long)arg1 gender:(unsigned long long)arg2 maximumResponses:(unsigned long long)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 ;
-(id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2 ;
-(void)dumpResponseCatalog;
@end

