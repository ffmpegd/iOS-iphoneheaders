/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIHeaderViewElement, NSArray;

@interface SKUITracklistViewElement : SKUIViewElement {

	NSMutableArray* _sections;
	NSMutableArray* _tracks;

}

@property (nonatomic,readonly) SKUIHeaderViewElement * header; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * tracks; 
-(NSArray *)sections;
-(SKUIHeaderViewElement *)header;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(void)enumerateTracksUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)tracks;
@end
