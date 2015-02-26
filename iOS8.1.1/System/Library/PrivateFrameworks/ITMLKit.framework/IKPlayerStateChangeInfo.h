/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface IKPlayerStateChangeInfo : NSObject {

	NSDictionary* _jsonValue;
	long long _state;

}

@property (nonatomic,copy) NSDictionary * jsonValue;              //@synthesize jsonValue=_jsonValue - In the implementation block
@property (nonatomic,readonly) long long state;                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)state;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)elapsedTime;
-(id)initWithState:(long long)arg1 ;
-(id)_stateNameForState:(long long)arg1 ;
-(NSDictionary *)jsonValue;
-(void)setJsonValue:(NSDictionary *)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
@end
