/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPGeniusMixArtworkCachedFilesManager : NSObject {

	NSObject<OS_dispatch_queue>* _cleanupQueue;

}
+(id)sharedInstance;
-(void)_mediaLibraryDisplayValuesWillChangeNotification:(id)arg1 ;
-(void)cleanupIfNecessaryWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

