/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/PresentationPlugins/Siriland.siriUIPresentationBundle/Siriland
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Siriland/Siriland-Structs.h>
#import <UIKit/UIView.h>

@class SVSTranscriptContentView, UICollectionView, UIView;

@interface SVSTranscriptView : UIView {

	SVSTranscriptContentView* _contentView;

}

@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (nonatomic,retain) UIView * suggestionsView; 
@property (assign,nonatomic) double topMargin; 
-(void)setSuggestionsView:(id)arg1 ;
-(id)suggestionsView;
-(void)setKeylineHidden:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)collectionView;
-(void).cxx_destruct;
-(double)topMargin;
-(void)setTopMargin:(double)arg1 ;
@end

