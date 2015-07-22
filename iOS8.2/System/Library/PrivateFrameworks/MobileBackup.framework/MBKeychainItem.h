/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSData;

@interface MBKeychainItem : NSObject {

	NSMutableDictionary* _attributes;

}

@property (nonatomic,readonly) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * serviceName; 
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSString * accessGroupName; 
@property (nonatomic,retain) NSString * accessibilityType; 
@property (nonatomic,retain) NSData * valueData; 
+(id)keychainItemWithAttributes:(id)arg1 ;
-(NSString *)accessGroupName;
-(NSString *)accessibilityType;
-(void)setAccessGroupName:(NSString *)arg1 ;
-(void)setAccessibilityType:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSMutableDictionary *)attributes;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSData *)valueData;
-(void)setValueData:(NSData *)arg1 ;
-(NSString *)accountName;
-(id)initWithAttributes:(id)arg1 ;
@end
