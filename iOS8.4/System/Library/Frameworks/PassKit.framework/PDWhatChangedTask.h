/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/PDNetworkTask.h>
#import <passd/PDNetworkTaskManagerProtocol.h>

@class NSMutableArray, NSString, NSSet;

@interface PDWhatChangedTask : PDNetworkTask <PDNetworkTaskManagerProtocol> {

	NSMutableArray* _pendingTasks;
	NSMutableArray* _completedTasks;
	NSMutableArray* _activeTasks;
	BOOL _gotUpdates;
	BOOL _partiallyComplete;
	NSString* _passTypeID;

}

@property (nonatomic,retain) NSString * passTypeID;                  //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,retain,readonly) NSSet * subtasks; 
@property (assign,nonatomic) BOOL partiallyComplete;                 //@synthesize partiallyComplete=_partiallyComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskWithPassTypeID:(id)arg1 subtasks:(id)arg2 ;
-(void)task:(id)arg1 gotResult:(id)arg2 ;
-(void)taskSucceeded:(id)arg1 ;
-(void)taskFailed:(id)arg1 ;
-(void)task:(id)arg1 encounteredError:(id)arg2 ;
-(void)task:(id)arg1 encounteredWarnings:(id)arg2 ;
-(void)taskRequestedReauthentication:(id)arg1 ;
-(void)setPassTypeID:(NSString *)arg1 ;
-(NSString *)passTypeID;
-(BOOL)coalescesWithTaskSubclass:(Class)arg1 ;
-(long long)actionForInactiveTask:(id)arg1 ;
-(long long)actionForActiveTask:(id)arg1 ;
-(void)taskChangedState:(id)arg1 ;
-(void)taskFailedForAuthentication:(id)arg1 ;
-(void)performStart:(BOOL)arg1 ;
-(void)performCancel;
-(void)performReset;
-(BOOL)gotUpdates;
-(NSSet *)subtasks;
-(id)_initWithPassTypeID:(id)arg1 subtasks:(id)arg2 ;
-(void)_addTask:(id)arg1 ;
-(BOOL)_matchesTask:(id)arg1 ;
-(void)_updateForTaskDeactivation:(BOOL)arg1 ;
-(BOOL)partiallyComplete;
-(void)setPartiallyComplete:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)_commonInit;
@end

