/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:28 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBAppSwitcherService : NSObject {

	NSString* _bundleIdentifier;
	NSString* _viewServiceClassName;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * viewServiceClassName;              //@synthesize viewServiceClassName=_viewServiceClassName - In the implementation block
+(id)switcherServiceWithName:(id)arg1 viewServiceClassName:(id)arg2 ;
-(NSString *)viewServiceClassName;
-(void)setViewServiceClassName:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end
