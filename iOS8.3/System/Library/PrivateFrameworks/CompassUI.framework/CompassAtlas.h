/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:09:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CompassUI/CompassUI-Structs.h>
@class CompassAtlasManifest;

@interface CompassAtlas : NSObject {

	unsigned _texName;
	CompassAtlasManifest* _manifest;
	CGSize _size;

}
-(void)bind;
-(void)dealloc;
-(id)initWithImageData:(char*)arg1 manifest:(id)arg2 ;
-(SCD_Struct_Co12)metadataForImageNamed:(id)arg1 ;
@end

