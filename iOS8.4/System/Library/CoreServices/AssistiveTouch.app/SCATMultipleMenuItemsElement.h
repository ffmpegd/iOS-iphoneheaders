/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElement.h>

@protocol SCATMultipleMenuItemsElementDelegate;
@class NSString, NSArray;

@interface SCATMultipleMenuItemsElement : SCATSimpleElement {

	NSString* _identifier;
	NSArray* _menuItems;
	id<SCATMultipleMenuItemsElementDelegate> _delegate;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                                            //@synthesize menuItems=_menuItems - In the implementation block
@property (assign,nonatomic) id<SCATMultipleMenuItemsElementDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)scatIndicatesOwnFocus;
-(void)scatDidBecomeFocused:(BOOL)arg1 ;
-(BOOL)scatPerformAction:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SCATMultipleMenuItemsElementDelegate>)arg1 ;
-(id)description;
-(id<SCATMultipleMenuItemsElementDelegate>)delegate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end

