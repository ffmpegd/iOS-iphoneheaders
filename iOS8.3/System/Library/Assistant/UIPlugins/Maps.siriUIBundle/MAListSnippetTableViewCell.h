/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:04:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MAResultView;

@interface MAListSnippetTableViewCell : UITableViewCell {

	MAResultView* _resultView;

}

@property (nonatomic,retain) MAResultView * resultView;              //@synthesize resultView=_resultView - In the implementation block
-(void)setResultView:(MAResultView *)arg1 ;
-(MAResultView *)resultView;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
