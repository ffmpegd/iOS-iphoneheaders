/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol EKShareeViewControllerDelegate;
@class UIAlertController, EKSharee;

@interface EKShareeViewController : UITableViewController {

	UIAlertController* _removeAlertController;
	BOOL _allowEditing;
	BOOL _allowStopSharing;
	BOOL _allowResendInvitations;
	EKSharee* _sharee;
	id<EKShareeViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) EKSharee * sharee;                                               //@synthesize sharee=_sharee - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                               //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) BOOL allowStopSharing;                                           //@synthesize allowStopSharing=_allowStopSharing - In the implementation block
@property (assign,nonatomic) BOOL allowResendInvitations;                                     //@synthesize allowResendInvitations=_allowResendInvitations - In the implementation block
@property (assign,nonatomic,__weak) id<EKShareeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSharee:(id)arg1 ;
-(void)setAllowStopSharing:(BOOL)arg1 ;
-(void)setAllowResendInvitations:(BOOL)arg1 ;
-(EKSharee *)sharee;
-(long long)_rowForSubitem:(int)arg1 ;
-(void)setSharee:(EKSharee *)arg1 ;
-(void)setAllowEditing:(BOOL)arg1 ;
-(BOOL)_shouldDisplayResendInvitationButton;
-(void)_reloadTitle;
-(BOOL)allowEditing;
-(BOOL)_shouldDisplayStopSharingButton;
-(int)_subitemAtRow:(long long)arg1 ;
-(void)_allowEditingChanged:(id)arg1 ;
-(void)removeClicked:(id)arg1 ;
-(BOOL)allowStopSharing;
-(BOOL)allowResendInvitations;
-(void)setDelegate:(id<EKShareeViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<EKShareeViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

