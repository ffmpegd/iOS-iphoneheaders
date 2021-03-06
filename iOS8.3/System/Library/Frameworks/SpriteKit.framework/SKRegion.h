/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:16:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/NSCopying.h>
#import <SpriteKit/NSCoding.h>

@class PKRegion;

@interface SKRegion : NSObject <NSCopying, NSCoding> {

	PKRegion* _region;

}

@property (nonatomic,readonly) CGPathRef path; 
+(id)infiniteRegion;
-(id)initWithRadius:(float)arg1 ;
-(id)inverseRegion;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(int)arg2 results:(char*)arg3 resultsStride:(int)arg4 count:(int)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithPath:(CGPathRef)arg1 ;
@end

