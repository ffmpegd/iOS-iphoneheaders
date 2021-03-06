/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Stocks.assistantBundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAStockAdd.h>
#import <Stocks/AFServiceCommand.h>

@class NSMutableArray, NSString;

@interface StocksAssistantStockAdd : SAStockAdd <AFServiceCommand> {

	NSMutableArray* _newStocks;

}

@property (nonatomic,retain) NSMutableArray * createdStocks;              //@synthesize newStocks=_newStocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)validateCommandArguments;
-(NSMutableArray *)createdStocks;
-(void)setCreatedStocks:(NSMutableArray *)arg1 ;
-(id)addStocks;
@end

