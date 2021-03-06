/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_data, OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, TSUZipWriterEntry, NSObject, NSError;

@interface TSUZipWriter : NSObject {

	unsigned long long _options;
	NSMutableArray* _entries;
	NSMutableDictionary* _entriesMap;
	TSUZipWriterEntry* _currentEntry;
	BOOL _calculateSize;
	BOOL _force32BitSize;
	BOOL _calculateCRC;
	unsigned short _entryTime;
	unsigned short _entryDate;
	long long _currentOffset;
	NSObject*<OS_dispatch_data> _localFileHeaderData;
	NSMutableArray* _entryDatas;
	unsigned long long _entryDataSize;
	NSObject*<OS_dispatch_queue> _writeQueue;
	long long _writtenOffset;
	NSError* _error;
	BOOL _isClosed;

}

@property (nonatomic,readonly) id<TSURandomWriteChannel> writeChannel; 
@property (nonatomic,readonly) unsigned long long archiveLength; 
-(unsigned long long)archiveLength;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned)arg4 fromReadChannel:(id)arg5 writeHandler:(/*^block*/id)arg6 ;
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<TSURandomWriteChannel>)writeChannel;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)initEntryTime;
-(void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned)arg4 ;
-(void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned)arg4 ;
-(id)localFileHeaderDataForEntry:(id)arg1 ;
-(void)addData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)flushEntryData;
-(void)writeData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleWriteError:(id)arg1 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 size:(unsigned long long)arg3 CRC:(unsigned)arg4 fromReadChannel:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)writeCentralDirectory;
-(void)writeCentralFileHeaderDataForEntry:(id)arg1 ;
-(void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3 ;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3 ;
-(void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 ;
-(void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 fromReadChannel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)encodedLengthForEntryWithName:(id)arg1 ;
-(id)init;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)finishEntry;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1 ;
-(void)writeData:(id)arg1 ;
-(void)addData:(id)arg1 ;
@end

