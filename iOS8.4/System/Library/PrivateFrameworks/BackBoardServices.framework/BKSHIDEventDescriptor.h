/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/NSSecureCoding.h>

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding> {

	unsigned _hidEventType;

}

@property (readonly) unsigned hidEventType;              //@synthesize hidEventType=_hidEventType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorWithEventType:(unsigned)arg1 ;
+(id)reusableDescriptorWithEventType:(unsigned)arg1 ;
+(id)reusableVendorDefinedDescriptorWithPage:(unsigned)arg1 usage:(unsigned)arg2 ;
+(id)reusableKeyboardDescriptorWithPage:(unsigned)arg1 usage:(unsigned)arg2 ;
-(id)initWithEventType:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)hidEventType;
-(BOOL)describes:(id)arg1 ;
@end
