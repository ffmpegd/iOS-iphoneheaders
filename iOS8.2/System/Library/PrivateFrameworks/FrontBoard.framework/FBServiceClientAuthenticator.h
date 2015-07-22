/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class NSString;

@interface FBServiceClientAuthenticator : NSObject {

	NSString* _entitlement;
	unsigned _credentials;

}
+(id)sharedSystemClientAuthenticator;
+(id)sharedUIAppClientAuthenticator;
+(id)sharedForegroundUIAppClientAuthenticator;
-(id)init;
-(id)initWithCredentials:(unsigned)arg1 ;
-(id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned)arg2 ;
-(int)authenticateAuditToken:(SCD_Struct_FB4*)arg1 forEntitlement:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(int)authenticateConnection:(id)arg1 forEntitlement:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(int)_authenticateAuditToken:(SCD_Struct_FB4*)arg1 connection:(id)arg2 entitlement:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(id)initWithEntitlement:(id)arg1 ;
-(int)authenticateAuditToken:(SCD_Struct_FB4*)arg1 withResult:(/*^block*/id)arg2 ;
-(int)authenticateConnection:(id)arg1 withResult:(/*^block*/id)arg2 ;
@end
