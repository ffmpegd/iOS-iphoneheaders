/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSMutableArray, NSDate;

@interface PKCatalog : NSObject <NSSecureCoding> {

	NSMutableArray* _groups;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSMutableArray * groups;              //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
+(char)supportsSecureCoding;
+(id)catalogWithContentsOfURL:(id)arg1 ;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(NSMutableArray *)groups;
-(char)isEquivalentToCatalog:(id)arg1 ;
-(char)isNewerThanCatalog:(id)arg1 ;
-(id)allGroupIDs;
-(void)shuffle:(int)arg1 ;
@end
