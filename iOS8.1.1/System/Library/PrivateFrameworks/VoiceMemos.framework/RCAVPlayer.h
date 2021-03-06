/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVPlayer.h>

@protocol RCAVPlayerDelegate;
@class AVPlayerItem;

@interface RCAVPlayer : AVPlayer {

	BOOL _valid;
	id _periodicTimeObserverToken;
	AVPlayerItem* _AVPlayerItemBeingObserved;
	double _updateRate;
	id<RCAVPlayerDelegate> _delegate;

}

@property (assign,nonatomic) double updateRate;                                   //@synthesize updateRate=_updateRate - In the implementation block
@property (nonatomic,readonly) BOOL isReadyToPlay; 
@property (assign,nonatomic,__weak) id<RCAVPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<RCAVPlayerDelegate>)arg1 ;
-(id)init;
-(id<RCAVPlayerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_invalidate;
-(BOOL)isReadyToPlay;
-(void)setUpdateRate:(double)arg1 ;
-(void)_AVAudioSessionMediaServicesWereLostNotification:(id)arg1 ;
-(void)_AVAudioSessionMediaServicesWereResetNotification:(id)arg1 ;
-(void)_endObservingObservedPlayerItem;
-(void)_beginObservingPlayerItem:(id)arg1 ;
-(void)_periodicTimeUpdate;
-(void)_currentItemBecameReadyToPlay;
-(void)_rateDidChange;
-(double)updateRate;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
@end

