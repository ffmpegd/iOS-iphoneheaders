/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasElementViewController.h>

@class IKViewElement;

@interface MPUExtrasViewElementViewController : MPUExtrasElementViewController {

	char _embedded;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                 //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) char matchParentHeight; 
@property (assign,nonatomic) char embedded;                               //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,readonly) id preferredLayoutGuide; 
@property (nonatomic,readonly) int preferredLayoutAttribute; 
-(void)viewDidLoad;
-(void)setEmbedded:(char)arg1 ;
-(char)matchParentHeight;
-(id)preferredLayoutGuide;
-(int)preferredLayoutAttribute;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(char)embedded;
-(id)initWithViewElement:(id)arg1 ;
-(IKViewElement *)viewElement;
@end

