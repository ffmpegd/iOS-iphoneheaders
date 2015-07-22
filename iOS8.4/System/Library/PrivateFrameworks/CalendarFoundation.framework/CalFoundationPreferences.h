/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalPreferences, NSString, NSArray;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) BOOL logAutoFlush; 
@property (nonatomic,readonly) BOOL logEmitUserNotifications; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
+(id)shared;
-(id)init;
-(BOOL)logAutoFlush;
-(BOOL)logEmitUserNotifications;
-(NSArray *)logSimpleConfiguration;
-(NSString *)logFilePath;
@end
