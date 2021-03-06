/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector, AVAssetCache, NSURL, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;
	AVAssetCache* _assetCache;
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
	NSURL* _downloadDestinationURL;
	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _keysAwaitingCompletion;
	int _status;
	long _basicInspectionFailureCode;
	NSURL* _URL;

}

@property (nonatomic,readonly) AVAssetCache * assetCache;                                          //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;                  //@synthesize shouldMatchDataInCacheByURLPathComponentOnly=_shouldMatchDataInCacheByURLPathComponentOnly - In the implementation block
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;              //@synthesize shouldMatchDataInCacheByURLWithoutQueryComponent=_shouldMatchDataInCacheByURLWithoutQueryComponent - In the implementation block
@property (nonatomic,readonly) NSURL * downloadDestinationURL;                                     //@synthesize downloadDestinationURL=_downloadDestinationURL - In the implementation block
-(void)cancelLoading;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)assetInspector;
-(id)chapterGroupInfo;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)downloadDestinationURL;
-(int)_status;
-(void)_setStatus:(int)arg1 figErrorCode:(long)arg2 ;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(int)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1 ;
-(BOOL)_inspectionRequiresAFormatReader;
-(BOOL)_updateStatusWhileMutexLocked:(int)arg1 figErrorCode:(long)arg2 ;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg1 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(BOOL)_providesAccurateTiming;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
-(id)lyrics;
-(id)assetCache;
-(BOOL)_isStreaming;
-(BOOL)isPlayable;
-(void)dealloc;
-(SCD_Struct_CM4)duration;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(BOOL)hasProtectedContent;
-(BOOL)isReadable;
-(void)finalize;
@end

