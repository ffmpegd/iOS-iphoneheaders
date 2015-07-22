/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSCopying.h>
#import <HealthKit/NSSecureCoding.h>

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {

	long long _status;
	long long _request;

}

@property (readonly) long long status; 
@property (readonly) long long request; 
+(BOOL)supportsSecureCoding;
-(BOOL)requestedSharing;
-(BOOL)requestedReading;
-(id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 ;
-(BOOL)isCompatibleStatus:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
@end
