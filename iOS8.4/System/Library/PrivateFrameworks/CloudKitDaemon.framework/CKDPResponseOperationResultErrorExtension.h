/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {

	NSString* _extensionName;
	unsigned _typeCode;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasExtensionName; 
@property (nonatomic,retain) NSString * extensionName;              //@synthesize extensionName=_extensionName - In the implementation block
@property (assign,nonatomic) BOOL hasTypeCode; 
@property (assign,nonatomic) unsigned typeCode;                     //@synthesize typeCode=_typeCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTypeCode;
-(NSString *)extensionName;
-(unsigned)typeCode;
-(void)setExtensionName:(NSString *)arg1 ;
-(BOOL)hasExtensionName;
-(void)setTypeCode:(unsigned)arg1 ;
-(void)setHasTypeCode:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

