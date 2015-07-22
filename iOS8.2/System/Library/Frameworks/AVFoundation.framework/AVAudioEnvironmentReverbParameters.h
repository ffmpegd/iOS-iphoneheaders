/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) char enable; 
@property (assign,nonatomic) float level; 
@property (nonatomic,readonly) AVAudioUnitEQFilterParameters * filterParameters; 
-(void)loadFactoryReverbPreset:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setLevel:(float)arg1 ;
-(float)level;
-(char)enable;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(AVAudioUnitEQFilterParameters *)filterParameters;
-(void)setEnable:(char)arg1 ;
@end
