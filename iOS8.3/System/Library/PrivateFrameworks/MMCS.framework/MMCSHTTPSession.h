/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:18:52 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MMCS/NSURLSessionDelegate.h>
#import <MMCS/NSURLSessionTaskDelegate.h>
#import <MMCS/NSURLSessionDataDelegate.h>
#import <MMCS/NSURLSessionDataDelegatePrivate.h>

@class NSString, NSURLSession, NSURLSessionConfiguration, NSOperationQueue, NSMutableDictionary;

@interface MMCSHTTPSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate> {

	char _isBackground;
	NSString* _sessionName;
	NSString* _sessionConfigurationId;
	NSURLSession* _urlSession;
	NSURLSessionConfiguration* _urlSessionConfiguration;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _contextsForTasks;

}

@property (nonatomic,retain) NSString * sessionName;                                           //@synthesize sessionName=_sessionName - In the implementation block
@property (nonatomic,retain) NSString * sessionConfigurationId;                                //@synthesize sessionConfigurationId=_sessionConfigurationId - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSession;                                        //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * urlSessionConfiguration;              //@synthesize urlSessionConfiguration=_urlSessionConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contextsForTasks;                           //@synthesize contextsForTasks=_contextsForTasks - In the implementation block
@property (assign) char isBackground;                                                          //@synthesize isBackground=_isBackground - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(NSString *)description;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)invalidateAndCancel;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSString *)sessionConfigurationId;
-(char)isBackground;
-(NSString *)sessionName;
-(id)dataTaskWithRequest:(id)arg1 uuid:(id)arg2 forHTTPContext:(id)arg3 ;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(id)initWithName:(id)arg1 sessionConfigurationId:(id)arg2 configuration:(id)arg3 ;
-(void)setSessionName:(NSString *)arg1 ;
-(void)setSessionConfigurationId:(NSString *)arg1 ;
-(void)setUrlSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)setContextsForTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)contextsForTasks;
-(id)mmcsHTTPContextForTask:(id)arg1 reason:(id)arg2 ;
-(NSURLSessionConfiguration *)urlSessionConfiguration;
-(void)setIsBackground:(char)arg1 ;
@end

