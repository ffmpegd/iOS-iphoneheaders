/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class RTFNSFont, RTFNSMutableParagraphStyle;

typedef struct {
	int version;
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
	float width;
	float height;
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
	unsigned rtfInputLength;
	unsigned rtfInputLocation;
	unsigned rtfHeaderEndLocation;
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
	int lineNum;
	int linePos;
	int groupState;
} NSRTFPriv;

typedef struct NSAttributeInfo {
	unsigned toUniCharEncoding;
	unsigned codePageEncoding;
	RTFNSFont* font;
	float fontSize;
	float kern;
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
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/ void* zalloc;
	/*function pointer*/ void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct {
	unsigned val[8];
} SCD_Struct_QL10;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int pid;
	SCD_Struct_QL10 audit_token;
	CGRect contentFrame;
} SCD_Struct_QL13;

typedef struct {
	int field1;
	SCD_Struct_QL10 field2;
	CGRect field3;
} SCD_Struct_QL14;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGPath* CGPathRef;

