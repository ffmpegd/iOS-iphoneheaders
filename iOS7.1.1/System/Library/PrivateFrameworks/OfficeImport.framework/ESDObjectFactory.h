/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ESDObjectFactory : NSObject
+(void)initialize;
+(void)replaceHostEshFactoryWith:(EshObjectFactory*)arg1 ;
+(void)restoreHostEshFactory;
+(EshObject*)createObjectWithType:(unsigned short)arg1 ;
+(EshObject*)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2 ;
+(void)setEshFactory:(EshObjectFactory*)arg1 ;
@end
