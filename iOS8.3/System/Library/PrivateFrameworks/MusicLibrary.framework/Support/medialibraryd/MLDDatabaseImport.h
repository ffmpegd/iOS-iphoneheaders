/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:44:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3MusicLibrary, MLDMediaLibraryWriter, MLDClient, NSData, NSFileHandle, NSDictionary;

@interface MLDDatabaseImport : NSObject {

	ML3MusicLibrary* _library;
	MLDMediaLibraryWriter* _writer;
	MLDClient* _client;
	NSData* _trackData;
	NSData* _playlistData;
	NSFileHandle* _fileHandle;
	NSDictionary* _options;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                   //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) MLDMediaLibraryWriter * writer;              //@synthesize writer=_writer - In the implementation block
@property (nonatomic,readonly) MLDClient * client;                          //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSData * trackData;                            //@synthesize trackData=_trackData - In the implementation block
@property (nonatomic,retain) NSData * playlistData;                         //@synthesize playlistData=_playlistData - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;                     //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                          //@synthesize options=_options - In the implementation block
-(NSData *)trackData;
-(NSData *)playlistData;
-(id)initWithLibrary:(id)arg1 writer:(id)arg2 client:(id)arg3 ;
-(void)setTrackData:(NSData *)arg1 ;
-(void)setPlaylistData:(NSData *)arg1 ;
-(id)init;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(NSFileHandle *)fileHandle;
-(ML3MusicLibrary *)library;
-(MLDMediaLibraryWriter *)writer;
-(MLDClient *)client;
@end

