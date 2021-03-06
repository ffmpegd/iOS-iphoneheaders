/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/RAPAddressCellDelegate.h>
#import <Maps/RAPCategoryChooserDelegate.h>

@class RAPReport, RAPPlaceCorrectionsQuestion, UIBarButtonItem, ReportAProblemCategoryChooserViewController, RAPPhotoPickerController, NSString;

@interface RAPAddressCorrectionsViewController : UITableViewController <RAPAddressCellDelegate, RAPCategoryChooserDelegate> {

	RAPReport* _report;
	RAPPlaceCorrectionsQuestion* _question;
	/*^block*/id _completion;
	UIBarButtonItem* _sendButtonItem;
	ReportAProblemCategoryChooserViewController* _categoryViewController;
	float _verticalBarOffset;
	RAPPhotoPickerController* _photoPicker;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)_hasLocationSection;
-(int)_locationSection;
-(id)_sendButtonItem;
-(void)_send;
-(id)_problemItemForType:(int)arg1 ;
-(unsigned)_indexOfCorrectableItemForSection:(int)arg1 ;
-(void)_makeFirstResponderCellAtIndexPath:(id)arg1 fromDirection:(int)arg2 ;
-(int)_commentSection;
-(int)_correctableItemSectionOffset;
-(char)_isMultipleCategoriesSection:(int)arg1 ;
-(char)_isCommentSection:(int)arg1 ;
-(char)_isLocationSection:(int)arg1 ;
-(char)_isPhotosSection:(int)arg1 ;
-(int)_photosSection;
-(id)_photoPicker;
-(char)_isAddCategoryButtonIndexPath:(id)arg1 ;
-(int)_indexForMultipleCategoriesSection;
-(void)_beginPickingCategoriesForRowAtIndexPath:(id)arg1 ;
-(void)_performDeletionForCategoryAtIndexPath:(id)arg1 animated:(char)arg2 ;
-(id)_indexPathForAddCategoryButton;
-(void)valueForAddressType:(int)arg1 changedTo:(id)arg2 ;
-(void)reportAProblemCellDidBecomeFirstResponder:(id)arg1 ;
-(void)reportAProblemCellDidResignFirstResponder:(id)arg1 ;
-(void)reportAProblemCellCorrectnessStatusChanged:(id)arg1 ;
-(void)reportAProblemCellShouldAdvanceToNextResponder:(id)arg1 ;
-(void)reportAProblemCellShouldAdvanceToPreviousResponder:(id)arg1 ;
-(void)didReceiveSelectedCategory:(id)arg1 forIndexPath:(id)arg2 ;
-(void)deleteCategoryAtIndexPath:(id)arg1 ;
-(char)_isCorrectableItem:(id)arg1 ofKind:(int)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
@end

