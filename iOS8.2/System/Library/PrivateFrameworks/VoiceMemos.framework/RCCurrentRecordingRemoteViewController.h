/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <VoiceMemos/RCUIClientCurrentRecordingViewController.h>

@protocol RCCurrentRecordingViewControllerDelegate;
@class NSString;

@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController> {

	id<RCCurrentRecordingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RCCurrentRecordingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(char)shouldPropagateAppearanceCustomizations;
-(void)setDelegate:(id<RCCurrentRecordingViewControllerDelegate>)arg1 ;
-(id<RCCurrentRecordingViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)currentRecordingDidEnd;
-(void)currentRecordingAVStateDidChange:(id)arg1 ;
@end

