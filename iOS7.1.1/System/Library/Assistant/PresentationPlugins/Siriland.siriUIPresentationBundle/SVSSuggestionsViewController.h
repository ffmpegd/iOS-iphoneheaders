/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/PresentationPlugins/Siriland.siriUIPresentationBundle/Siriland
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Siriland/SiriUISuggestionsViewDelegate.h>

@protocol SVSSuggestionsViewControllerDelegate;
@class SVSSuggestions, SiriUISuggestionsView;

@interface SVSSuggestionsViewController : UIViewController <SiriUISuggestionsViewDelegate> {

	SVSSuggestions* _suggestions;
	<SVSSuggestionsViewControllerDelegate>* _delegate;

}

@property (nonatomic,retain) SVSSuggestions * suggestions; 
@property (assign,nonatomic,__weak) <SVSSuggestionsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SiriUISuggestionsView * view; 
-(void)showUnavailable;
-(void)statusBarFrameDidChange;
-(void)setSuggestions:(id)arg1 ;
-(id)suggestions;
-(void)showSuggestionsIfAvailable;
-(void)_updateContentOffsetForStatusBarHeight;
-(id)_initialHeaderText;
-(bool)_suggestionsAvailable;
-(id)_suggestingHeaderText;
-(void)showGreeting;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
-(id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(void)didShowSuggestionsForSuggestionsView:(id)arg1 ;
-(void)animateOut;
@end

