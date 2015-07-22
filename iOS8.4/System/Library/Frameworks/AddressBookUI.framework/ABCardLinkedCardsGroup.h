/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABCardGroup.h>

@class NSArray;

@interface ABCardLinkedCardsGroup : ABCardGroup {

	NSArray* _linkedContacts;

}

@property (nonatomic,retain) NSArray * linkedContacts;              //@synthesize linkedContacts=_linkedContacts - In the implementation block
-(id)displayItems;
-(id)editingItems;
-(NSArray *)linkedContacts;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(void)dealloc;
-(id)title;
@end
