/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PBRequesterDelegate <NSObject>
@optional
-(void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
-(void)requesterDidFinish:(id)arg1;
-(void)requesterDidCancel:(id)arg1;
-(void)requester:(id)arg1 didFailWithError:(id)arg2;
-(void)requesterWillSendRequestForEstablishedConnection:(id)arg1;

@end

