/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FieldTest.app/FieldTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FieldTest/FieldTest-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSDate, NSArray, UITableView, UITextField;

@interface FieldTestSaveViewController : UIViewController <UITableViewDataSource, UITextFieldDelegate> {

	NSDate* _timeStamp;
	NSArray* _saveHistory;
	UITableView* saveContentTable;
	UITextField* saveDescription;

}

@property (nonatomic,retain) UITableView * saveContentTable; 
@property (nonatomic,retain) UITextField * saveDescription; 
-(id)initWithSaveHistory:(id)arg1 ;
-(void)savePressed:(id)arg1 ;
-(void)backgroundTouched:(id)arg1 ;
-(id)saveContentTable;
-(void)setSaveContentTable:(id)arg1 ;
-(id)saveDescription;
-(void)setSaveDescription:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)cancelPressed:(id)arg1 ;
@end

