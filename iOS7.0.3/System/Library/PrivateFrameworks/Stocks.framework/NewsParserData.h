/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableString;

@interface NewsParserData : NSObject {

	int state;
	NSMutableArray* _newsItems;
	NSMutableString* _buffer;

}

@property (nonatomic,retain) NSMutableArray * newsItems;              //@synthesize newsItems=_newsItems - In the implementation block
@property (nonatomic,retain) NSMutableString * buffer;                //@synthesize buffer=_buffer - In the implementation block
-(id)newsItems;
-(void)setNewsItems:(id)arg1 ;
-(id)buffer;
-(void)setBuffer:(id)arg1 ;
-(void).cxx_destruct;
@end
