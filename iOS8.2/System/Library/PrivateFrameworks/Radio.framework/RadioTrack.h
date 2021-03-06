/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableDictionary, NSDate, NSData, RadioTrackAdInfo, RadioAudioClip, NSString, NSURL, RadioArtworkCollection, NSArray;

@interface RadioTrack : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _bestOfferDictionary;
	NSMutableDictionary* _trackDictionary;
	char _isPreorderAlbum;
	NSDate* _expirationDate;

}

@property (nonatomic,copy,readonly) NSData * adData; 
@property (nonatomic,readonly) RadioTrackAdInfo * adInfo; 
@property (nonatomic,readonly) RadioAudioClip * afterPromoAudioClip; 
@property (nonatomic,copy,readonly) NSString * album; 
@property (nonatomic,copy,readonly) NSString * albumBuyButtonText; 
@property (nonatomic,readonly) int albumBuyButtonType; 
@property (nonatomic,readonly) long long albumID; 
@property (nonatomic,copy,readonly) NSURL * albumURL; 
@property (nonatomic,copy,readonly) NSString * artist; 
@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection; 
@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,readonly) RadioAudioClip * beforePromoAudioClip; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,readonly) long long dateFetched; 
@property (nonatomic,copy,readonly) NSString * debugMessage; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain) NSDate * expirationDate;                                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * feedbackDictionaryRepresentation; 
@property (nonatomic,readonly) char isExplicit; 
@property (nonatomic,readonly) char isPreorderAlbum;                                              //@synthesize isPreorderAlbum=_isPreorderAlbum - In the implementation block
@property (assign,nonatomic) char inWishList; 
@property (nonatomic,readonly) int likeStatus; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long shuffleSeed; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) long long storeID; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSDictionary * trackInfo; 
@property (nonatomic,copy,readonly) NSDictionary * trackDictionary;                               //@synthesize trackDictionary=_trackDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * metadataDictionary; 
+(char)supportsSecureCoding;
-(NSString *)copyrightText;
-(NSURL *)previewURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(double)duration;
-(NSString *)title;
-(double)startTime;
-(void)setMetadataDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)metadataDictionary;
-(NSString *)artist;
-(long long)storeID;
-(NSArray *)assets;
-(NSString *)album;
-(void)_performTransactionAndWait:(/*^block*/id)arg1 ;
-(NSDate *)expirationDate;
-(id)initWithTrackDictionary:(id)arg1 ;
-(NSDictionary *)trackDictionary;
-(id)_valueOfClass:(Class)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3 ;
-(id)_valueRespondingToSelector:(SEL)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3 ;
-(id)_valueOfClass:(Class)arg1 forAssetInfoKey:(id)arg2 ;
-(void)_performWriteTransaction:(/*^block*/id)arg1 ;
-(NSURL *)albumURL;
-(long long)dateFetched;
-(NSString *)debugMessage;
-(void)setInWishList:(char)arg1 ;
-(long long)shuffleSeed;
-(void)_performTransaction:(/*^block*/id)arg1 ;
-(void)_performWriteTransactionAndWait:(/*^block*/id)arg1 ;
-(char)isPreorderAlbum;
-(RadioArtworkCollection *)artworkCollection;
-(int)likeStatus;
-(char)inWishList;
-(long long)albumID;
-(char)isExplicit;
-(int)albumBuyButtonType;
-(NSString *)albumBuyButtonText;
-(RadioAudioClip *)beforePromoAudioClip;
-(RadioAudioClip *)afterPromoAudioClip;
-(RadioTrackAdInfo *)adInfo;
-(NSData *)adData;
-(NSDictionary *)feedbackDictionaryRepresentation;
-(NSArray *)offers;
-(id)_offers;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDictionary *)trackInfo;
@end

