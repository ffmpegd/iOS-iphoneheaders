/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {

	NSString* _displayName;
	NSSet* _addresses;
	NSURL* _principalURL;

}

@property (nonatomic,retain) NSURL * principalURL;                //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSSet * addresses;                   //@synthesize addresses=_addresses - In the implementation block
+(id)resultFromResponseItem:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setAddresses:(NSSet *)arg1 ;
-(NSSet *)addresses;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSURL *)principalURL;
@end
