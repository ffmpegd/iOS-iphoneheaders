/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface IDSRestrictionsService : NSObject {

	BOOL _disableService;
	NSString* _name;

}

@property (assign) BOOL disableService;              //@synthesize disableService=_disableService - In the implementation block
@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)disableService;
-(void)setDisableService:(BOOL)arg1 ;
@end
