/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface MusicPagingCollectionViewFlowLayout : UICollectionViewFlowLayout {

	double _distanceFromCenterForMinimumAlpha;
	double _minimumCellAlpha;
	long long _numberOfItemsPerPage;

}

@property (assign,nonatomic) double distanceFromCenterForMinimumAlpha;              //@synthesize distanceFromCenterForMinimumAlpha=_distanceFromCenterForMinimumAlpha - In the implementation block
@property (assign,nonatomic) double minimumCellAlpha;                               //@synthesize minimumCellAlpha=_minimumCellAlpha - In the implementation block
@property (assign,nonatomic) long long numberOfItemsPerPage;                        //@synthesize numberOfItemsPerPage=_numberOfItemsPerPage - In the implementation block
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(bool)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(long long)indexOfItemClosestToPoint:(CGPoint)arg1 ;
-(void)setDistanceFromCenterForMinimumAlpha:(double)arg1 ;
-(void)setMinimumCellAlpha:(double)arg1 ;
-(double)distanceFromCenterForMinimumAlpha;
-(double)minimumCellAlpha;
-(void)setNumberOfItemsPerPage:(long long)arg1 ;
-(long long)numberOfItemsPerPage;
@end

