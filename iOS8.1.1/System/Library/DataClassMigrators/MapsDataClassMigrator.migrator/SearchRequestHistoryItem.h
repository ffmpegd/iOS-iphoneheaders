/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <MapsDataClassMigrator/NSCopying.h>
#import <MapsDataClassMigrator/HistoryItem.h>
#import <MapsDataClassMigrator/SyncingHistoryItem.h>

@class MSPSearchRequestStorage, NSString, NSData;

@interface SearchRequestHistoryItem : NSObject <NSCopying, HistoryItem, SyncingHistoryItem> {

	MSPSearchRequestStorage* _storage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) NSString * displayQuery; 
@property (nonatomic,retain) NSString * locationDisplayString; 
@property (nonatomic,retain) NSString * syncIdentifier; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) MSPSearchRequestStorage * storage; 
@property (nonatomic,readonly) NSData * data; 
-(BOOL)updateFromSyncData:(id)arg1 ;
-(BOOL)isValid;
-(NSData *)syncData;
-(id)initWithSearchRequestStorage:(id)arg1 ;
-(NSString *)displayQuery;
-(NSString *)syncIdentifier;
-(void)updateWithStorage:(id)arg1 ;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(id)initWithDisplayQuery:(id)arg1 locationDisplayString:(id)arg2 timestamp:(double)arg3 mapRegion:(id)arg4 ;
-(id)ticketForSource:(int)arg1 ;
-(id)initWithTicket:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(MSPSearchRequestStorage *)storage;
-(void)setLocationDisplayString:(NSString *)arg1 ;
-(NSString *)locationDisplayString;
@end

