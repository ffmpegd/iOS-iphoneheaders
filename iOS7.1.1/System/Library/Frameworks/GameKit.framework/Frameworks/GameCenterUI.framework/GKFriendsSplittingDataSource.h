/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKSplittingDataSource.h>

@class GKGame, NSString, NSSet, NSMutableDictionary, GKFriendsDataSource, NSArray;

@interface GKFriendsSplittingDataSource : GKSplittingDataSource {

	GKGame* _game;
	NSString* _achievementID;
	NSString* _leaderboardID;
	NSSet* _hiddenPlayers;
	long long _maxSelectable;
	NSMutableDictionary* _pickerInfos;

}

@property (nonatomic,retain) GKFriendsDataSource * friendsDataSource; 
@property (nonatomic,retain) GKGame * game;                                        //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSString * achievementID;                             //@synthesize achievementID=_achievementID - In the implementation block
@property (nonatomic,retain) NSString * leaderboardID;                             //@synthesize leaderboardID=_leaderboardID - In the implementation block
@property (nonatomic,retain) NSSet * hiddenPlayers;                                //@synthesize hiddenPlayers=_hiddenPlayers - In the implementation block
@property (nonatomic,retain) NSArray * selectedPlayerIDs; 
@property (nonatomic,readonly) NSArray * selectedPlayers; 
@property (assign,nonatomic) long long maxSelectable;                              //@synthesize maxSelectable=_maxSelectable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pickerInfos;                    //@synthesize pickerInfos=_pickerInfos - In the implementation block
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)configureDataSource;
-(void)configureCollectionView:(id)arg1 ;
-(void)setMaxSelectable:(long long)arg1 ;
-(void)refreshAdditionalInfoForDataType:(unsigned)arg1 updateNotifier:(id)arg2 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(id)selectedPlayerIDs;
-(bool)canSelectIndexPath:(id)arg1 ;
-(void)toggleSelectionAtIndexPath:(id)arg1 ;
-(id)selectedPlayers;
-(long long)maxSelectable;
-(void)setFriendsDataSource:(id)arg1 ;
-(void)setSelectedPlayerIDs:(id)arg1 ;
-(void)setHiddenPlayers:(id)arg1 ;
-(id)hiddenPlayers;
-(id)playerInfoForPlayerID:(id)arg1 ;
-(void)notifyPickerItemsChanged:(id)arg1 ;
-(id)indexPathsForPlayerID:(id)arg1 ;
-(void)setPlayerIDs:(id)arg1 selected:(bool)arg2 deselectOthers:(bool)arg3 ;
-(bool)canSelectPlayerInfo:(id)arg1 ;
-(bool)_changePickerInfo:(id)arg1 selected:(bool)arg2 ;
-(void)toggleSelectionForPlayerID:(id)arg1 ;
-(void)updatePickerInfosFromPlayers:(id)arg1 ;
-(void)loadAchievedWithUpdateNotifier:(id)arg1 ;
-(void)loadRanksWithUpdateNotifier:(id)arg1 ;
-(void)loadGamePlayersWithUpdateNotifier:(id)arg1 ;
-(void)updatePickerInfosFromFriendPlayersOfGame:(id)arg1 outputPlayerIDs:(id*)arg2 ;
-(id)collectionView:(id)arg1 forPickerInfo:(id)arg2 forIndexPath:(id)arg3 ;
-(id)friendsDataSource;
-(id)allPickerInfos;
-(id)achievementID;
-(void)setAchievementID:(id)arg1 ;
-(id)leaderboardID;
-(void)setLeaderboardID:(id)arg1 ;
-(id)pickerInfos;
-(void)setPickerInfos:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end

