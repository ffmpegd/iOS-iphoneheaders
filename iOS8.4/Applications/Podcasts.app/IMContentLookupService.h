/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/IMBasePlatformLookupService.h>

@class NSString, NSArray, NSMutableArray;

@interface IMContentLookupService : IMBasePlatformLookupService {

	NSString* _profile;
	NSString* _artworkType;
	NSArray* _ids;
	NSMutableArray* _idsToFetch;

}

@property (nonatomic,retain) NSString * profile;                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * artworkType;                   //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,retain) NSArray * ids;                            //@synthesize ids=_ids - In the implementation block
@property (nonatomic,retain) NSMutableArray * idsToFetch;              //@synthesize idsToFetch=_idsToFetch - In the implementation block
-(id)initWithIds:(id)arg1 ;
-(void)setArtworkType:(NSString *)arg1 ;
-(id)createURL;
-(id)platformAction;
-(NSMutableArray *)idsToFetch;
-(void)setIdsToFetch:(NSMutableArray *)arg1 ;
-(id)init;
-(NSArray *)ids;
-(void)setIds:(NSArray *)arg1 ;
-(NSString *)artworkType;
-(id)request:(/*^block*/id)arg1 ;
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
@end
