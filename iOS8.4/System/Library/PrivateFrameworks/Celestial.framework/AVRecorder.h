/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVRecorder : NSObject {

	AVRecorderPrivate* _priv;

}
-(BOOL)isRecording;
-(double)recordedDuration;
-(BOOL)takePhoto;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)stop;
-(void)deactivate;
-(BOOL)start;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(void)implNotification:(id)arg1 ;
-(BOOL)activate:(id*)arg1 ;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(int)arg3 ;
-(BOOL)autoFocusAtPoint:(CGPoint)arg1 ;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned long long)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)attributeForKey:(id)arg1 ;
@end
