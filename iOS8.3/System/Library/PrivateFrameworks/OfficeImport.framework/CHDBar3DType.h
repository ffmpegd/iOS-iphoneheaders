/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDBar2DType.h>

@interface CHDBar3DType : CHDBar2DType {

	int mGapDepth;
	int mShapeType;

}
+(BOOL)is3DType;
+(id)stringWithShapeType:(int)arg1 ;
-(void)setShapeType:(int)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(void)setGapDepth:(int)arg1 ;
-(int)gapDepth;
-(int)shapeType;
@end

