/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PDPassGroupingProfile : NSObject {

	NSString* _passTypeID;
	NSString* _groupingID;
	long long _passStyle;
	NSDate* _relevantDate;
	NSDate* _ingestedDate;

}

@property (nonatomic,copy) NSString * passTypeID;                //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                //@synthesize groupingID=_groupingID - In the implementation block
@property (assign,nonatomic) long long passStyle;                //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) NSDate * relevantDate;              //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestedDate;              //@synthesize ingestedDate=_ingestedDate - In the implementation block
-(void)setPassTypeID:(NSString *)arg1 ;
-(NSString *)passTypeID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(long long)passStyle;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setGroupingID:(NSString *)arg1 ;
-(NSDate *)relevantDate;
-(NSDate *)ingestedDate;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(NSString *)groupingID;
-(void)setPassStyle:(long long)arg1 ;
@end
