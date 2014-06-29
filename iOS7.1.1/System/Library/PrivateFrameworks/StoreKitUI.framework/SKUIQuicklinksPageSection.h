/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIQuicklinksViewControllerDelegate.h>

@class SKUIQuicklinksViewController, SKUIQuicklinksPageComponent;

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate> {

	SKUIQuicklinksViewController* _quicklinksViewController;

}

@property (nonatomic,@dynamic,readonly) SKUIQuicklinksPageComponent * pageComponent; 
-(void)dealloc;
-(void).cxx_destruct;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)willAppearInContext:(id)arg1 ;
-(id)_quicklinksViewController;
-(void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3 ;
-(id)cellForIndexPath:(id)arg1 ;
@end
