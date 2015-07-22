/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface MBSFileCommitResult : PBCodable {

	NSData* _fileID;
	int _result;
	SCD_Struct_MB4 _has;

}

@property (nonatomic,readonly) char hasFileID; 
@property (nonatomic,retain) NSData * fileID;               //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) char hasResult; 
@property (assign,nonatomic) int result;                    //@synthesize result=_result - In the implementation block
-(char)hasFileID;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(int)result;
-(NSData *)fileID;
-(void)setFileID:(NSData *)arg1 ;
-(char)hasResult;
-(void)setResult:(int)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasResult:(char)arg1 ;
@end
