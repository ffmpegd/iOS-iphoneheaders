/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPPackage <NSObject>
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) <TSPFileCoordinatorDelegate> * fileCoordinatorDelegate; 
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey; 
@property (nonatomic,readonly) bool isClosed; 
@required
-(void)didCloseDocument;
-(id)decryptionKey;
-(unsigned char)packageIdentifier;
-(void)enumerateDatasUsingBlock:(/*^block*/ id)arg1;
-(bool)containsData:(id)arg1;
-(void)prepareForDocumentReplacementWithSuccess:(bool)arg1 forSafeSave:(bool)arg2 originalURL:(id)arg3;
-(id)newDataStorageForFilename:(id)arg1;
-(void)didReferenceData:(id)arg1;
-(id)newDataStorageForFilename:(id)arg1 decryptionKey:(id)arg2;
-(id)newReadChannelForComponent:(id)arg1;
-(void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 completion:(/*^block*/ id)arg6;
-(id)fileCoordinatorDelegate;
-(bool)isClosed;
@end
