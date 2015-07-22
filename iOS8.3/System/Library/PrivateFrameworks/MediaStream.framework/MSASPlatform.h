/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:28:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSASPlatform <NSObject>
@optional
-(char)shouldEnableNewFeatures;
-(char)personIDEnabledForAlbumSharing:(id)arg1;
-(char)shouldDownloadEarliestPhotosFirst;
-(void)setSuppressCellular:(char)arg1;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
-(int)MMCSConcurrentConnectionsCount;
-(char)deviceHasEnoughDiskSpaceRemainingToOperate;
-(id)metadataSocketOptionsForPersonID:(id)arg1;

@required
-(char)shouldLogAtLevel:(int)arg1;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
-(id)pathAlbumSharingDir;
-(Class)pluginClass;
-(id)personIDsEnabledForAlbumSharing;
-(char)MSASIsAllowedToTransferMetadata;
-(char)MSASIsAllowedToUploadAssets;
-(char)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
-(id)pushTokenForPersonID:(id)arg1;
-(id)baseSharingURLForPersonID:(id)arg1;
-(char)personIDUsesProductionPushEnvironment:(id)arg1;
-(id)albumSharingDaemon;

@end
