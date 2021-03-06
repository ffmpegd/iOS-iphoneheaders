/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPIdentifiedDataRepresentation.h>

@class NSString, SFUDataRepresentation;

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation> {

	long long _identifier;
	NSString* _fileStateIdentifier;
	SFUDataRepresentation* _objectData;
	set<long long, std::__1::less<long long>, std::__1::allocator<long long> >* _ownedIds;
	int _classType;
	unsigned _version;
	NSString* _relativeDataPath;

}

@property (assign,nonatomic) int classType;                          //@synthesize classType=_classType - In the implementation block
@property (assign,nonatomic) unsigned version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * relativeDataPath;              //@synthesize relativeDataPath=_relativeDataPath - In the implementation block
-(void)setFileStateIdentifier:(id)arg1 ;
-(id)fileStateIdentifier;
-(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)ownedIds;
-(BOOL)setDataRepresentation:(id)arg1 shouldCopy:(BOOL)arg2 error:(id*)arg3 ;
-(void)setOwnedIds:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)arg1 ;
-(void)setRelativeDataPath:(id)arg1 ;
-(id)relativeDataPath;
-(void)setClassType:(int)arg1 ;
-(int)classType;
-(void)dealloc;
-(long long)identifier;
-(id)initWithIdentifier:(long long)arg1 ;
-(BOOL)isLoaded;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void).cxx_destruct;
-(id)dataRepresentation;
@end

