/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartElementProperties.h>

@class TSCH3DArray2D, TSCH3DLabelResources, TSCH3DTransform;

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties {

	TSCH3DArray2D* mLightingModels;
	TSCH3DLabelResources* mLabels;
	TSCH3DTransform* mChartTransform;
	TSCH3DTransform* mElementsTransform;

}

@property (nonatomic,retain) TSCH3DArray2D * lightingModels; 
@property (nonatomic,retain) TSCH3DLabelResources * labels; 
@property (nonatomic,retain) TSCH3DTransform * chartTransform; 
@property (nonatomic,retain) TSCH3DTransform * elementsTransform; 
-(void)setChartTransform:(id)arg1 ;
-(id)chartTransform;
-(id)elementsTransform;
-(id)renderingLightingModelForSeries:(id)arg1 ;
-(id)lightingModels;
-(void)setLightingModels:(id)arg1 ;
-(void)setElementsTransform:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setLabels:(id)arg1 ;
-(id)labels;
@end

