/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputSettings;

@interface AVFormatSpecification : NSObject {

	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatDescription;

}
+(id)formatSpecificationWithOutputSettings:(id)arg1 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(id)initWithOutputSettings:(id)arg1 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)dealloc;
-(id)outputSettings;
@end

