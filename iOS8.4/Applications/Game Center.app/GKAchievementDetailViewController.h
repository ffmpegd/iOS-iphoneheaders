/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBubbleDetailViewController.h>

@protocol GKAchievementDetailDelegate;
@class GKTextBubbleControl, GKAchievement;

@interface GKAchievementDetailViewController : GKBubbleDetailViewController {

	char _hasEligibleFriends;
	id<GKAchievementDetailDelegate> _delegate;
	GKTextBubbleControl* _shareBubble;
	GKTextBubbleControl* _challengeBubble;
	GKAchievement* _achievement;
	GKAchievement* _localAchievement;

}

@property (assign) id<GKAchievementDetailDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * shareBubble;                  //@synthesize shareBubble=_shareBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * challengeBubble;              //@synthesize challengeBubble=_challengeBubble - In the implementation block
@property (nonatomic,retain) GKAchievement * achievement;                        //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;                   //@synthesize localAchievement=_localAchievement - In the implementation block
@property (assign,nonatomic) char hasEligibleFriends;                            //@synthesize hasEligibleFriends=_hasEligibleFriends - In the implementation block
+(id)achievementDetailWithLocalAchievement:(id)arg1 hasEligibleFriends:(char)arg2 ;
+(id)achievementDetailWithAchievement:(id)arg1 localPlayerAchievement:(id)arg2 hasEligibleFriends:(char)arg3 ;
+(Class)iconViewClass;
-(void)didTouchShareBubble;
-(void)pushRightBubble;
-(void)didTouchChallengeBubble;
-(void)pushLeftBubble;
-(GKTextBubbleControl *)shareBubble;
-(void)setShareBubble:(GKTextBubbleControl *)arg1 ;
-(GKTextBubbleControl *)challengeBubble;
-(void)setChallengeBubble:(GKTextBubbleControl *)arg1 ;
-(id)initWithAchievement:(id)arg1 localAchievement:(id)arg2 hasEligibleFriends:(char)arg3 ;
-(void)setLocalAchievement:(GKAchievement *)arg1 ;
-(void)configureForAchievements;
-(int)desiredBubbles;
-(GKAchievement *)localAchievement;
-(char)hasEligibleFriends;
-(void)setHasEligibleFriends:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<GKAchievementDetailDelegate>)arg1 ;
-(id<GKAchievementDetailDelegate>)delegate;
-(void)loadView;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(GKAchievement *)achievement;
@end
