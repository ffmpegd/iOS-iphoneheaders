/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol IKJSDOMLSInput <JSExport>
@property (nonatomic,retain) id byteStream; 
@property (nonatomic,retain) NSString * stringData; 
@property (nonatomic,retain) NSString * encoding; 
@property (assign,nonatomic) BOOL certifiedText; 
@required
-(NSString *)stringData;
-(id)byteStream;
-(void)setStringData:(id)arg1;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1;
-(void)setByteStream:(id)arg1;
-(NSString *)encoding;
-(void)setEncoding:(id)arg1;

@end
