/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMAVPlayer.h>
#import <Podcasts/IMAVPlayerDelegate.h>

@protocol IMMediaItem, IMMediaPlayerDelegate;
@class IMPlayerManifest, NSString;

@interface IMMediaPlayer : IMAVPlayer <IMAVPlayerDelegate> {

	IMPlayerManifest* _manifest;
	struct {
		unsigned supportsDrmGroupID : 1;
	}  _mediaItemFlags;
	id<IMMediaItem> _currentMediaItem;
	struct {
		unsigned delegateShouldPlayItem : 1;
		unsigned delegateChapterStarted : 1;
		unsigned delegateStateChanged : 1;
		unsigned delegateErrorDidOccur : 1;
		unsigned delegateCurrentItemChanged : 1;
		unsigned delegateCurrentItemInfoChanged : 1;
		unsigned delegatePeriodicUpdate : 1;
		unsigned delegatePlayerStateChanged : 1;
		unsigned delegatePlayerMediaTypeAvailable : 1;
		unsigned delegatePlayerCurrentItemEnded : 1;
		unsigned delegatePlayerDurationAvailable : 1;
		unsigned delegatePlayerPeriodicUpdate : 1;
		unsigned delegatePlayerCurrentItemStopped : 1;
		unsigned delegatePlayerLoadedDurationChanged : 1;
		unsigned delegatePlayerCurrentItemChanged : 1;
		unsigned delegatePlayerLoadStateChanged : 1;
	}  _mediaDelegateFlags;
	id<IMMediaPlayerDelegate> _mediaDelegate;
	int _currentChapterIndex;
	NSRange _currentChapterRange;
	char _ignorePlayStatusUpdate;
	int _seekingChapterIndex;
	double _seekingChapterTimeOffset;

}

@property (nonatomic,retain) IMPlayerManifest * manifest;                          //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic) id<IMMediaPlayerDelegate> mediaDelegate;              //@synthesize mediaDelegate=_mediaDelegate - In the implementation block
@property (nonatomic,retain) id<IMMediaItem> currentMediaItem;                     //@synthesize currentMediaItem=_currentMediaItem - In the implementation block
@property (assign,nonatomic) double currentMediaTime; 
@property (nonatomic,readonly) double mediaDuration; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentMediaTime:(double)arg1 ;
-(void)playerStateChanged:(id)arg1 ;
-(void)playerLoadStateChanged:(id)arg1 ;
-(void)playerDurationAvailable:(id)arg1 ;
-(void)playerLoadedDurationChanged:(id)arg1 ;
-(void)playerMediaTypeAvailable:(id)arg1 ;
-(void)playerCurrentItemChanged:(id)arg1 ;
-(void)playerCurrentItemStopped:(id)arg1 ;
-(void)playerCurrentItemEnded:(id)arg1 ;
-(char)playerShouldPlayMore:(id)arg1 ;
-(void)playerErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)player:(id)arg1 callbackForTime:(double)arg2 ;
-(void)playerPeriodicUpdate:(id)arg1 elapsed:(double)arg2 duration:(double)arg3 isFinished:(char)arg4 ;
-(void)setMediaDelegate:(id<IMMediaPlayerDelegate>)arg1 ;
-(int)currentChapter;
-(void)previousChapter;
-(void)nextChapter;
-(void)setCurrentMediaItem:(id<IMMediaItem>)arg1 ;
-(void)goToChapter:(int)arg1 ;
-(double)mediaDuration;
-(void)updateNowPlayingInfo;
-(void)onChaptersLoaded:(id)arg1 ;
-(void)loadChaptersInAssetURL:(id)arg1 ;
-(char)loadChapter:(int)arg1 offset:(double)arg2 ;
-(void)nextMediaItemUserDriven:(char)arg1 ;
-(char)hasNextItem;
-(void)triggerChapterAt:(double)arg1 ;
-(id<IMMediaPlayerDelegate>)mediaDelegate;
-(void)setScrubbing:(char)arg1 ;
-(void)play;
-(id<IMMediaItem>)currentMediaItem;
-(void)dealloc;
-(id)init;
-(double)currentMediaTime;
-(void)previousMediaItem;
-(void)nextMediaItem;
-(IMPlayerManifest *)manifest;
-(void)setManifest:(IMPlayerManifest *)arg1 ;
@end

