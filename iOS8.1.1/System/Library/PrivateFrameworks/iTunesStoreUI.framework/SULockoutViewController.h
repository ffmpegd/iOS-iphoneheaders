/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIImage, NSBundle, NSString;

@interface SULockoutViewController : SUViewController {

	UIImage* _image;
	NSBundle* _localizationBundle;
	NSString* _messageBody;
	NSString* _messageTitle;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * messageBody;                     //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSString * messageTitle;                    //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,retain) NSBundle * localizationBundle;              //@synthesize localizationBundle=_localizationBundle - In the implementation block
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)image;
-(void)loadView;
-(void)setMessageBody:(NSString *)arg1 ;
-(NSString *)messageBody;
-(void)setMessageTitle:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(id)copyArchivableContext;
-(NSBundle *)localizationBundle;
-(void)setLocalizationBundle:(NSBundle *)arg1 ;
@end
