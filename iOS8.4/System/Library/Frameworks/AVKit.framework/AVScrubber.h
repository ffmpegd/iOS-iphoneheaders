/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UISlider.h>

@class NSArray, AVLoadedTimeRangesView, UIImageView, NSString;

@interface AVScrubber : UISlider {

	NSArray* _loadedTimeRanges;
	AVLoadedTimeRangesView* _loadedTimeRangesMaxTrackView;
	UIImageView* _thumbView;
	double _touchLocationOffsetFromThumbViewCenter;
	double _beginTouchLocationInViewY;
	long long _scrubbingSpeed;

}

@property (nonatomic,retain) NSArray * loadedTimeRanges; 
@property (getter=isPreciseScrubbingFeasible,nonatomic,readonly) BOOL preciseScrubbingFeasible; 
@property (nonatomic,readonly) NSString * localizedScrubbingSpeedName; 
@property (assign,nonatomic) long long scrubbingSpeed;                                                       //@synthesize scrubbingSpeed=_scrubbingSpeed - In the implementation block
+(id)keyPathsForValuesAffectingPreciseScrubbingFeasible;
+(id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
-(NSString *)localizedScrubbingSpeedName;
-(BOOL)isPreciseScrubbingFeasible;
-(long long)scrubbingSpeed;
-(void)setScrubbingSpeed:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)createThumbView;
-(void)_layoutSubviewsForBoundsChange:(BOOL)arg1 ;
-(void)_initSubviews;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(NSArray *)loadedTimeRanges;
@end
