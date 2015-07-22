/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AccountSettingsUIAccount;
@class ASSBasicAccount, ASSDeviceLocalAccount;

@interface AccountSettingsUISyncDataController : NSObject {

	ASSBasicAccount*<AccountSettingsUIAccount> _syncAccount;
	ASSDeviceLocalAccount* _deviceLocalAccount;
	BOOL _shouldSaveDeviceLocalAccount;

}

@property (nonatomic,retain) ASSBasicAccount*<AccountSettingsUIAccount> syncAccount;              //@synthesize syncAccount=_syncAccount - In the implementation block
@property (nonatomic,readonly) BOOL shouldSaveDeviceLocalAccount;                                 //@synthesize shouldSaveDeviceLocalAccount=_shouldSaveDeviceLocalAccount - In the implementation block
@property (nonatomic,readonly) ASSDeviceLocalAccount * deviceLocalAccount; 
-(void)saveDeviceLocalAccount;
-(id)_syncableChildAccountIDOfClass:(id)arg1 ;
-(void)removeLocalDataStoreForDataclass:(id)arg1 ;
-(BOOL)shouldSaveDeviceLocalAccount;
-(void)mergeLocalDataForDataclass:(id)arg1 ;
-(ASSDeviceLocalAccount *)deviceLocalAccount;
-(void)createLocalDataSourceForDataclass:(id)arg1 ;
-(void)showLocalStoreIfAppropriateForDataclass:(id)arg1 ;
-(ASSBasicAccount*<AccountSettingsUIAccount>)syncAccount;
-(void)mergeSyncDataForDataclass:(id)arg1 ;
-(void)removeDataStoreForDataclass:(id)arg1 ;
-(void)setSyncAccount:(ASSBasicAccount*<AccountSettingsUIAccount>)arg1 ;
-(id)_syncActionsAccount;
-(void*)createDeviceLocalSyncDataSourceForDataclass:(id)arg1 ;
-(void*)_createMobileMeDataSourceForDataclass:(id)arg1 ;
-(void)clearAnchorsForLocalDataclass:(id)arg1 ;
-(void)hideLocalStoreForDataclass:(id)arg1 ;
-(void)dealloc;
@end
