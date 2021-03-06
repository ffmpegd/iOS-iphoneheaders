/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SKUIClientContext, UIImage, NSOperationQueue;

@interface SKUIRedeemConfiguration : NSObject {

	int _category;
	SKUIClientContext* _clientContext;
	UIImage* _inputImage;
	UIImage* _landingImage;
	NSOperationQueue* _operationQueue;
	UIImage* _successImage;

}

@property (nonatomic,readonly) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) UIImage * inputImage;                             //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) UIImage * landingImage;                           //@synthesize landingImage=_landingImage - In the implementation block
@property (nonatomic,retain) UIImage * successImage;                           //@synthesize successImage=_successImage - In the implementation block
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)operationQueue;
-(id)initWithOperationQueue:(id)arg1 category:(int)arg2 clientContext:(id)arg3 ;
-(void)loadImages;
-(id)landingImage;
-(void)setLandingImage:(id)arg1 ;
-(void)setSuccessImage:(id)arg1 ;
-(void)_loadURLsWithDictionary:(id)arg1 ;
-(id)successImage;
-(void).cxx_destruct;
@end

