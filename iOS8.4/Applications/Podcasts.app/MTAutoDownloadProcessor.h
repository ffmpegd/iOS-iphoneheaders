/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTPodcastAndEpisodeProcessor.h>
#import <Podcasts/MTReachabilityObserver.h>

@class MTUuidQueryObserver, NSString;

@interface MTAutoDownloadProcessor : MTPodcastAndEpisodeProcessor <MTReachabilityObserver> {

	MTUuidQueryObserver* _savedObserver;

}

@property (nonatomic,retain) MTUuidQueryObserver * savedObserver;              //@synthesize savedObserver=_savedObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityChangedFrom:(char)arg1 to:(char)arg2 ;
-(id)podcastPredicate;
-(id)defaultPropertiesThatAffectPredicate;
-(void)setSavedObserver:(MTUuidQueryObserver *)arg1 ;
-(MTUuidQueryObserver *)savedObserver;
-(void)autodownloadEpisodesChanged:(id)arg1 ;
-(id)episodePredicateForPodcast:(id)arg1 ;
-(void)episodeResultsChangedForPodcast:(id)arg1 withDeletedIds:(id)arg2 andInsertIds:(id)arg3 ;
-(void)start;
@end

