/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOLocationShiftFunctionResponse : NSObject {

	SCD_Struct_GE15 _originalCoordinate;
	SCD_Struct_GE15 _shiftedCoordinate;
	double _creationTime;
	double _params[9];
	double _radius;
	BOOL _isPolyLocationShift;
	BOOL _shouldUsePolyShiftFunction;

}

@property (assign,nonatomic) SCD_Struct_GE15 originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
-(SCD_Struct_GE15)originalCoordinate;
-(BOOL)needsNewFunctionForCoordinate:(SCD_Struct_GE15)arg1 ;
-(BOOL)wantsNewFunctionForCoordinate:(SCD_Struct_GE15)arg1 ;
-(SCD_Struct_GE15)shiftedCoordinateForCoordinate:(SCD_Struct_GE15)arg1 accuracy:(double*)arg2 ;
-(id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE15)arg2 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE15)arg2 ;
-(void)setOriginalCoordinate:(SCD_Struct_GE15)arg1 ;
@end
