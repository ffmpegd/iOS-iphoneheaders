/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class GKAchievementInternal, GKGame, GKPlayer, NSString, NSDate;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	BOOL _showsCompletionBanner;
	BOOL _hidden;
	GKAchievementInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;

}

@property (nonatomic,@dynamic,copy) NSString * identifier; 
@property (assign,nonatomic,@dynamic) double percentComplete; 
@property (getter=isCompleted,nonatomic,readonly) BOOL completed; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                        //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,@dynamic,copy) NSDate * lastReportedDate; 
@property (assign,nonatomic) BOOL showsCompletionBanner;                         //@synthesize showsCompletionBanner=_showsCompletionBanner - In the implementation block
@property (nonatomic,@dynamic,copy) NSString * playerID; 
@property (nonatomic,@dynamic,readonly) NSString * groupIdentifier; 
@property (assign,nonatomic) GKGame * game;                                      //@synthesize game=_game - In the implementation block
@property (retain) GKAchievementInternal * internal;                             //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                  //@synthesize player=_player - In the implementation block
+(void)loadAchievementsForGame:(id)arg1 players:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(/*^block*/ id)arg5 ;
+(void)reportAchievements:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)loadAchievementsWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)resetAchievementsWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)reportAchievements:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(/*^block*/ id)arg4 ;
+(void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(/*^block*/ id)arg4 ;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isCompleted;
-(void)setInternal:(id)arg1 ;
-(void)setShowsCompletionBanner:(BOOL)arg1 ;
-(BOOL)showsCompletionBanner;
-(id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2 ;
-(void)reportAchievementWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(id)internal;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

