/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPickerViewController.h>
#import <AddressBookUI/ABSimpleTextInputViewControllerDelegate.h>

@class NSString, NSArray, NSIndexPath;

@interface ABServicePickerViewController : ABPickerViewController <ABSimpleTextInputViewControllerDelegate> {

	NSString* _selectedService;
	NSString* _customService;
	NSArray* _defaultServices;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,copy) NSString * selectedService;              //@synthesize selectedService=_selectedService - In the implementation block
+(id)defaultServices;
+(id)defaultService;
-(void)setStyleProvider:(id)arg1 ;
-(void)setSelectedService:(id)arg1 ;
-(void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2 ;
-(id)selectServiceTitle;
-(id)addCustomServiceButtonLabel;
-(id)addCustomServiceTitle;
-(id)addCustomServicePlaceholder;
-(id)selectedService;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
@end
