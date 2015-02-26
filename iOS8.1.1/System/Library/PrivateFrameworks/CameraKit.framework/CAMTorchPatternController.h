/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVCaptureDevice, CAMTorchPattern, CADisplayLink;

@interface CAMTorchPatternController : NSObject {

	BOOL __performing;
	double _stepInterval;
	AVCaptureDevice* _captureDevice;
	CAMTorchPattern* __currentPattern;
	double __startTime;
	CADisplayLink* __displayLink;

}

@property (assign,nonatomic) double stepInterval;                                  //@synthesize stepInterval=_stepInterval - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * captureDevice;                      //@synthesize captureDevice=_captureDevice - In the implementation block
@property (assign,setter=_setPerforming:,nonatomic) BOOL _performing;              //@synthesize _performing=__performing - In the implementation block
@property (nonatomic,readonly) CAMTorchPattern * _currentPattern;                  //@synthesize _currentPattern=__currentPattern - In the implementation block
@property (nonatomic,readonly) double _startTime;                                  //@synthesize _startTime=__startTime - In the implementation block
@property (nonatomic,readonly) CADisplayLink * _displayLink;                       //@synthesize _displayLink=__displayLink - In the implementation block
-(CADisplayLink *)_displayLink;
-(id)init;
-(AVCaptureDevice *)captureDevice;
-(void)setCaptureDevice:(AVCaptureDevice *)arg1 ;
-(void)doubleBlink;
-(void)blink;
-(void)stopPerformingPattern;
-(BOOL)_performing;
-(void)_setPerforming:(BOOL)arg1 ;
-(void)_resetTorchLevel;
-(void)_applyTorchLevel:(float)arg1 ;
-(void)startPerformingPattern:(id)arg1 ;
-(double)stepInterval;
-(void)setStepInterval:(double)arg1 ;
-(CAMTorchPattern *)_currentPattern;
-(double)_startTime;
-(void)displayLinkFired:(id)arg1 ;
@end
