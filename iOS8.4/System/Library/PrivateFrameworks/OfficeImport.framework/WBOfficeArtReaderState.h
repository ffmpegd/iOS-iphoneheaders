/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;

}

@property (assign,nonatomic) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(id)initWithClient:(Class)arg1 ;
-(WBReader *)reader;
-(void)setReader:(WBReader *)arg1 ;
-(int)currentTextType;
-(void)setCurrentTextType:(int)arg1 ;
@end
