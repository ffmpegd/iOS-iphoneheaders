/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RTFNSFont, RTFNSMutableParagraphStyle;

typedef struct {
	long long version;
	/*function pointer*/ void* retain;
	/*function pointer*/ void* release;
	/*function pointer*/ void* copyDescription;
	/*function pointer*/ void* equal;
} SCD_Struct_QL0;

typedef struct {
	/*function pointer*/ void* field1;
	/*function pointer*/ void* field2;
	/*function pointer*/ void* field3;
	/*function pointer*/ void* field4;
} SCD_Struct_RT1;

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGContext* CGContextRef;

typedef struct __CFString* CFStringRef;

typedef union {
	unsigned char thin[128];
	unsigned short fat[128];
} SCD_Union_RT6;

typedef struct NSRTFPriv {
	void reader;
	char* rtfInput;
	unsigned long long rtfInputLength;
	unsigned long long rtfInputLocation;
	unsigned long long rtfHeaderEndLocation;
	int pushedChar;
	int pushedClass;
	int pushedMajor;
	int pushedMinor;
	int pushedParam;
	BOOL pushedTextBuf[1024];
	int prevChar;
	int bumpLine;
	RTFFont fontList;
	RTFColor colorList;
	RTFStyle styleList;
	char* inputName;
	char* outputName;
	/*function pointer*/ void* ccb[5];
	/*function pointer*/ void* readHook;
	/*function pointer*/ void* msgProc;
	/*function pointer*/ void* panicProc;
	BOOL textBuf[1024];
	int textLen;
	int tokenClass;
	int major;
	int minor;
	int param;
	long long lineNum;
	long long linePos;
	int groupState;
} NSRTFPriv;

typedef struct NSAttributeInfo {
	unsigned toUniCharEncoding;
	unsigned codePageEncoding;
	RTFNSFont* font;
	double fontSize;
	double kern;
	RTFNSMutableParagraphStyle* paraStyle;
	unsigned bold : 1;
	unsigned italic : 1;
	unsigned fontIsValid : 1;
	unsigned paraStyleIsValid : 1;
	unsigned kernIsValid : 1;
	unsigned attributesSameAsBefore : 1;
	unsigned multiByteEncoding : 1;
	unsigned unicodeAlternativeLength : 3;
	unsigned tabStopType : 4;
	unsigned curAttributesNeedsCopying : 1;
	unsigned paraStyleNeedsCopying : 1;
	unsigned hasWritingDirectionAttribute : 1;
	unsigned  : 16;
} NSAttributeInfo;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/ void* zalloc;
	/*function pointer*/ void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct {
	unsigned val[8];
} SCD_Struct_QL10;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long pid;
	SCD_Struct_QL10 audit_token;
	CGRect contentFrame;
} SCD_Struct_QL13;

typedef struct {
	long long field1;
	SCD_Struct_QL10 field2;
	CGRect field3;
} SCD_Struct_QL14;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGPath* CGPathRef;
