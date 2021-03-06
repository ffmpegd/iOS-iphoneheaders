/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RUSearchDataSourceDelegate;
@class RadioSearchRequest;

@interface RUSearchDataSource : NSObject {

	RadioSearchRequest* _activeRequest;
	double _activeRequestTimeInterval;
	id<RUSearchDataSourceDelegate> _delegate;
	double _minimumSearchTimeInterval;
	RadioSearchRequest* _queuedRequest;

}

@property (assign,nonatomic,__weak) id<RUSearchDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<RUSearchDataSourceDelegate>)arg1 ;
-(id)init;
-(id<RUSearchDataSourceDelegate>)delegate;
-(void)_updateResultForQueuedSearchRequest;
-(void)updateResultWithSearchRequest:(id)arg1 ;
@end

