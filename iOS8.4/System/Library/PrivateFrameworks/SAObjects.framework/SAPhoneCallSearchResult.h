/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, SAPersonAttribute, NSNumber;

@interface SAPhoneCallSearchResult : SADomainObject

@property (nonatomic,copy) NSDate * callTime; 
@property (nonatomic,retain) SAPersonAttribute * contact; 
@property (nonatomic,copy) NSNumber * isNew; 
-(SAPersonAttribute *)contact;
-(void)setContact:(SAPersonAttribute *)arg1 ;
-(NSNumber *)isNew;
-(id)groupIdentifier;
-(id)init;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(void)setIsNew:(NSNumber *)arg1 ;
-(NSDate *)callTime;
-(void)setCallTime:(NSDate *)arg1 ;
@end
