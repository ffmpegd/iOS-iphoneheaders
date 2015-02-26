/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CRAddressHandler;
@class CRAddressHandlerIdentity;

@interface CRAddressHandler : NSObject {

	id<CRAddressHandler> _handler;
	CRAddressHandlerIdentity* _identity;

}

@property (nonatomic,retain) CRAddressHandlerIdentity * identity;              //@synthesize identity=_identity - In the implementation block
+(id)addressHandlerWithPrincipalClass:(Class)arg1 ;
-(id)externalAddressFromAddress:(id)arg1 kind:(id)arg2 ;
-(id)addressFromExternalAddress:(id)arg1 kind:(id)arg2 ;
-(id)syncKeyForAddress:(id)arg1 kind:(id)arg2 ;
-(id)supportedAddressKinds;
-(id)initWithPrincipalClass:(Class)arg1 ;
-(id)initWithAddressHandler:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setIdentity:(CRAddressHandlerIdentity *)arg1 ;
-(CRAddressHandlerIdentity *)identity;
@end
