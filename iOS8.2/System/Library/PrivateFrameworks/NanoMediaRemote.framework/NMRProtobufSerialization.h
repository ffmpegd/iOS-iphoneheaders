/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface NMRProtobufSerialization : NSObject {

	NSDictionary* _protobufKeyToDictionaryKeyMapping;
	NSDictionary* _dictionaryKeyToProtobufKeyMapping;
	Class _protobufClass;
	/*^block*/id _dictionaryValueToProtobufValueTransformer;
	/*^block*/id _protobufValueToDictionaryValueTransformer;

}

@property (nonatomic,copy) NSDictionary * dictionaryKeyToProtobufKeyMapping;              //@synthesize dictionaryKeyToProtobufKeyMapping=_dictionaryKeyToProtobufKeyMapping - In the implementation block
@property (nonatomic,retain) Class protobufClass;                                         //@synthesize protobufClass=_protobufClass - In the implementation block
@property (nonatomic,copy) id dictionaryValueToProtobufValueTransformer;                  //@synthesize dictionaryValueToProtobufValueTransformer=_dictionaryValueToProtobufValueTransformer - In the implementation block
@property (nonatomic,copy) id protobufValueToDictionaryValueTransformer;                  //@synthesize protobufValueToDictionaryValueTransformer=_protobufValueToDictionaryValueTransformer - In the implementation block
-(id)protobufFromDictionary:(id)arg1 ;
-(id)dictionaryFromProtobuf:(id)arg1 ;
-(void)setDictionaryKeyToProtobufKeyMapping:(NSDictionary *)arg1 ;
-(void)setProtobufClass:(Class)arg1 ;
-(void)setDictionaryValueToProtobufValueTransformer:(id)arg1 ;
-(void)setProtobufValueToDictionaryValueTransformer:(id)arg1 ;
-(id)protobufDataFromDictionary:(id)arg1 ;
-(id)dictionaryFromProtobufData:(id)arg1 ;
-(NSDictionary *)dictionaryKeyToProtobufKeyMapping;
-(Class)protobufClass;
-(id)dictionaryValueToProtobufValueTransformer;
-(id)protobufValueToDictionaryValueTransformer;
@end

