/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString, NSMutableDictionary;

@interface TPSAppController : NSObject {

	unsigned _supportedInterfaceOrientations;
	char _useStackUI;
	char _phoneUI;
	char _zoomMode;
	char _disableAutoplay;
	int _deviceSize;
	int _deviceSpeed;
	NSURL* _baseURL;
	NSString* _screenSizeConfigName;
	NSString* _screenScaleConfigName;
	NSString* _launchedFromNotificationForTipIdentifier;
	NSMutableDictionary* _tipLikedDictionary;

}

@property (assign,nonatomic) char useStackUI;                                                  //@synthesize useStackUI=_useStackUI - In the implementation block
@property (getter=isPhoneUI,nonatomic,readonly) char phoneUI;                                  //@synthesize phoneUI=_phoneUI - In the implementation block
@property (nonatomic,readonly) char zoomMode;                                                  //@synthesize zoomMode=_zoomMode - In the implementation block
@property (nonatomic,readonly) char disableAutoplay;                                           //@synthesize disableAutoplay=_disableAutoplay - In the implementation block
@property (nonatomic,readonly) int deviceSize;                                                 //@synthesize deviceSize=_deviceSize - In the implementation block
@property (nonatomic,readonly) int deviceSpeed;                                                //@synthesize deviceSpeed=_deviceSpeed - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSString * appName; 
@property (nonatomic,retain) NSString * screenSizeConfigName;                                  //@synthesize screenSizeConfigName=_screenSizeConfigName - In the implementation block
@property (nonatomic,retain) NSString * screenScaleConfigName;                                 //@synthesize screenScaleConfigName=_screenScaleConfigName - In the implementation block
@property (nonatomic,retain) NSString * launchedFromNotificationForTipIdentifier;              //@synthesize launchedFromNotificationForTipIdentifier=_launchedFromNotificationForTipIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tipLikedDictionary;                         //@synthesize tipLikedDictionary=_tipLikedDictionary - In the implementation block
+(void)incrementNetworkActivityIndicatorVisible;
+(void)decrementNetworkActivityIndicatorVisible;
+(id)sharedInstance;
-(int)deviceSpeed;
-(char)isPhoneUI;
-(char)useStackUI;
-(void)updateTip:(id)arg1 withLike:(char)arg2 ;
-(char)likeStateForTip:(id)arg1 ;
-(void)analyticsIncreaseCountForKey:(id)arg1 tip:(id)arg2 ;
-(NSString *)launchedFromNotificationForTipIdentifier;
-(int)deviceSize;
-(void)setLaunchedFromNotificationForTipIdentifier:(NSString *)arg1 ;
-(NSString *)screenSizeConfigName;
-(NSString *)screenScaleConfigName;
-(char)zoomMode;
-(void)analyticsSetValue:(int)arg1 forKey:(id)arg2 ;
-(void)analyticsIncreaseCountForKey:(id)arg1 tip:(id)arg2 additionalParameter:(id)arg3 ;
-(void)analyticsIncreaseCountForKey:(id)arg1 ;
-(id)analyticsNormalizedKeyForKey:(id)arg1 ;
-(NSMutableDictionary *)tipLikedDictionary;
-(void)analyticsSetValue:(int)arg1 forKey:(id)arg2 tip:(id)arg3 ;
-(id)activityViewControllerForTip:(id)arg1 ;
-(void)setUseStackUI:(char)arg1 ;
-(char)disableAutoplay;
-(void)setScreenSizeConfigName:(NSString *)arg1 ;
-(void)setScreenScaleConfigName:(NSString *)arg1 ;
-(void)setTipLikedDictionary:(NSMutableDictionary *)arg1 ;
-(NSString *)appName;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

