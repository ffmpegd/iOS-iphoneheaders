/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSString, NSNumber, NSLock, NSMutableDictionary;

@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSString* _entityType;
	NSNumber* _identifier;
	NSLock* _lock;
	NSMutableDictionary* _parameters;
	/*^block*/id _outputBlock;

}

@property (copy) NSString * entityType; 
@property (copy) NSNumber * identifier; 
@property (copy) id outputBlock; 
-(NSString *)entityType;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(void)main;
-(id)initWithClientContext:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(void)setEntityType:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forProfileField:(id)arg2 ;
-(id)_imageDictionaryFromPhotoUpload:(id)arg1 ;
-(id)_requestWithError:(id*)arg1 ;
-(id)_requestBodyWithError:(id*)arg1 ;
@end
