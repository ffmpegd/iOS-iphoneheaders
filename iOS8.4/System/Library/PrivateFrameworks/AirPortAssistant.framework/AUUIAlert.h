/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol AUUIAlertDelegate;
@class NSString, UIAlertAction;

@interface AUUIAlert : NSObject <UIAlertViewDelegate> {

	BOOL modernAlerts;
	BOOL stackButtons;
	BOOL prepared;
	id<AUUIAlertDelegate> delegate;
	id context;
	long long tag;
	id alert;
	NSString* title;
	NSString* message;
	NSString* okButtonTitle;
	long long okButtonIndex;
	NSString* cancelButtonTitle;
	long long cancelButtonIndex;
	NSString* alternateButtonTitle;
	long long alternateButtonIndex;
	NSString* destructiveButtonTitle;
	long long destructiveButtonIndex;
	id viewController;
	UIAlertAction* okAction;
	UIAlertAction* cancelAction;
	UIAlertAction* alternateAction;
	UIAlertAction* destructiveAction;

}

@property (assign,nonatomic) id<AUUIAlertDelegate> delegate; 
@property (nonatomic,retain) id viewController; 
@property (nonatomic,retain) id context; 
@property (assign,nonatomic) long long tag; 
@property (assign,nonatomic) BOOL stackButtons; 
@property (nonatomic,retain) id alert; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSString * okButtonTitle; 
@property (nonatomic,retain) NSString * cancelButtonTitle; 
@property (nonatomic,retain) NSString * alternateButtonTitle; 
@property (nonatomic,retain) NSString * destructiveButtonTitle; 
@property (nonatomic,retain) UIAlertAction * okAction; 
@property (nonatomic,retain) UIAlertAction * cancelAction; 
@property (nonatomic,retain) UIAlertAction * alternateAction; 
@property (nonatomic,retain) UIAlertAction * destructiveAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(void)dealloc;
-(void)setDelegate:(id<AUUIAlertDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<AUUIAlertDelegate>)delegate;
-(NSString *)title;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)context;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)setContext:(id)arg1 ;
-(NSString *)message;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCancelAction:(UIAlertAction *)arg1 ;
-(UIAlertAction *)cancelAction;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)dismissWithNoActionAnimated:(BOOL)arg1 ;
-(void)setOkButtonTitle:(NSString *)arg1 ;
-(void)setStackButtons:(BOOL)arg1 ;
-(void)dismissWithCancelActionAnimated:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 actionSheet:(BOOL)arg2 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)setOkAction:(UIAlertAction *)arg1 ;
-(void)setDestructiveAction:(UIAlertAction *)arg1 ;
-(void)setAlternateAction:(UIAlertAction *)arg1 ;
-(UIAlertAction *)destructiveAction;
-(UIAlertAction *)alternateAction;
-(UIAlertAction *)okAction;
-(void)prepareToShow;
-(void)dismissWithOKActionAnimated:(BOOL)arg1 ;
-(void)enableOKAction:(BOOL)arg1 ;
-(void)enableCancelAction:(BOOL)arg1 ;
-(void)enableDestructiveAction:(BOOL)arg1 ;
-(void)enableAlternateAction:(BOOL)arg1 ;
-(NSString *)okButtonTitle;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)destructiveButtonTitle;
-(void)setDestructiveButtonTitle:(NSString *)arg1 ;
-(BOOL)stackButtons;
-(id)alert;
-(void)setAlert:(id)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(id)initWithViewController:(id)arg1 ;
@end
