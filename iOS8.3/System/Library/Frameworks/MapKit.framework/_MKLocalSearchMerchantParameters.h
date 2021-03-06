/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:14 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSCopying.h>

@class NSString, NSDate, CLLocation;

@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying> {

	NSString* _merchantCode;
	NSString* _rawMerchantCode;
	NSString* _paymentNetwork;
	NSDate* _transactionDate;
	CLLocation* _transactionLocation;

}

@property (nonatomic,copy) NSString * merchantCode;                         //@synthesize merchantCode=_merchantCode - In the implementation block
@property (nonatomic,copy) NSString * rawMerchantCode;                      //@synthesize rawMerchantCode=_rawMerchantCode - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                       //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                      //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,retain) CLLocation * transactionLocation;              //@synthesize transactionLocation=_transactionLocation - In the implementation block
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setTransactionLocation:(CLLocation *)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
-(NSString *)merchantCode;
-(CLLocation *)transactionLocation;
-(NSString *)rawMerchantCode;
@end

