/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PDHeadersFooters : NSObject {

	bool mHasDateTime;
	bool mHasNowDateTime;
	bool mHasUserDateTime;
	bool mHasSlideNumber;
	bool mHasHeader;
	bool mHasFooter;
	int mDateTimeFormat;
	NSString* mUserDateTime;
	NSString* mHeader;
	NSString* mFooter;

}
-(void)dealloc;
-(bool)hasDateTime;
-(void)setHasDateTime:(bool)arg1 ;
-(bool)hasNowDateTime;
-(void)setHasNowDateTime:(bool)arg1 ;
-(bool)hasUserDateTime;
-(void)setHasUserDateTime:(bool)arg1 ;
-(bool)hasSlideNumber;
-(void)setHasSlideNumber:(bool)arg1 ;
-(bool)hasHeader;
-(void)setHasHeader:(bool)arg1 ;
-(bool)hasFooter;
-(void)setHasFooter:(bool)arg1 ;
-(id)userDateTime;
-(void)setUserDateTime:(id)arg1 ;
-(id)header;
-(void)setHeader:(id)arg1 ;
-(id)footer;
-(void)setFooter:(id)arg1 ;
@end

