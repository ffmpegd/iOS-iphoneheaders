/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@interface MNStarkSignStyle : NSObject {

	int _variant;

}

@property (nonatomic,readonly) int variant;              //@synthesize variant=_variant - In the implementation block
+(id)styleWithVariant:(int)arg1 ;
-(BOOL)displaysDistance;
-(id)secondaryDistanceFont;
-(id)instructionsFont;
-(CGSize)arrowReferenceSize;
-(BOOL)displaysShield;
-(id)primaryDistanceFont;
-(id)distanceColor;
-(float)instructionsLabelTopMargin;
-(SCD_Struct_MN5)arrowMetrics;
-(int)desiredFraming;
-(int)variant;
-(BOOL)isSecondary;
-(id)initWithVariant:(int)arg1 ;
@end
