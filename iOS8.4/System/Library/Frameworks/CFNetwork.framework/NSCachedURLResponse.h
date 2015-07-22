/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSSecureCoding.h>
#import <CFNetwork/NSCopying.h>

@class NSCachedURLResponseInternal, NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSCachedURLResponseInternal* _internal;

}

@property (copy,readonly) NSURLResponse * response; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (readonly) unsigned long long storagePolicy; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)_cacheTime;
-(void)_reestablishInternalCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(unsigned long long)storagePolicy;
-(id)_private_initWithCoder:(id)arg1 ;
-(void)_private_encodeWithCoder:(id)arg1 ;
-(id)initWithResponse:(id)arg1 data:(id)arg2 ;
-(id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4 ;
-(id)dataArray;
-(void)_deallocInternalCFCachedURLResponse;
-(id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NSDictionary *)userInfo;
-(NSURLResponse *)response;
-(id)_initWithCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(CFCachedURLResponse*)_CFCachedURLResponse;
@end
