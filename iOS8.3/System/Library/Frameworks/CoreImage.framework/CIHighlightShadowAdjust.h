/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:42:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputShadowAmount;
	NSNumber* inputHighlightAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputShadowAmount; 
@property (nonatomic,retain) NSNumber * inputHighlightAmount; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(char)_isIdentity;
-(NSNumber *)inputRadius;
-(void)setInputShadowAmount:(NSNumber *)arg1 ;
-(void)setInputHighlightAmount:(NSNumber *)arg1 ;
-(int)bestVersion;
-(id)_kernelSnoB_v0;
-(id)_kernelSHnoB_v0;
-(id)_kernelSH_v0;
-(id)_kernelSHnoB_v1;
-(id)_kernelSH_v1;
-(id)_kernelSHnoB_v2;
-(id)_kernelSH_v2;
-(NSNumber *)inputShadowAmount;
-(NSNumber *)inputHighlightAmount;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(id)outputImage;
@end

