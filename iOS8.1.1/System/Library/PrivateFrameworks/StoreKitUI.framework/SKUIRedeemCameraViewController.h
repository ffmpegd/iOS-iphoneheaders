/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <StoreKitUI/CRCodeRedeemerControllerDelegate.h>
#import <StoreKitUI/SKUIRedeemCameraViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <StoreKitUI/SKUIRedeemCameraViewControllerDelegate.h>

@protocol SKUIRedeemCameraViewControllerDelegate;
@class CRCodeRedeemerController, UIBarButtonItem, NSString, SKUIRedeem;

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewDelegate, UIAlertViewDelegate, SKUIRedeemCameraViewControllerDelegate> {

	BOOL _alreadyPushed;
	CRCodeRedeemerController* _camera;
	long long _category;
	UIBarButtonItem* _redeemButton;
	UIBarButtonItem* _flipButton;
	NSString* _initialCode;
	SKUIRedeem* _successfulRedeem;
	BOOL _fullscreen;
	id<SKUIRedeemCameraViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) long long category;                                                    //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                                                    //@synthesize initialCode=_initialCode - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemCameraViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SKUIRedeemCameraViewControllerDelegate>)arg1 ;
-(id<SKUIRedeemCameraViewControllerDelegate>)delegate;
-(void)loadView;
-(id)contentScrollView;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(BOOL)_enabled;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(long long)category;
-(void)_setEnabled:(BOOL)arg1 ;
-(NSString *)initialCode;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)_redeemAction:(id)arg1 ;
-(void)_flipAction:(id)arg1 ;
-(void)SKUIRedeemPreflightImagesDidLoad:(id)arg1 ;
-(void)_redeemDidFinish:(id)arg1 error:(id)arg2 ;
-(id)initWithRedeemCategoryFullscreen:(long long)arg1 ;
-(void)_cameraRedeemDidFinish:(id)arg1 error:(id)arg2 ;
-(void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2 ;
-(void)codeRedeemerControllerDidCancel:(id)arg1 ;
-(void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2 ;
-(void)codeRedeemerControllerDidDisplayMessage:(id)arg1 ;
-(id)redeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)SKUIRedeemCameraView:(id)arg1 textFieldDidChange:(id)arg2 ;
-(void)SKUIRedeemCameraView:(id)arg1 textFieldDidRedeem:(id)arg2 ;
-(void)cancelRedeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)startRedeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)showITunesPassLearnMoreForSKUIRedeemCameraView:(id)arg1 ;
@end
