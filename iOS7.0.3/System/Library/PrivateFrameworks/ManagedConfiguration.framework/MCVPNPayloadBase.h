/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCVPNPayloadBase : MCPayload {

	BOOL _userNameRequired;
	BOOL _passwordRequired;
	BOOL _proxyUserNameRequired;
	BOOL _proxyPasswordRequired;
	BOOL _sharedSecretRequired;
	BOOL _pinRequired;
	NSMutableDictionary* _atom;
	NSString* _certificateUUID;
	NSString* _userNameKey;
	NSString* _passwordKey;
	NSString* _proxyUserNameKey;
	NSString* _proxyPasswordKey;
	NSString* _sharedSecretKey;
	NSString* _pinKey;
	NSString* _userName;
	NSString* _password;
	NSString* _proxyUserName;
	NSString* _proxyPassword;
	NSString* _sharedSecret;
	NSString* _pin;

}

@property (nonatomic,retain) NSMutableDictionary * atom;               //@synthesize atom=_atom - In the implementation block
@property (nonatomic,retain) NSString * certificateUUID;               //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (assign,nonatomic) BOOL userNameRequired;                    //@synthesize userNameRequired=_userNameRequired - In the implementation block
@property (assign,nonatomic) BOOL passwordRequired;                    //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (assign,nonatomic) BOOL proxyUserNameRequired;               //@synthesize proxyUserNameRequired=_proxyUserNameRequired - In the implementation block
@property (assign,nonatomic) BOOL proxyPasswordRequired;               //@synthesize proxyPasswordRequired=_proxyPasswordRequired - In the implementation block
@property (assign,nonatomic) BOOL sharedSecretRequired;                //@synthesize sharedSecretRequired=_sharedSecretRequired - In the implementation block
@property (assign,nonatomic) BOOL pinRequired;                         //@synthesize pinRequired=_pinRequired - In the implementation block
@property (nonatomic,retain) NSString * userNameKey;                   //@synthesize userNameKey=_userNameKey - In the implementation block
@property (nonatomic,retain) NSString * passwordKey;                   //@synthesize passwordKey=_passwordKey - In the implementation block
@property (nonatomic,retain) NSString * proxyUserNameKey;              //@synthesize proxyUserNameKey=_proxyUserNameKey - In the implementation block
@property (nonatomic,retain) NSString * proxyPasswordKey;              //@synthesize proxyPasswordKey=_proxyPasswordKey - In the implementation block
@property (nonatomic,retain) NSString * sharedSecretKey;               //@synthesize sharedSecretKey=_sharedSecretKey - In the implementation block
@property (nonatomic,retain) NSString * pinKey;                        //@synthesize pinKey=_pinKey - In the implementation block
@property (nonatomic,copy) NSString * userName;                        //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * proxyUserName;                   //@synthesize proxyUserName=_proxyUserName - In the implementation block
@property (nonatomic,copy) NSString * proxyPassword;                   //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,copy) NSString * sharedSecret;                    //@synthesize sharedSecret=_sharedSecret - In the implementation block
@property (nonatomic,copy) NSString * pin;                             //@synthesize pin=_pin - In the implementation block
-(id)password;
-(id)userName;
-(void)setPassword:(id)arg1 ;
-(id)pin;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)proxyPassword;
-(BOOL)passwordRequired;
-(void)setPasswordRequired:(BOOL)arg1 ;
-(id)certificateUUID;
-(void)setCertificateUUID:(id)arg1 ;
-(void)setProxyPassword:(id)arg1 ;
-(void)_validateVPNPayload:(id)arg1 ;
-(id)atom;
-(void)setAtom:(id)arg1 ;
-(BOOL)userNameRequired;
-(void)setUserNameRequired:(BOOL)arg1 ;
-(BOOL)proxyUserNameRequired;
-(void)setProxyUserNameRequired:(BOOL)arg1 ;
-(BOOL)proxyPasswordRequired;
-(void)setProxyPasswordRequired:(BOOL)arg1 ;
-(BOOL)sharedSecretRequired;
-(void)setSharedSecretRequired:(BOOL)arg1 ;
-(BOOL)pinRequired;
-(void)setPinRequired:(BOOL)arg1 ;
-(id)userNameKey;
-(void)setUserNameKey:(id)arg1 ;
-(id)passwordKey;
-(void)setPasswordKey:(id)arg1 ;
-(id)proxyUserNameKey;
-(void)setProxyUserNameKey:(id)arg1 ;
-(id)proxyPasswordKey;
-(void)setProxyPasswordKey:(id)arg1 ;
-(id)sharedSecretKey;
-(void)setSharedSecretKey:(id)arg1 ;
-(id)pinKey;
-(void)setPinKey:(id)arg1 ;
-(void)setUserName:(id)arg1 ;
-(id)proxyUserName;
-(void)setProxyUserName:(id)arg1 ;
-(id)sharedSecret;
-(void)setSharedSecret:(id)arg1 ;
-(void)setPin:(id)arg1 ;
-(void).cxx_destruct;
@end

