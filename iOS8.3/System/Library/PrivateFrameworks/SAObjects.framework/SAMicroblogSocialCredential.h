/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:30 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * accessToken; 
@property (nonatomic,copy) NSString * personalizationPermission; 
@property (nonatomic,copy) NSString * socialNetwork; 
@property (nonatomic,copy) NSString * tokenSecret; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialCredential;
+(id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
-(id)encodedClassName;
-(NSString *)socialNetwork;
-(void)setSocialNetwork:(NSString *)arg1 ;
-(NSString *)personalizationPermission;
-(void)setPersonalizationPermission:(NSString *)arg1 ;
-(NSString *)tokenSecret;
-(void)setTokenSecret:(NSString *)arg1 ;
@end
