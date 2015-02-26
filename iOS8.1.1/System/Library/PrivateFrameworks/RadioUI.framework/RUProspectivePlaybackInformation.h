/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <MediaPlayerUI/MPUProspectivePlaybackInformation.h>

@class RadioStation;

@interface RUProspectivePlaybackInformation : MPUProspectivePlaybackInformation {

	RadioStation* _radioStation;

}

@property (nonatomic,readonly) RadioStation * radioStation;              //@synthesize radioStation=_radioStation - In the implementation block
-(RadioStation *)radioStation;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRadioProspectivePlaybackInformation;
-(id)initWithRadioStation:(id)arg1 ;
@end
