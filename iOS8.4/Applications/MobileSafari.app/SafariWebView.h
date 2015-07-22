/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <WebKit/WKWebView.h>
#import <MobileSafari/WBUFormAutoFillWebView.h>

@class UIView, FormAutoFillFrameHandle, NSDictionary, SecurityInfo, NSString;

@interface SafariWebView : WKWebView <WBUFormAutoFillWebView> {

	FormAutoFillFrameHandle* _lastPasswordGenerationOrSubmitEventFrame;
	NSDictionary* _lastPasswordGenerationOrSubmitEventForm;
	UIEdgeInsets _hitTestInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitTestInsets;                          //@synthesize hitTestInsets=_hitTestInsets - In the implementation block
@property (nonatomic,retain) SecurityInfo * securityInfo; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * webui_viewForAutoFillPrompt; 
@property (nonatomic,readonly) char webui_privateBrowsingEnabled; 
-(UIEdgeInsets)hitTestInsets;
-(void)_applicationDidEnterBackgroundOrWillTerminate:(id)arg1 ;
-(void)setSecurityInfo:(SecurityInfo *)arg1 ;
-(SecurityInfo *)securityInfo;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHitTestInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)_close;
-(id)webui_formMetadataAndFrame:(id*)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2 ;
-(UIView *)webui_viewForAutoFillPrompt;
-(char)webui_privateBrowsingEnabled;
-(/*^block*/id)webui_preventNavigationDuringAutoFillPrompt;
-(id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1 ;
-(void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2 ;
-(void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1 ;
@end
