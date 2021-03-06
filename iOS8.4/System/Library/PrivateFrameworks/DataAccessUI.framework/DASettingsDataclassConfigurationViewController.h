/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>
#import <UIKit/UIModalViewDelegate.h>

@class DAAccount, NSString;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController <UIModalViewDelegate> {

	DAAccount* _daAccount;
	BOOL _haveRegisteredForAccountsChanged;

}

@property (nonatomic,retain) DAAccount * daAccount;                 //@synthesize daAccount=_daAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)accountDescriptionForFirstTimeSetup;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(void)cancelButtonClicked:(id)arg1 ;
-(DAAccount *)daAccount;
-(id)_navTitle;
-(void)_listenForAccountsChangedNotifications;
-(id)accountFromSpecifier;
-(void)reloadAccount;
-(void)setDaAccount:(DAAccount *)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(id)specifiers;
@end

