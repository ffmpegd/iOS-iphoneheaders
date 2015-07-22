/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:34:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AggregateDictionary/AggregateDictionary-Structs.h>
@class NSString;

@interface ADDataStore : NSObject {

	NSString* _path;
	Database* _database;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(id)initWithDefaultPath;
-(char)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 withConsumer:(id)arg4 ;
-(char)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 withConsumer:(id)arg4 ;
-(char)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/id)arg4 ;
-(char)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/id)arg4 ;
@end
