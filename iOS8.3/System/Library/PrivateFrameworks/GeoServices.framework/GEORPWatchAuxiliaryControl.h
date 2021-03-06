/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {

	NSString* _hardwareIdentifier;
	NSString* _osBuild;
	NSString* _osVersion;

}

@property (nonatomic,readonly) char hasHardwareIdentifier; 
@property (nonatomic,retain) NSString * hardwareIdentifier;              //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,readonly) char hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                       //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) char hasOsBuild; 
@property (nonatomic,retain) NSString * osBuild;                         //@synthesize osBuild=_osBuild - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)osVersion;
-(NSString *)hardwareIdentifier;
-(NSString *)osBuild;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(char)hasHardwareIdentifier;
-(char)hasOsVersion;
-(char)hasOsBuild;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

