/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:10:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CoreDAVAction : NSObject {

	int _action;
	id _context;
	id _changeContext;

}

@property (nonatomic,readonly) int action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id changeContext;              //@synthesize changeContext=_changeContext - In the implementation block
-(void)dealloc;
-(id)description;
-(int)action;
-(id)context;
-(id)initWithAction:(int)arg1 context:(id)arg2 ;
-(id)changeContext;
-(void)setChangeContext:(id)arg1 ;
@end
