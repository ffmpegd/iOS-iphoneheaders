/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:43:12 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CLLocationManagerRoutineClientInterface.h>

@protocol OS_dispatch_queue, CLLocationManagerDelegate;
@class NSObject, NSXPCConnection, CLLocationManagerRoutine, NSString;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	char _updating;
	NSXPCConnection* _connection;
	id<CLLocationManagerDelegate> _delegate;
	CLLocationManagerRoutine* _locationManagerRoutine;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationManagerRoutine * locationManagerRoutine;              //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (assign,nonatomic) char updating;                                                  //@synthesize updating=_updating - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createConnection;
-(void)setLocationManagerRoutine:(CLLocationManagerRoutine *)arg1 ;
-(CLLocationManagerRoutine *)locationManagerRoutine;
-(void)didUpdateLocations:(id)arg1 ;
-(char)updating;
-(id)initWithCLLocationManagerRoutine:(id)arg1 ;
-(void)setUpdating:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id<CLLocationManagerDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

