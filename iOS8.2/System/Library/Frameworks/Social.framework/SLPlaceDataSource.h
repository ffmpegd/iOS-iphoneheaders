/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLPlaceDataSource
@property (__weak) NSObject*<SLPlaceDataSourceDelegate> delegate; 
@required
-(id)currentLocation;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1;
-(void)setDelegate:(id)arg1;
-(NSObject*<SLPlaceDataSourceDelegate>)delegate;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;

@end

