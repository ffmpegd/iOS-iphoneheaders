/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface OCXSStream : NSObject {

	NSMutableArray* mLevelStack;

}
-(void)dealloc;
-(id)init;
-(void)pushLevel:(int)arg1 name:(const char*)arg2 ;
-(BOOL)hasLevels;
-(int)currentContextDepth;
-(BOOL)popLevel;
-(int)currentContextChildDepth;
@end

