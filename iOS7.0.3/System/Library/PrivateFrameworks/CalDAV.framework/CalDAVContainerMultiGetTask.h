/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerMultiGetTask.h>

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {

	BOOL _getScheduleTags;
	BOOL _getScheduleChanges;

}

@property (assign) BOOL getScheduleTags;                 //@synthesize getScheduleTags=_getScheduleTags - In the implementation block
@property (assign) BOOL getScheduleChanges;              //@synthesize getScheduleChanges=_getScheduleChanges - In the implementation block
-(void)setGetScheduleTags:(BOOL)arg1 ;
-(void)setGetScheduleChanges:(BOOL)arg1 ;
-(BOOL)getScheduleTags;
-(BOOL)getScheduleChanges;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 appSpecificCalendarItemClass:(Class)arg5 ;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 ;
-(id)copyAdditionalPropElements;
-(void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2 ;
@end
