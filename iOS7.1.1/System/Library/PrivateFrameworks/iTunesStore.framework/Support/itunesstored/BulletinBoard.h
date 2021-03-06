/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BulletinBoardSection, BBDataProviderConnection, NSObject, NSMutableDictionary, NSLock;

@interface BulletinBoard : NSObject {

	BulletinBoardSection* _appStoreSection;
	BBDataProviderConnection* _connection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableDictionary* _sectionsByIdentifier;
	NSLock* _sectionsLock;

}

@property (readonly) BulletinBoardSection * appStoreSection; 
+(id)bulletinBoard;
-(id)appStoreSection;
-(void)dealloc;
-(id)init;
-(id)sectionWithIdentifier:(id)arg1 ;
@end

