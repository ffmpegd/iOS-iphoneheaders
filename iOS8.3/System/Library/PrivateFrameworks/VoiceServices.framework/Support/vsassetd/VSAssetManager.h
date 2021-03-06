/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:07:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/vsassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vsassetd/VSAssetDelegate.h>

@class VSAsset, NSMutableSet, NSString;

@interface VSAssetManager : NSObject <VSAssetDelegate> {

	VSAsset* _currentAsset;
	VSAsset* _nextAsset;
	NSMutableSet* _installedAssets;
	NSMutableSet* _userDeletedAssets;
	char _assetWasInstalled;
	char _nextRefreshForced;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)languageChanged;
-(void)checkForUpdates:(char)arg1 ;
-(void)cleanupAssets:(char)arg1 ;
-(int)assetStatus:(id)arg1 ;
-(void)downloadStatus:(id)arg1 progress:(float*)arg2 size:(long long*)arg3 ;
-(id)currentDownloadingAsset;
-(char)isCheckingForUpdates;
-(void)assetRefreshDidFinish:(id)arg1 successfully:(char)arg2 wasInstalled:(char)arg3 ;
-(void)assetDidPurge:(id)arg1 ;
-(id)_loadInstalledAssetsFromUserPreferences;
-(id)_loadUserDeletedAssetsFromPreferences;
-(char)_readNextRefreshForcedFromUserPreferences;
-(char)_shouldCheckForUpdatesForAsset:(id)arg1 ;
-(void)_setAndSaveNextRefreshForced:(char)arg1 ;
-(char)_scheduleCurrentAssetRefreshIfNecessary;
-(void)_updateInstalledAssetsWithAssetRemoved:(id)arg1 ;
-(void)_checkForUpdates:(char)arg1 startDate:(id)arg2 ;
-(void)_saveInstalledAssets;
-(void)_saveUserDeletedAssets;
-(void)_saveNextRefreshForced;
-(id)_assetForLanguageCode:(id)arg1 ;
-(void)_removeAssetFromQueue:(id)arg1 ;
-(void)_updateInstalledAssetsWithAssetAdded:(id)arg1 ;
-(void)_refreshNow;
-(id)_initShared;
-(void)removeAsset:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_enqueueAsset:(id)arg1 ;
-(void)downloadAsset:(id)arg1 ;
@end

