/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class SKUILayoutCache, NSMutableDictionary;

@interface SKUIViewElementTextLayoutCache : NSObject {

	SKUILayoutCache* _layoutCache;
	NSMutableDictionary* _layoutMapTables;

}

@property (nonatomic,readonly) SKUILayoutCache * layoutCache;              //@synthesize layoutCache=_layoutCache - In the implementation block
-(CGSize)sizeForViewElement:(id)arg1 width:(float)arg2 ;
-(void)requestLayoutForButton:(id)arg1 attributedString:(id)arg2 width:(int)arg3 ;
-(void)requestLayoutForLabel:(id)arg1 attributedString:(id)arg2 width:(int)arg3 ;
-(void)requestLayoutForBadge:(id)arg1 width:(int)arg2 ;
-(void)requestLayoutForViewElement:(id)arg1 attributedString:(id)arg2 width:(int)arg3 ;
-(SKUILayoutCache *)layoutCache;
-(id)initWithLayoutCache:(id)arg1 ;
-(id)layoutForWidth:(int)arg1 viewElement:(id)arg2 ;
-(void)requestLayoutForOrdinal:(id)arg1 attributedString:(id)arg2 width:(int)arg3 ;
-(CGSize)estimatedSizeForLabel:(id)arg1 width:(float)arg2 ;
-(void)invalidateLayoutsForUpdatedElements;
-(CGSize)sizeForButton:(id)arg1 width:(float)arg2 ;
-(CGSize)estimatedSizeForOrdinal:(id)arg1 width:(float)arg2 ;
-(CGSize)sizeForLabel:(id)arg1 width:(float)arg2 ;
-(id)_existingLayoutForViewElement:(id)arg1 width:(int)arg2 ;
-(CGSize)_bestGuessSizeForButton:(id)arg1 width:(float)arg2 ;
-(CGSize)_bestGuessSizeForLabel:(id)arg1 width:(float)arg2 ;
-(CGSize)_bestGuessSizeForOrdinal:(id)arg1 width:(float)arg2 ;
-(void)_addRequest:(id)arg1 forViewElement:(id)arg2 ;
-(id)_layoutIndexForViewElement:(id)arg1 width:(int)arg2 ;
-(CGSize)estimatedSizeForButton:(id)arg1 width:(float)arg2 ;
@end
