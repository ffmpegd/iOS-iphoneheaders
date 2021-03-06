/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class Stock, UILabel, LoadingLabel, StockMetadataGridView;

@interface StockInfoView : UIView {

	Stock* _stock;
	UILabel* _titleLabel;
	LoadingLabel* _loadingLabel;
	StockMetadataGridView* _gridView;
	BOOL _pauseUpdates;

}

@property (nonatomic,retain) Stock * stock;              //@synthesize stock=_stock - In the implementation block
-(void)setUpdatesPaused:(BOOL)arg1 ;
-(void)_stockWillBeRemoved:(id)arg1 ;
-(void)_metadataDidUpdate;
-(void)_redrawGridView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setStock:(id)arg1 ;
-(id)stock;
@end

