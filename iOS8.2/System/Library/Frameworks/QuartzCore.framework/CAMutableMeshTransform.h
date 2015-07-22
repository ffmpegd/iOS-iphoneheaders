/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString * depthNormalization; 
@property (assign) int subdivisionSteps; 
+(id)meshTransform;
-(NSString *)depthNormalization;
-(int)subdivisionSteps;
-(void)replaceVertexAtIndex:(unsigned long)arg1 withVertex:(CAMeshVertex)arg2 ;
-(void)replaceFaceAtIndex:(unsigned long)arg1 withFace:(CAMeshFace)arg2 ;
-(void)setDepthNormalization:(NSString *)arg1 ;
-(void)removeVertexAtIndex:(unsigned long)arg1 ;
-(void)addFace:(CAMeshFace)arg1 ;
-(void)removeFaceAtIndex:(unsigned long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubdivisionSteps:(int)arg1 ;
-(void)addVertex:(CAMeshVertex)arg1 ;
@end
