/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptButtonNativeObject.h>

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {

	char _isBackButton;

}
+(id)objectWithDefaultButtonForScriptButton:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)image;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(id)styleString;
-(char)isLoading;
-(int)buttonType;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)setLoading:(char)arg1 ;
-(char)isShowingConfirmation;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(char)isBackButton;
-(void)hideConfirmationAnimated:(char)arg1 ;
-(void)disconnectButtonAction;
-(void)connectButtonAction;
-(void)setStyleFromString:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(char)arg2 ;
-(id)systemItemString;
@end
