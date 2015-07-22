/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <MediaPlayer/MPVolumeView.h>

@class MPAudioDeviceController;

@interface IMVolumeView : MPVolumeView {

	MPAudioDeviceController* _audioDeviceController;

}

@property (nonatomic,readonly) char airplayActive; 
@property (nonatomic,retain) MPAudioDeviceController * audioDeviceController;              //@synthesize audioDeviceController=_audioDeviceController - In the implementation block
-(char)airplayActive;
-(id)routeButtonImageSelected;
-(id)routeButtonImageNormal;
-(MPAudioDeviceController *)audioDeviceController;
-(id)_routeButtonImage;
-(void)setAudioDeviceController:(MPAudioDeviceController *)arg1 ;
-(CGRect)volumeSliderRectForBounds:(CGRect)arg1 ;
-(CGRect)routeButtonRectForBounds:(CGRect)arg1 ;
-(id)minimumVolumeSliderImageForState:(unsigned)arg1 ;
-(id)maximumVolumeSliderImageForState:(unsigned)arg1 ;
-(id)routeButtonImageForState:(unsigned)arg1 ;
-(void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setRouteButtonImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setVolumeThumbImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)volumeThumbImageForState:(unsigned)arg1 ;
-(CGRect)volumeThumbRectForBounds:(CGRect)arg1 volumeSliderRect:(CGRect)arg2 value:(float)arg3 ;
@end
