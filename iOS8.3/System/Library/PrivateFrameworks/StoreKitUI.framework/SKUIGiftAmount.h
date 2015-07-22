/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:15 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>

@class NSString, NSNumber;

@interface SKUIGiftAmount : NSObject <NSCopying> {

	NSString* _displayLabel;
	NSString* _partNumber;
	NSNumber* _value;

}

@property (nonatomic,copy) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,copy) NSString * partNumber;                //@synthesize partNumber=_partNumber - In the implementation block
@property (nonatomic,copy) NSNumber * value;                     //@synthesize value=_value - In the implementation block
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)partNumber;
-(id)HTTPBodyDictionary;
-(NSString *)displayLabel;
-(id)initWithAmountDictionary:(id)arg1 ;
-(void)setDisplayLabel:(NSString *)arg1 ;
-(void)setPartNumber:(NSString *)arg1 ;
@end
