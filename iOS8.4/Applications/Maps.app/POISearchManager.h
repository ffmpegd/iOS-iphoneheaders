/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/GEOResourceManifestTileGroupObserver.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString;

@interface POISearchManager : NSObject <GEOResourceManifestTileGroupObserver> {

	NSCache* _poiCache;
	NSMapTable* _completionHandlers;
	NSMutableDictionary* _canShowActivityIndicatorForBusinessIDs;
	NSMutableDictionary* _loadingForBusinessIDs;
	NSMutableDictionary* _loadingTokensForBusinessIDs;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)searchResultForBusinessID:(unsigned long long)arg1 ;
-(void)searchForBusinessID:(unsigned long long)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)didReceiveRAPNotification;
-(void)setCanShowActivityIndicator:(char)arg1 forBusinessID:(unsigned long long)arg2 ;
-(void)_updateActivityIndicatorForBusinessID:(unsigned long long)arg1 ;
-(void)_cacheAndHandleSearchResult:(id)arg1 businessID:(unsigned long long)arg2 completionHandlers:(id)arg3 ;
-(void)_setLoading:(char)arg1 forBusinessID:(unsigned long long)arg2 ;
-(void)searchForBusinessID:(unsigned long long)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 searchResultType:(unsigned)arg4 ;
-(id)init;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end
