/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol CPLEngineTransportGetAssetCountsTask;
@interface CPLGetAssetCountsTask : CPLEngineSyncTask {

	id<CPLEngineTransportGetAssetCountsTask> _transportTask;

}
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(id)taskIdentifier;
@end

