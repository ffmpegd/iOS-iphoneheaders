/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIImage;

@interface MCDTableViewCell : UITableViewCell {

	UIImageView* _artworkImageView;
	double _originalLeftInset;

}

@property (nonatomic,retain) UIImage * artworkImage; 
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
@end

