/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPMoviePlayerControllerDelegate <NSObject>
@optional
-(bool)moviePlayerBookmarkButtonPressed:(id)arg1;
-(bool)moviePlayerNextButtonPressed:(id)arg1;
-(bool)moviePlayerPreviousButtonPressed:(id)arg1;
-(bool)moviePlayerShareButtonPressed:(id)arg1;
-(void)moviePlayer:(id)arg1 willShowOverlayWithDuration:(double)arg2;
-(void)moviePlayerDidShowOverlay:(id)arg1;
-(void)moviePlayer:(id)arg1 willHideOverlayWithDuration:(double)arg2;
-(void)moviePlayerDidHideOverlay:(id)arg1;
-(bool)moviePlayer:(id)arg1 shouldDisableButtonForAction:(SEL)arg2;
@end

