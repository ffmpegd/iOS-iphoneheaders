/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:10:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask {

	CoreDAVAction* _backingAction;

}

@property (nonatomic,retain) CoreDAVAction * backingAction;              //@synthesize backingAction=_backingAction - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setBackingAction:(CoreDAVAction *)arg1 ;
-(CoreDAVAction *)backingAction;
@end

