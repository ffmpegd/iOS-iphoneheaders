/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/WebBookmarksXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class WebBookmarksXPCConnection, NSObject, NSString;

@interface SSReadingList : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_xpc_object> _batchedReadingListItems;
	BOOL _batchScheduled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(void)_sendBatchedReadingListItems;
-(void)dealloc;
-(id)init;
-(id)_init;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 ;
@end

