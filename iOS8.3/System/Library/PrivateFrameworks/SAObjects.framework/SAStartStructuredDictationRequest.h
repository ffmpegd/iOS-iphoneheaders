/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SAStartStructuredDictationRequest : SAStartRequest

@property (nonatomic,copy) NSString * structuredDictationType; 
+(id)startStructuredDictationRequest;
+(id)startStructuredDictationRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(char)ad_needsLocation;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)structuredDictationType;
-(void)setStructuredDictationType:(NSString *)arg1 ;
@end

