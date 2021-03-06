/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:08:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class NSArray;

@interface SCNActionSequence : SCNAction {

	SCNCActionSequence* _mycaction;
	NSArray* _actions;

}
+(id)sequenceWithActions:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)isCustom;
-(id)reversedAction;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

