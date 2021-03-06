/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SetupAssistantBundles/SBSyncServiceSetupAssistantBundle.bundle/SBSyncServiceSetupAssistantBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AASetupAssistantDelegateService
@optional
-(void)setupOperationFailed;
-(BOOL)canAutoSetupMailAccount:(id)arg1;
-(BOOL)needSetupForMailAccount:(id)arg1;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 handler:(/*^block*/id)arg3;
-(void)verifyAccountWithAppleID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)setCloudServicesEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2;
-(void)setDeviceLocatorEnabled:(BOOL)arg1;
-(void)setBackupEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2;
-(void)completeEnablingCloudServicesWithHandler:(/*^block*/id)arg1;

@required
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2;

@end

