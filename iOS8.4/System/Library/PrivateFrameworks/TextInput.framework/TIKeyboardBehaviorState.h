/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TIKeyboardBehaviorState : NSObject {

	BOOL hasInput;
	BOOL hasCandidates;
	BOOL hasCandidateSelected;
	BOOL hasNextPage;
	BOOL showsExtendedList;
	BOOL followsZhuyin;
	BOOL spaceConfirmation;
	BOOL _hasAutocorrection;
	BOOL _showsCandidatesInLayout;

}

@property (assign,nonatomic) BOOL hasInput; 
@property (assign,nonatomic) BOOL hasAutocorrection;                    //@synthesize hasAutocorrection=_hasAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL hasCandidates; 
@property (assign,nonatomic) BOOL hasCandidateSelected; 
@property (assign,nonatomic) BOOL hasNextPage; 
@property (assign,nonatomic) BOOL showsExtendedList; 
@property (assign,nonatomic) BOOL followsZhuyin; 
@property (assign,nonatomic) BOOL spaceConfirmation; 
@property (assign,nonatomic) BOOL showsCandidatesInLayout;              //@synthesize showsCandidatesInLayout=_showsCandidatesInLayout - In the implementation block
-(BOOL)hasCandidates;
-(BOOL)hasNextPage;
-(BOOL)hasInput;
-(BOOL)hasCandidateSelected;
-(BOOL)hasAutocorrection;
-(void)setHasInput:(BOOL)arg1 ;
-(void)setHasAutocorrection:(BOOL)arg1 ;
-(void)setHasCandidates:(BOOL)arg1 ;
-(void)setHasCandidateSelected:(BOOL)arg1 ;
-(void)setHasNextPage:(BOOL)arg1 ;
-(void)setShowsExtendedList:(BOOL)arg1 ;
-(void)setShowsCandidatesInLayout:(BOOL)arg1 ;
-(void)setFollowsZhuyin:(BOOL)arg1 ;
-(void)setSpaceConfirmation:(BOOL)arg1 ;
-(BOOL)showsExtendedList;
-(BOOL)followsZhuyin;
-(BOOL)spaceConfirmation;
-(BOOL)showsCandidatesInLayout;
@end
