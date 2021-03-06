/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVMutableValueTiming.h>

@interface AVConcreteMutableValueTiming : AVMutableValueTiming {

	double _value;
	double _timeStamp;
	double _rate;

}
-(SCD_Struct_AV1)_timing;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(void)setAnchorValue:(double)arg1 ;
-(void)setAnchorTimeStamp:(double)arg1 ;
-(double)rate;
-(void)setRate:(double)arg1 ;
@end

