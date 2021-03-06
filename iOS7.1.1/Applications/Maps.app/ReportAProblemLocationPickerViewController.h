/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MapKit/MKMapViewDelegate.h>
#import <Maps/ReportAProblemReporter.h>

@protocol ReportAProblemReporter;
@class MKMapView, NSData, ReportAProblemLocationInstructionsView, UILongPressGestureRecognizer, SearchResult, VKLabelMarker, UIViewController, NSString, UISegmentedControl, ReportAProblemNavigationController;

@interface ReportAProblemLocationPickerViewController : UIViewController <UIGestureRecognizerDelegate, MKMapViewDelegate, ReportAProblemReporter> {

	MKMapView* _externalMapView;
	MKMapView* _locationPickerMapView;
	NSData* _pictureData;
	ReportAProblemLocationInstructionsView* _instructionsView;
	UILongPressGestureRecognizer* _longPress;
	SearchResult* _searchResult;
	SCD_Struct_Si13 _originalCoordinate;
	VKLabelMarker* _selectedLabelMarker;
	UIViewController<ReportAProblemReporter>* _nextViewController;
	NSString* _instructionalText;
	unsigned _mapType;
	BOOL _initialLocationSet;
	BOOL _enableReverseGeocode;
	BOOL _canDropPin;
	BOOL _canSelectLabels;
	BOOL _shouldShowTraffic;
	UISegmentedControl* _mapTypeSegmentedControl;

}

@property (assign,nonatomic) BOOL enableReverseGeocode;                                                  //@synthesize enableReverseGeocode=_enableReverseGeocode - In the implementation block
@property (assign,nonatomic) BOOL canDropPin;                                                            //@synthesize canDropPin=_canDropPin - In the implementation block
@property (assign,nonatomic) BOOL canSelectLabels;                                                       //@synthesize canSelectLabels=_canSelectLabels - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTraffic;                                                     //@synthesize shouldShowTraffic=_shouldShowTraffic - In the implementation block
@property (assign,nonatomic) unsigned mapType;                                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) UIViewController<ReportAProblemReporter> * nextViewController;              //@synthesize nextViewController=_nextViewController - In the implementation block
@property (nonatomic,retain) NSString * instructionalText;                                               //@synthesize instructionalText=_instructionalText - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                                //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) SCD_Struct_Si13 originalCoordinate;                                         //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) ReportAProblemNavigationController * navigationController; 
@property (nonatomic,retain) MKMapView * externalMapView;                                                //@synthesize externalMapView=_externalMapView - In the implementation block
@property (nonatomic,retain) VKLabelMarker * selectedLabelMarker;                                        //@synthesize selectedLabelMarker=_selectedLabelMarker - In the implementation block
-(void)didChangeValueOfSegmentedControl:(id)arg1 ;
-(void)setSearchResult:(id)arg1 ;
-(void)setCanDropPin:(BOOL)arg1 ;
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(void)sendButtonTitleDidChange;
-(void)_createCustomSearchResultForDroppedPinAtPoint:(SCD_Struct_Si13)arg1 ;
-(BOOL)canReportProblem;
-(void)next:(id)arg1 ;
-(void)setNextViewController:(id)arg1 ;
-(void)setEnableReverseGeocode:(BOOL)arg1 ;
-(void)setCanSelectLabels:(BOOL)arg1 ;
-(void)setInstructionalText:(id)arg1 ;
-(void)trackingPressed:(id)arg1 ;
-(void)_updateNextButton;
-(void)_dropPinAtLocation:(SCD_Struct_Si13)arg1 animated:(BOOL)arg2 ;
-(void)setExternalMapView:(id)arg1 ;
-(BOOL)canSelectLabels;
-(BOOL)canDropPin;
-(void)_reverseGeocode:(SCD_Struct_Si13)arg1 ;
-(void)setSelectedLabelMarker:(id)arg1 ;
-(BOOL)_shouldSendNext;
-(void)_takeAPicture;
-(id)_mapLocation;
-(id)_problems;
-(id)externalMapView;
-(id)nextViewController;
-(BOOL)enableReverseGeocode;
-(id)instructionalText;
-(void)send:(id)arg1 ;
-(BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(id)navigationController;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)setOriginalCoordinate:(SCD_Struct_Si13)arg1 ;
-(void)cancel:(id)arg1 ;
-(SCD_Struct_Si13)originalCoordinate;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned)arg3 fromOldState:(unsigned)arg4 ;
-(id)searchResult;
-(unsigned)mapType;
-(void)setMapType:(unsigned)arg1 ;
-(id)selectedLabelMarker;
-(void)setShouldShowTraffic:(BOOL)arg1 ;
-(BOOL)shouldShowTraffic;
@end

