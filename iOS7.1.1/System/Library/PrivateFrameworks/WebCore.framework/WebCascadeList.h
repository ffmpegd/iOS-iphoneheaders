/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface WebCascadeList : NSArray {

	const Font* _font;
	int _character;
	unsigned long long _count;
	Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow>* _fontDescriptors;

}
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)initWithFont:(const Font*)arg1 character:(int)arg2 ;
@end
