/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface ESDObjectFactory : NSObject {

	EshObjectFactory* eshObjectFactory;
	NSMutableArray* eshObjectFactoryStack;

}
+(id)threadLocalFactory;
-(void)dealloc;
-(id)init;
-(EshObject*)createObjectWithType:(unsigned short)arg1 ;
-(EshObject*)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2 ;
-(void)replaceHostEshFactoryWith:(EshObjectFactory*)arg1 ;
-(void)restoreHostEshFactory;
-(void)setEshFactory:(EshObjectFactory*)arg1 ;
@end
