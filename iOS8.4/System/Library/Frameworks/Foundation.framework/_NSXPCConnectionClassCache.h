/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	int _lock;
	NSMutableSet* _cache;

}
-(BOOL)containsClass:(Class)arg1 ;
-(void)addClass:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clear;
@end

