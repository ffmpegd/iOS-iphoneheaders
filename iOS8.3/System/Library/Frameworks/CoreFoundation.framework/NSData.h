/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:51 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/CKRecordValue.h>
#import <CoreFoundation/PQLValuable.h>
#import <CoreFoundation/ASParsingLeafNode.h>

@class NSString;

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, CKRecordValue, PQLValuable, ASParsingLeafNode>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * SHA1Data; 
@property (nonatomic,readonly) NSString * SHA1HexString; 
@property (readonly) unsigned length; 
@property (readonly) const void* bytes; 
+(id)dataFromBase64String:(id)arg1 ;
+(char)expectsContent;
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)dataWithSockAddr:(const sockaddr*)arg1 ;
+(id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1 ;
+(id)pl_dataWithMappedContentsOfFileHandle:(id)arg1 ;
+(id)newFromSqliteValue:(MemRef)arg1 ;
+(id)dataWithHexString:(id)arg1 ;
+(id)dataWithHexString:(id)arg1 stringIsUppercase:(char)arg2 ;
+(id)CKDataWithHexString:(id)arg1 stringIsUppercase:(char)arg2 ;
+(id)CKDataWithHexString:(id)arg1 ;
+(id)CKDataFromBase64URLSafeString:(id)arg1 ;
+(id)mappedDataWithContentsOfTemporaryFile:(id)arg1 error:(id*)arg2 ;
+(id)__imDataWithHexString:(id)arg1 ;
+(id)__imDataWithRandomBytes:(unsigned)arg1 ;
+(id)MCDataWithHexString:(id)arg1 ;
+(id)MCDataWithCFData:(CFDataRef)arg1 ;
+(id)dataWithContentsOfMappedFile:(id)arg1 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
+(char)supportsSecureCoding;
+(id)data;
+(id)dataWithContentsOfFile:(id)arg1 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 ;
+(id)dataWithContentsOfFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
+(id)dataWithContentsOfURL:(id)arg1 ;
+(id)dataWithData:(id)arg1 ;
-(id)safari_dataByCompressingData;
-(char)safari_dataAppearsToBeCompressed;
-(id)safari_dataByDecompressingData;
-(void)hk_enumerateUUIDsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)hk_countOfUUIDs;
-(id)base64EncodedString;
-(id)afui_dataByCompressingWithGzip;
-(id)hexRepresentationWithSpaces_AS:(char)arg1 ;
-(id)SHA256Hash;
-(id)hexEncoding;
-(id)SHA1Hash;
-(id)fileSafeBase64Encoding;
-(id)shortDescription;
-(id)digestForSubCal;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(int)parsingState;
-(id)initForLengthTokenOfLength:(unsigned)arg1 ;
-(id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4 ;
-(id)_gkBase64EncodedString;
-(id)initWithBase64EncodedString_gk:(id)arg1 ;
-(id)_gkSHA1HashString;
-(id)_gkMD5HashString;
-(id)_gkSHA1HashData;
-(id)_gkMD5HashData;
-(sockaddr*)sockAddr;
-(char)CDXTicketIsReflected;
-(char)CDXTicketIsHolePunch;
-(unsigned)CDXTicketRevision;
-(int)CDXTicketPID;
-(int)CDXTicketPCNT;
-(id)CDXTicketExpirationDate;
-(const CDXTicket*)CDXTicket;
-(CDXTicket*)mutableCDXTicket;
-(unsigned long long)CDXTicketSID;
-(char)CDXTicketIsStub;
-(id)CDXTicketTrimmed;
-(char)CDXTicketWellFormed;
-(char)CDXTicketIsRelatedToTicket:(id)arg1 ;
-(id)cr_md5DigestHexString;
-(unsigned)pl_advisoryLength;
-(void)pl_adviceWillNeed;
-(void)pl_adviceDoNotNeed;
-(id)hexString;
-(id)cplSyncAnchorSimpleDescription;
-(id)cplSyncAnchorDescription;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)MSInitWithBase64Encoding:(id)arg1 ;
-(id)MSBase64Encoding;
-(id)MSHexString;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)hexString;
-(id)lowercaseHexStringWithoutSpaces;
-(id)uppercaseHexStringWithoutSpaces;
-(id)aa_hexString;
-(id)CKUppercaseHexStringWithoutSpaces;
-(id)CKLowercaseHexStringWithoutSpaces;
-(id)CKBase64URLSafeString;
-(id)CKHexString;
-(id)mf_MD5Digest;
-(NSRange)mf_rangeOfByteFromSet:(id)arg1 range:(NSRange)arg2 ;
-(id)mf_subdataToIndex:(unsigned)arg1 ;
-(id)mf_subdataFromIndex:(unsigned)arg1 ;
-(NSRange)mf_rangeOfByteFromSet:(id)arg1 ;
-(NSRange)mf_rangeOfCString:(const char*)arg1 ;
-(NSRange)mf_rangeOfCString:(const char*)arg1 options:(unsigned)arg2 ;
-(id)mf_dataByConvertingUnixNewlinesToNetwork;
-(id)mf_locationsOfUnixNewlinesNeedingConversion;
-(id)mf_copyHexString;
-(NSRange)mf_rangeOfRFC822HeaderData;
-(NSRange)mf_rangeOfCString:(const char*)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(NSRange)mf_rangeOfData:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)mf_decodeQuotedPrintableForText:(char)arg1 ;
-(id)mf_decodeUuencoded;
-(id)mf_decodeBase64InRange:(NSRange*)arg1 ;
-(id)mf_encodeBase64HeaderData;
-(id)mf_encodeModifiedBase64;
-(id)mf_decodeModifiedBase64;
-(id)mf_encodeBase64WithoutLineBreaks;
-(id)mf_decodeBase64;
-(id)mf_encodeBase64;
-(char)mf_immutable;
-(id)mf_subdataWithRange:(NSRange)arg1 ;
-(id)decompressedGzipData;
-(id)decompressedGzipDataUsingTemporaryFile;
-(id)ml_stringValueForSQL;
-(void)ml_bindToSQLiteStatement:(sqlite3_stmtRef)arg1 atPosition:(int)arg2 ;
-(id)_FTOptionallyDecompressData;
-(id)_FTDecompressData;
-(id)_FTCopyGzippedData;
-(id)_FTStringFromBaseData;
-(id)abDecodedUTF7;
-(id)abStringAtRange:(NSRange)arg1 inEncoding:(unsigned)arg2 ;
-(char)abIsUTF16EntourageVCard;
-(id)abEncodeVCardBase64DataWithInitialLength:(unsigned)arg1 ;
-(id)abDecodeVCardBase64;
-(id)_geo_newXPCData;
-(id)_geo_uppercaseMD5HashString;
-(void)_ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(id)subdataWithRangeNoCopy:(NSRange)arg1 ;
-(NSData *)SHA1Data;
-(NSString *)SHA1HexString;
-(id)__imHexStringOfBytes:(char*)arg1 withLength:(unsigned)arg2 ;
-(id)__imHexString;
-(char)_web_isCaseInsensitiveEqualToCString:(const char*)arg1 ;
-(id)_webkit_parseRFC822HeaderFields;
-(char)_web_startsWithBlankLine;
-(int)_web_locationAfterFirstBlankLine;
-(id)_webkit_guessedMIMETypeForXML;
-(id)_webkit_guessedMIMEType;
-(id)MCHexString;
-(id)MCBase64String;
-(id)MCInitWithBase64String:(id)arg1 ;
-(id)MCSHA1Hash;
-(id)_CUTDecompressData;
-(id)_CUTStringFromBaseData;
-(id)_CUTOptionallyDecompressData;
-(id)_CUTCopyGzippedData;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_guessedMIMETypeForXML;
-(id)_web_guessedMIMEType;
-(id)_web_guessedMIMETypeForExtension:(id)arg1 ;
-(id)_web_parseRFC822HeaderFields;
-(id)_replaceCString:(const char*)arg1 withCString:(const char*)arg2 ;
-(char)isNSData__;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(unsigned long)_cfTypeID;
-(id)initWithBytes:(void*)arg1 length:(unsigned)arg2 copy:(char)arg3 deallocator:(/*^block*/id)arg4 ;
-(char)_isDispatchData;
-(id)initWithBytes:(void*)arg1 length:(unsigned)arg2 copy:(char)arg3 freeWhenDone:(char)arg4 bytesAreVM:(char)arg5 ;
-(char)_canReplaceWithDispatchDataForXPCCoder;
-(char)_isCompact;
-(char)_copyWillRetain;
-(char)_decodeBase64EncodedCharacterBuffer:(const char*)arg1 length:(unsigned)arg2 options:(unsigned)arg3 buffer:(char*)arg4 bufferLength:(unsigned)arg5 state:(SCD_Struct_NS11*)arg6 ;
-(id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned)arg2 ;
-(id)_base64EncodingAsString:(char)arg1 withOptions:(unsigned)arg2 ;
-(id)_asciiDescription;
-(char)_allowsDirectEncoding;
-(void)getBytes:(void*)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned)arg2 ;
-(id)initWithBase64Encoding:(id)arg1 ;
-(id)base64Encoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(unsigned)length;
-(char)writeToFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(char)writeToURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)base64EncodedStringWithOptions:(unsigned)arg1 ;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 error:(id*)arg3 ;
-(char)isEqualToData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned)arg2 ;
-(id)base64EncodedDataWithOptions:(unsigned)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 deallocator:(/*^block*/id)arg3 ;
-(char)_isSafeResumeDataForBackgroundDownload:(int)arg1 ;
@end

