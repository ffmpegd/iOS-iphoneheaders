/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface XMLRPCResponse : NSObject {

	NSString* myBody;
	id myObject;
	BOOL isFault;

}
-(id)faultCode;
-(id)faultString;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)object;
-(id)body;
-(BOOL)isFault;
@end

