/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:22:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject {

	renditionkeytoken originalKey[16];
	NSArray* orderedNonZeroFlexibleAttributes;
	unsigned flexAttributesCount;
	renditionkeytoken testKey[16];
	unsigned chooseCount;
	unsigned subchooseCount;

}
-(void)dealloc;
-(unsigned)_attributeToBumpIndex;
-(char)_bumpTestKeyAttributeIndex:(unsigned)arg1 ;
-(id)_nonZeroFlexibleAttributesInKey:(const renditionkeytoken*)arg1 ;
-(void)_bumpTestKey;
-(id)initWithRenditionKey:(const renditionkeytoken*)arg1 ;
-(renditionkeytoken*)nextKey;
@end

