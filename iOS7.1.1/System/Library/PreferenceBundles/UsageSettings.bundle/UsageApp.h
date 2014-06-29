/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UsageApp : NSObject {

	float _staticSize;
	float _dynamicSize;
	float _specialSize;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) float staticSize;                         //@synthesize staticSize=_staticSize - In the implementation block
@property (assign,nonatomic) float dynamicSize;                        //@synthesize dynamicSize=_dynamicSize - In the implementation block
@property (assign,nonatomic) float specialSize;                        //@synthesize specialSize=_specialSize - In the implementation block
@property (nonatomic,readonly) float dataSize; 
@property (nonatomic,readonly) float totalSize; 
-(float)specialSize;
-(float)dynamicSize;
-(void)setSpecialSize:(float)arg1 ;
-(void)setDynamicSize:(float)arg1 ;
-(float)dataSize;
-(float)staticSize;
-(void)setStaticSize:(float)arg1 ;
-(id)bundleVersion;
-(id)bundleIdentifier;
-(void)setName:(id)arg1 ;
-(id)name;
-(float)totalSize;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setBundleVersion:(id)arg1 ;
@end
