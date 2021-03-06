/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/ASTask.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray, NSMutableSet, ASMailMessage, NSSet;

@interface ASFolderItemsSyncTask : ASTask <NSCopying> {

	NSString* _folderID;
	NSString* _previousSyncKey;
	int _dataclass;
	NSArray* _actions;
	NSMutableSet* _rejectedServerIds;
	bool _isInitialSync;
	bool _isInitialBootstrapSync;
	bool _willUpdate;
	bool _moreAvailable;
	bool _isResyncAfterConnectionFailed;
	bool _haveShortcut121Response;
	int _numReplacedItems;
	int _numDownloadedElements;
	bool _isSpinning;
	int _bodyTruncationBytes;
	int _mimeSupport;
	int _filterDays;
	ASMailMessage* _streamingMailMessage;
	NSArray* _perservedActions;
	NSArray* _pushedActions;
	bool _hadFalseMoreAvailable;
	bool _deletesAsMoves;

}

@property (readonly) NSString * folderID;                             //@synthesize folderID=_folderID - In the implementation block
@property (copy) NSString * previousSyncKey;                          //@synthesize previousSyncKey=_previousSyncKey - In the implementation block
@property (readonly) NSString * previousSyncKeyForAgent; 
@property (assign) int dataclass;                                     //@synthesize dataclass=_dataclass - In the implementation block
@property (retain) NSArray * actions;                                 //@synthesize actions=_actions - In the implementation block
@property (assign) bool isInitialSync;                                //@synthesize isInitialSync=_isInitialSync - In the implementation block
@property (assign) bool isInitialBootstrapSync;                       //@synthesize isInitialBootstrapSync=_isInitialBootstrapSync - In the implementation block
@property (assign) bool willUpdate;                                   //@synthesize willUpdate=_willUpdate - In the implementation block
@property (assign) bool moreAvailable;                                //@synthesize moreAvailable=_moreAvailable - In the implementation block
@property (assign) int bodyTruncationBytes;                           //@synthesize bodyTruncationBytes=_bodyTruncationBytes - In the implementation block
@property (setter=setMIMESupport:) int mimeSupport;                   //@synthesize mimeSupport=_mimeSupport - In the implementation block
@property (assign) int filterDays;                                    //@synthesize filterDays=_filterDays - In the implementation block
@property (retain) ASMailMessage * streamingMailMessage;              //@synthesize streamingMailMessage=_streamingMailMessage - In the implementation block
@property (assign) bool isResyncAfterConnectionFailed;                //@synthesize isResyncAfterConnectionFailed=_isResyncAfterConnectionFailed - In the implementation block
@property (readonly) NSSet * rejectedServerIds;                       //@synthesize rejectedServerIds=_rejectedServerIds - In the implementation block
@property (retain) NSArray * perservedActions;                        //@synthesize perservedActions=_perservedActions - In the implementation block
@property (retain) NSArray * pushedActions;                           //@synthesize pushedActions=_pushedActions - In the implementation block
-(void)setActions:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(double)percentComplete;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)actions;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(bool)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(bool)processContext:(id)arg1 ;
-(int)dataclass;
-(int)bodyType;
-(id)replacementObjectForEmailItem:(id)arg1 ;
-(int)numDownloadedElements;
-(int)mimeSupport;
-(int)_mimeSupportCode;
-(int)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char*)arg5 dataLength:(int)arg6 ;
-(void)setBodyTruncationBytes:(int)arg1 ;
-(id)streamingMailMessage;
-(void)setStreamingMailMessage:(id)arg1 ;
-(id)previousSyncKey;
-(void)setPreviousSyncKey:(id)arg1 ;
-(bool)willUpdate;
-(void)setWillUpdate:(bool)arg1 ;
-(void)setIsInitialSync:(bool)arg1 ;
-(void)setIsInitialBootstrapSync:(bool)arg1 ;
-(id)perservedActions;
-(id)previousSyncKeyForAgent;
-(bool)isInitialSync;
-(id)pushedActions;
-(id)rejectedServerIds;
-(id)initWithFolderID:(id)arg1 deletesAsMoves:(bool)arg2 ;
-(void)setFilterDays:(int)arg1 ;
-(void)setMoreAvailable:(bool)arg1 ;
-(void)_setSpinning:(bool)arg1 ;
-(void)setIsResyncAfterConnectionFailed:(bool)arg1 ;
-(void)setPerservedActions:(id)arg1 ;
-(void)setPushedActions:(id)arg1 ;
-(void)appendSupportedFieldsData:(id)arg1 ;
-(int)_bodyTruncationCode;
-(int)_mimeTruncationCode;
-(void)appendActionData:(id)arg1 ;
-(void)_handleChangedLeaf:(id)arg1 addedChangesPtr:(id*)arg2 modifiedChangesPtr:(id*)arg3 removedChangesPtr:(id*)arg4 ;
-(void)_handleResponseToLeaf:(id)arg1 addedResponsesPtr:(id*)arg2 modifiedResponsesPtr:(id*)arg3 removedResponsesPtr:(id*)arg4 fetchedResponsesPtr:(id*)arg5 ;
-(void)_addRejectedServerId:(id)arg1 ;
-(void)reportStatusWithError:(id)arg1 ;
-(bool)checkForErrorInContext:(id)arg1 ;
-(int)bodyTruncationBytes;
-(int)filterDays;
-(bool)isInitialBootstrapSync;
-(bool)isResyncAfterConnectionFailed;
-(id)folderID;
-(bool)moreAvailable;
-(void)setMIMESupport:(int)arg1 ;
-(void)setDataclass:(int)arg1 ;
-(id)initWithFolderID:(id)arg1 ;
@end

