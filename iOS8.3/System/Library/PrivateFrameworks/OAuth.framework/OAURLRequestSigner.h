/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OACredential;

@interface OAURLRequestSigner : NSObject {

	OACredential* _credential;
	int _signatureMethod;

}

@property (assign,nonatomic) int signatureMethod;              //@synthesize signatureMethod=_signatureMethod - In the implementation block
-(Class)signer;
-(id)signedURLRequestWithRequest:(id)arg1 ;
-(id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(int)signatureMethod;
-(id)signatureMethodString;
-(id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(char)arg3 ;
-(id)oauthNonce;
-(id)timestamp:(id)arg1 ;
-(id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2 ;
-(id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3 ;
-(void)setSignatureMethod:(int)arg1 ;
-(id)initWithCredential:(id)arg1 ;
@end

