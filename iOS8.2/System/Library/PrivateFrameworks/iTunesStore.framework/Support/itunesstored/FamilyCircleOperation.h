/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSFamilyCircle, NSString;

@interface FamilyCircleOperation : ISOperation {

	int _authenticationPromptStyle;
	SSFamilyCircle* _familyCircle;
	char _fetchITunesAccountNames;
	NSString* _userAgent;

}

@property (assign,nonatomic) int authenticationPromptStyle;                //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) char fetchITunesAccountNames;                 //@synthesize fetchITunesAccountNames=_fetchITunesAccountNames - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                           //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) SSFamilyCircle * familyCircle;              //@synthesize familyCircle=_familyCircle - In the implementation block
-(id)_familyCircleForDictionary:(id)arg1 ;
-(void)_writeCacheWithFamilyCircle:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)_cachedFamilyCircleWithAccountIdentifier:(id)arg1 ;
-(id)_cachePath;
-(NSString *)userAgent;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setAuthenticationPromptStyle:(int)arg1 ;
-(SSFamilyCircle *)familyCircle;
-(int)authenticationPromptStyle;
-(char)fetchITunesAccountNames;
-(void)setFetchITunesAccountNames:(char)arg1 ;
@end

