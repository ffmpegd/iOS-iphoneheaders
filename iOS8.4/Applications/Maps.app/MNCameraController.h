/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MKMapView, NSMutableArray, MNCircleAnnotation;

@interface MNCameraController : NSObject {

	MKMapView* _mapView;
	char _disableAnimationInNextCameraUpdate;
	char _onRoute;
	NSMutableArray* _cameraDebugPointOfInterestAnnotations;
	MNCircleAnnotation* _cameraDebugPointOfFocusAnnotation;
	double _tracePlaybackSpeedMultiplier;

}

@property (nonatomic,retain) MKMapView * mapView;                                  //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) char disableAnimationInNextCameraUpdate;              //@synthesize disableAnimationInNextCameraUpdate=_disableAnimationInNextCameraUpdate - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) char onRoute;                                         //@synthesize onRoute=_onRoute - In the implementation block
@property (assign,nonatomic) double userZoom; 
-(void)setOnRoute:(char)arg1 ;
-(void)refreshCameraContext:(id)arg1 location:(id)arg2 ;
-(void)transitionCameraContext:(id)arg1 trackingInMapMode:(int)arg2 animated:(char)arg3 startLocation:(id)arg4 startHandler:(/*^block*/id)arg5 ;
-(void)setUserZoomRangeWithMinZoom:(double)arg1 maxZoom:(double)arg2 ;
-(void)setUserZoom:(double)arg1 ;
-(double)userZoom;
-(void)setCameraPanStyle:(int)arg1 ;
-(void)clearDebugAnnotations;
-(void)updateCameraContext:(id)arg1 location:(id)arg2 ;
-(char)onRoute;
-(void)_updateCameraContext:(id)arg1 forLocation:(id)arg2 animated:(char)arg3 ;
-(void)updateCameraDebugAnnotationsForContext:(id)arg1 ;
-(char)disableAnimationInNextCameraUpdate;
-(void)setDisableAnimationInNextCameraUpdate:(char)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)init;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(void)stopTracking;
-(void)pauseTracking;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
@end

