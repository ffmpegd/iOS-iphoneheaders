/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCGamepad.h>

@class NSData;

@interface GCGamepadSnapshot : GCGamepad {

	NSData* snapshotData;

}

@property (copy) NSData * snapshotData; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(NSData *)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
-(id)init;
@end
