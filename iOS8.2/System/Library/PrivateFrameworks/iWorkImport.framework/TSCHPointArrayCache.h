/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartSeries, NSData;

@interface TSCHPointArrayCache : NSObject {

	TSCHChartSeries* mSeries;
	CGRect mAreaFrame;
	unsigned mStart;
	unsigned mEnd;
	char mCull;
	NSData* mData;

}
+(id)p_getCacheCreate:(char)arg1 ;
+(SCD_Struct_TS447*)cachedPointsForSeries:(id)arg1 inAreaFrame:(CGRect)arg2 valueStart:(unsigned)arg3 valueEnd:(unsigned)arg4 cullBadPoints:(char)arg5 outCount:(unsigned*)arg6 ;
+(void)setCachedPointsForSeries:(id)arg1 inAreaFrame:(CGRect)arg2 valueStart:(unsigned)arg3 valueEnd:(unsigned)arg4 cullBadPoints:(char)arg5 points:(SCD_Struct_TS447*)arg6 count:(unsigned)arg7 ;
+(void)clearCache;
-(char)matchesSeries:(id)arg1 areaFrame:(CGRect)arg2 start:(unsigned)arg3 end:(unsigned)arg4 cull:(char)arg5 ;
-(void)dealloc;
@end
