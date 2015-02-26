/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLArgument.h>

@class MTLStructType;

@interface MTLBufferArgument : MTLArgument {

	unsigned short _dataType;
	unsigned short _alignment;
	unsigned _dataSize;
	MTLStructType* _structType;

}
-(unsigned long long)bufferAlignment;
-(unsigned long long)bufferDataSize;
-(id)describe;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 dataSize:(unsigned long long)arg8 alignment:(unsigned long long)arg9 ;
-(void)setStructType:(id)arg1 ;
-(unsigned long long)bufferDataType;
-(id)bufferStructType;
-(void)dealloc;
-(id)description;
@end
