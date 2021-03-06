/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigator.h>

@interface MNDriveNavigator : MNNavigator {

	char _exitedVehicle;
	int _vehicleExitConfidence;
	SCD_Struct_RA2 _vehicleExitCoordinate;

}
+(char)matchedToEndOfLeg:(id)arg1 onRoute:(id)arg2 withRouteMatch:(id)arg3 andLocation:(id)arg4 ;
-(id)_newMapMatcher;
-(int)_checkForArrivalState:(id)arg1 ;
-(char)_allowNavigatorSwitchToTransportType:(int)arg1 atLocation:(id)arg2 ;
-(void)_updateDetectedMotionAtLocation:(id)arg1 ;
-(Class)_guidanceManagerClass;
-(int)_transportType;
@end

