/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADStyleMatrix : NSObject {

	NSMutableArray* mFills;
	NSMutableArray* mStrokes;
	NSMutableArray* mEffects;
	NSMutableArray* mBgFills;

}
+(id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)bgFillAtIndex:(unsigned long long)arg1 ;
-(void)addFill:(id)arg1 ;
-(void)addStroke:(id)arg1 ;
-(void)addEffects:(id)arg1 ;
-(void)addBgFill:(id)arg1 ;
-(id)strokeAtIndex:(unsigned long long)arg1 ;
-(id)fillAtIndex:(unsigned long long)arg1 ;
-(id)effectsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fillCount;
-(id)fillAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)strokeCount;
-(id)strokeAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)effectsCount;
-(id)effectsAtIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(unsigned long long)bgFillCount;
-(void)populateWithOfficeDefaults;
@end
