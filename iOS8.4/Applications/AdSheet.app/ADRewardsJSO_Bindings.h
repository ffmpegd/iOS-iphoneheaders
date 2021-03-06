/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class JSValue, NSArray;


@protocol ADRewardsJSO_Bindings <JSExport>
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,readonly) NSArray * rewardTokens; 
@optional
-(void)reportRedeemFailureForReward:(id)arg1 withErrorMessage:(id)arg2 __JS_EXPORT_AS__reportRedeemFailure:(id)arg3;

@required
-(NSArray *)rewardTokens;
-(void)lookupReward:(id)arg1;
-(void)userRedeemedReward:(id)arg1;
-(void)reportRedeemFailureForReward:(id)arg1 withErrorMessage:(id)arg2;
-(JSValue *)listener;
-(void)setListener:(id)arg1;

@end

