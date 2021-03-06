/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSSet, VKTileKeyList, GEOTileKeyList, NSMutableArray;

@interface VKScene : NSObject <NSCopying> {

	NSSet* _tilesToRender;
	NSSet* _neighborTiles;
	VKTileKeyList* _keysInView;
	VKTileKeyList* _neighborKeys;
	GEOTileKeyList* _debugKeyList;
	bool _fullyLoaded;
	bool _mapIsOpaque;
	NSMutableArray* _rasterOverlayScenes;

}

@property (nonatomic,retain) NSSet * tilesToRender;                      //@synthesize tilesToRender=_tilesToRender - In the implementation block
@property (nonatomic,retain) NSSet * neighborTiles;                      //@synthesize neighborTiles=_neighborTiles - In the implementation block
@property (assign,nonatomic) bool fullyLoaded;                           //@synthesize fullyLoaded=_fullyLoaded - In the implementation block
@property (assign,nonatomic) bool mapIsOpaque;                           //@synthesize mapIsOpaque=_mapIsOpaque - In the implementation block
@property (nonatomic,retain) VKTileKeyList * keysInView;                 //@synthesize keysInView=_keysInView - In the implementation block
@property (nonatomic,retain) VKTileKeyList * neighborKeys;               //@synthesize neighborKeys=_neighborKeys - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * debugKeyList;              //@synthesize debugKeyList=_debugKeyList - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)reset;
-(id)tilesToRender;
-(id)neighborTiles;
-(void)setTilesToRender:(id)arg1 ;
-(void)setNeighborTiles:(id)arg1 ;
-(void)setFullyLoaded:(bool)arg1 ;
-(void)setMapIsOpaque:(bool)arg1 ;
-(id)keysInView;
-(void)setKeysInView:(id)arg1 ;
-(id)neighborKeys;
-(void)setNeighborKeys:(id)arg1 ;
-(void)setDebugKeyList:(id)arg1 ;
-(void)clearRasterOverlayScenes;
-(void)addRasterOverlayScene:(id)arg1 ;
-(bool)fullyLoaded;
-(id)debugKeyList;
-(bool)mapIsOpaque;
-(id)rasterOverlaySceneAtLevel:(unsigned long long)arg1 ;
@end

