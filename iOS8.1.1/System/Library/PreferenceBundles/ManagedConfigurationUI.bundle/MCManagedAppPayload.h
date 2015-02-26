/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCManagedAppPayload : MCPayload {

	NSString* _managedAppID;

}

@property (nonatomic,retain) NSString * managedAppID;              //@synthesize managedAppID=_managedAppID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)title;
-(id)initWithManagedAppID:(id)arg1 profile:(id)arg2 ;
-(NSString *)managedAppID;
-(void)setManagedAppID:(NSString *)arg1 ;
@end
