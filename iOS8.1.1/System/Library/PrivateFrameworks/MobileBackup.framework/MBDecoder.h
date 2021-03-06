/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSData;

@interface MBDecoder : NSObject {

	NSData* _data;
	unsigned long long _offset;
	long long _mark;

}

@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long offset; 
+(id)decoderWithData:(id)arg1 ;
-(id)decodeData;
-(short)decodeInt16;
-(long long)decodeInt64;
-(int)decodeInt32;
-(char)decodeInt8;
-(void)decodeBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(double)decodeVersion;
-(id)decodeDate;
-(void)mark;
-(void)dealloc;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)reset;
-(void)close;
-(BOOL)isDone;
-(id)decodeString;
@end

