/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <OTACrashCopier/OTACrashCopier-Structs.h>
@interface OTALogArchive : NSObject {

	z_stream_s* _strm;
	char* _in;
	char* _out;

}
-(id)copyDeflatedDataFromStream:(_sFILE*)arg1 ;
-(void)dealloc;
-(id)init;
@end
