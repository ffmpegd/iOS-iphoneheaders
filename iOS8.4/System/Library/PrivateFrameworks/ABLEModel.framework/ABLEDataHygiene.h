/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSIndexSet;

@interface ABLEDataHygiene : NSObject {

	NSIndexSet* _validIndexSet;
	/*^block*/id _predicate;
	unsigned long long _length;

}

@property (retain) NSIndexSet * validIndexSet;              //@synthesize validIndexSet=_validIndexSet - In the implementation block
@property (readonly) id predicate;                          //@synthesize predicate=_predicate - In the implementation block
@property (assign) unsigned long long length;               //@synthesize length=_length - In the implementation block
+(id)hygieneNaN;
-(id)checkArray:(id)arg1 ;
-(void)setValidIndexSet:(NSIndexSet *)arg1 ;
-(NSIndexSet *)validIndexSet;
-(id)initWithHygieneTest:(/*^block*/id)arg1 ;
-(unsigned long long)length;
-(id)predicate;
-(void)setLength:(unsigned long long)arg1 ;
@end
