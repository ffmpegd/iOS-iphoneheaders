/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol RUTrackActioning <NSObject>
@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,readonly) long long cancelIndex; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<RUTrackActionsDelegate> trackActionsDelegate; 
@property (assign,nonatomic) long long enabledActions; 
@property (assign,nonatomic) long long onActions; 
@property (nonatomic,copy) NSString * songText; 
@required
+(CGSize*)artworkSize;
-(CGSize)contentSize;
-(void)setArtworkImage:(id)arg1;
-(UIImage *)artworkImage;
-(long long)actionForButtonIndex:(long long)arg1;
-(NSString *)artistText;
-(void)setArtistText:(id)arg1;
-(void)setSongText:(id)arg1;
-(NSString *)songText;
-(id<RUTrackActionsDelegate>)trackActionsDelegate;
-(long long)cancelIndex;
-(void)setTrackActionsDelegate:(id)arg1;
-(long long)enabledActions;
-(void)setEnabledActions:(long long)arg1;
-(long long)onActions;
-(void)setOnActions:(long long)arg1;

@end

