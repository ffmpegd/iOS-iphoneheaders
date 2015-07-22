/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKSearchCompleterDelegate;
#import <MapKit/MapKit-Structs.h>
@class NSString, CLLocation, NSArray;

@interface MKSearchCompleter : NSObject {

	NSString* _fragment;
	SCD_Struct_MK2 _boundingRegion;
	id<MKSearchCompleterDelegate> _delegate;
	id _context;
	NSString* _identifier;
	long long _entriesType;
	long long _listType;
	double _timeSinceLastInBoundingRegion;
	CLLocation* _deviceLocation;

}

@property (assign,nonatomic) SCD_Struct_MK2 boundingRegion;                              //@synthesize boundingRegion=_boundingRegion - In the implementation block
@property (nonatomic,copy) NSString * fragment;                                          //@synthesize fragment=_fragment - In the implementation block
@property (nonatomic,retain) CLLocation * deviceLocation;                                //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (assign,nonatomic,__weak) id<MKSearchCompleterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (assign,nonatomic,__weak) id context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long entriesType;                                      //@synthesize entriesType=_entriesType - In the implementation block
@property (assign,nonatomic) long long listType;                                         //@synthesize listType=_listType - In the implementation block
@property (assign,nonatomic) double timeSinceLastInBoundingRegion;                       //@synthesize timeSinceLastInBoundingRegion=_timeSinceLastInBoundingRegion - In the implementation block
+(id)alloc;
-(BOOL)isSearching;
-(BOOL)resultsAreCurrent;
-(SCD_Struct_MK2)boundingRegion;
-(void)setBoundingRegion:(SCD_Struct_MK2)arg1 ;
-(double)timeSinceLastInBoundingRegion;
-(void)setTimeSinceLastInBoundingRegion:(double)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<MKSearchCompleterDelegate>)arg1 ;
-(id)init;
-(id<MKSearchCompleterDelegate>)delegate;
-(NSString *)identifier;
-(id)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContext:(id)arg1 ;
-(NSArray *)results;
-(NSString *)fragment;
-(void)setFragment:(NSString *)arg1 ;
-(void)setDeviceLocation:(CLLocation *)arg1 ;
-(CLLocation *)deviceLocation;
-(void)setListType:(long long)arg1 ;
-(void)setEntriesType:(long long)arg1 ;
-(long long)listType;
-(long long)entriesType;
-(void)retry;
@end
