/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/_MFResultsGenerator.h>

@class MFMailboxUid, NSSet;

@interface MFMailboxResultsGenerator : _MFResultsGenerator {

	MFMailboxUid* _mailboxUid;
	NSSet* _pushedMailboxUids;

}

@property (nonatomic,retain) MFMailboxUid * mailboxUid;              //@synthesize mailboxUid=_mailboxUid - In the implementation block
@property (nonatomic,retain) NSSet * pushedMailboxUids;              //@synthesize pushedMailboxUids=_pushedMailboxUids - In the implementation block
+(id)resultsDictionaryFromMailboxUid:(id)arg1 forKeys:(id)arg2 ;
-(id)_displayName:(id)arg1 ;
-(id)_relativePath:(id)arg1 ;
-(id)_type:(id)arg1 ;
-(id)_level:(id)arg1 ;
-(id)_pushState:(id)arg1 ;
-(SEL)selectorForKey:(id)arg1 ;
-(void)setPushedMailboxUids:(id)arg1 ;
-(void)dealloc;
-(void)setMailboxUid:(id)arg1 ;
-(id)mailboxUid;
-(id)pushedMailboxUids;
@end

