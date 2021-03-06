/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SKUIReviewMetadata;

@interface SKUIPostReviewOperation : ISOperation {

	NSDictionary* _responseDictionary;
	SKUIReviewMetadata* _review;

}

@property (readonly) NSDictionary * responseDictionary; 
-(void)run;
-(NSDictionary *)responseDictionary;
-(id)initWithReviewMetadata:(id)arg1 ;
-(id)_httpBody;
@end

