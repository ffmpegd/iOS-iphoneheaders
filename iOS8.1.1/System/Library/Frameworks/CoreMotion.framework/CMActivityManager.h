/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) BOOL activityAvailable; 
-(BOOL)isActivityAvailable;
-(long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(void)setActivityHandler:(id)arg1 ;
-(id)activityHandler;
-(void)dealloc;
-(id)init;
@end
