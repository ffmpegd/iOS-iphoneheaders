/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Movie/QLMovieViewControllerDelegate.h>

@class QLMovieViewController;

@interface QLMovieDisplayBundle : QLDisplayBundle <UIGestureRecognizerDelegate, QLMovieViewControllerDelegate> {

	QLMovieViewController* _movieViewController;
	double _lastMoviePosition;
	double _scrubberOffset;
	bool _audioSessionInitialized;
	bool _updatingOverlayVisibility;
	bool _isVendingFullScreenWindow;

}
+(double)allowedLoadingDelay;
+(bool)needsAVControls;
-(void)movieViewController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)_checkAudioSession;
-(void)willEnterFullScreenWithHostedWindow:(id)arg1 ;
-(void)didExitFullScreen;
-(void)_tearDownMovieController;
-(void)movieViewController:(id)arg1 setMoviePosition:(double)arg2 ;
-(void)_loadMovieControllerIfNeeded;
-(void)movieViewController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)playbackFailedInMovieViewController:(id)arg1 ;
-(void)hideOverlayWithDuration:(double)arg1 ;
-(void)_updateControlStyle;
-(void)enterBackground;
-(void)setOverlayHidden:(bool)arg1 duration:(double)arg2 ;
-(void)togglePlayState;
-(void)loadWithHints:(id)arg1 ;
-(bool)canBeCached;
-(bool)canCopyToPasteboard;
-(int)airPlayMode;
-(void)setNavigationBarVerticalOffset:(double)arg1 ;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(void)_updateAVState;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPreviewMode:(int)arg1 ;
@end
