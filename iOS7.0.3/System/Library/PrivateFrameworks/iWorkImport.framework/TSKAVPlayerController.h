/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSKAVPlayerControllerDelegate;
@class AVPlayer;

@interface TSKAVPlayerController : NSObject {

	AVPlayer* mPlayer;
	<TSKAVPlayerControllerDelegate>* mDelegate;
	int mRepeatMode;
	float mVolume;
	float mRateBeforeScrubbing;
	unsigned mScrubbingCount;
	BOOL mCanPlay;
	BOOL mPlaying;
	BOOL mFastReversing;
	BOOL mFastForwarding;
	BOOL mIsObservingStatus;
	double _absoluteCurrentTime;

}

@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) <TSKAVPlayerControllerDelegate> * delegate; 
@property (nonatomic,readonly) BOOL canPlay; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (nonatomic,readonly) double absoluteDuration; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) int repeatMode; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) double absoluteCurrentTime;                                //@synthesize absoluteCurrentTime=_absoluteCurrentTime - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double remainingTime; 
@property (getter=isScrubbing,nonatomic,readonly) BOOL scrubbing; 
@property (assign,getter=isFastReversing,nonatomic) BOOL fastReversing; 
@property (assign,getter=isFastForwarding,nonatomic) BOOL fastForwarding; 
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingAbsoluteDuration;
+(BOOL)automaticallyNotifiesObserversOfStartTime;
+(id)keyPathsForValuesAffectingStartTime;
+(BOOL)automaticallyNotifiesObserversOfEndTime;
+(id)keyPathsForValuesAffectingEndTime;
-(id)initWithPlayer:(id)arg1 delegate:(id)arg2 ;
-(double)absoluteCurrentTime;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)p_startObservingClosedCaptionDisplayEnabled;
-(BOOL)isFastReversing;
-(BOOL)isFastForwarding;
-(void)p_stopObservingClosedCaptionDisplayEnabled;
-(void)p_applyVolumeToPlayerItem;
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg1 ;
-(void)setFastReversing:(BOOL)arg1 ;
-(void)setFastForwarding:(BOOL)arg1 ;
-(BOOL)p_canFastReverse;
-(BOOL)p_canFastForward;
-(void)p_closedCaptioningStatusDidChange:(id)arg1 ;
-(void)p_updateClosedCaptionDisplayEnabled;
-(void)p_playerItemDidPlayToEndTime:(id)arg1 ;
-(void)p_playbackDidFailWithError:(id)arg1 ;
-(double)absoluteDuration;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 ;
-(void)seekForwardByOneFrame;
-(void)seekBackwardByOneFrame;
-(void)seekToBeginning;
-(void)seekToEnd;
-(void)setAbsoluteCurrentTime:(double)arg1 ;
-(BOOL)canPlay;
-(double)currentTime;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(BOOL)isPlaying;
-(BOOL)isScrubbing;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(double)duration;
-(void)setStartTime:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)startTime;
-(void)setEndTime:(double)arg1 ;
-(double)remainingTime;
-(void)setPlaying:(BOOL)arg1 ;
-(void)teardown;
-(double)endTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)player;
@end

