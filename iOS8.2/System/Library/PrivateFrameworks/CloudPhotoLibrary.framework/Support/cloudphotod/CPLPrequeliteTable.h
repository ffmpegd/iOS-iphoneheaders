/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <cloudphotod/PQLInjecting.h>

@class NSString, PQLNameInjection, NSData;

@interface CPLPrequeliteTable : NSObject <PQLInjecting> {

	NSString* _tableName;
	PQLNameInjection* _injection;

}

@property (readonly) NSString * tableName;                          //@synthesize tableName=_tableName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(id)tableWithName:(id)arg1 ;
-(NSString *)description;
-(id)initWithName:(id)arg1 ;
-(NSString *)tableName;
-(NSData *)sql;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
@end
