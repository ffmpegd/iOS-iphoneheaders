/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>
#import <UIKit/NSCoding.h>

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSDictionary;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) unsigned long long repeatInterval; 
@property (nonatomic,copy) NSCalendar * repeatCalendar; 
@property (nonatomic,copy) CLRegion * region; 
@property (assign,nonatomic) BOOL regionTriggersOnce; 
@property (nonatomic,copy) NSString * alertBody; 
@property (assign,nonatomic) BOOL hasAction; 
@property (nonatomic,copy) NSString * alertAction; 
@property (nonatomic,copy) NSString * alertLaunchImage; 
@property (nonatomic,copy) NSString * alertTitle; 
@property (nonatomic,copy) NSString * soundName; 
@property (assign,nonatomic) long long applicationIconBadgeNumber; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSString * category; 
@property (assign,nonatomic) int totalRepeatCount; 
@property (assign,nonatomic) int remainingRepeatCount; 
@property (assign,nonatomic) BOOL hideAlertTitle; 
@property (assign,nonatomic) BOOL allowSnooze; 
@property (assign,nonatomic) int soundType; 
@property (assign,nonatomic) BOOL interruptAudioAndLockDevice; 
@property (assign,nonatomic) BOOL resumeApplicationInBackground; 
@property (assign,nonatomic) BOOL fireNotificationsWhenAppRunning; 
@property (assign,nonatomic) BOOL showAlarmStatusBarItem; 
@property (nonatomic,copy) NSString * customLockSliderLabel; 
@property (nonatomic,copy) NSString * firedNotificationName; 
@property (nonatomic,copy) NSString * snoozedNotificationName; 
@property (assign,nonatomic) BOOL isTransient; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(void)validate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(BOOL)isTriggeredByDate;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(long long)compareFireDates:(id)arg1 ;
-(void)clearNonSystemProperties;
-(BOOL)isTriggeredByRegion;
@end

