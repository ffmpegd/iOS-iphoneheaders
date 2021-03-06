/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DScene, TSCH3DCamera;

@interface TSCH3DLabelsRendererTransforms : NSObject {

	TSCH3DScene* mScene;
	TSCH3DCamera* mCamera;
	ChartScenePropertyAccessor* mAccessor;
	tmat4x4<float> mProjector;
	tmat4x4<float> mUnitToWorld;
	tmat4x4<float> mStageToWorld;
	tmat4x4<float> mWorldToStage;
	bitset<5> mValidBits;

}

@property (nonatomic,retain) TSCH3DScene * scene; 
@property (nonatomic,retain) TSCH3DCamera * camera; 
+(id)transforms;
-(void)setScene:(id)arg1 ;
-(ChartScenePropertyAccessor*)accessor;
-(void)resetWithScene:(id)arg1 camera:(id)arg2 ;
-(tvec3<float>)projectPoint:(const tvec3<float>*)arg1 ;
-(const tmat4x4<float>*)unitToWorld;
-(const tmat4x4<float>*)worldToStage;
-(const tmat4x4<float>*)p_stageToWorld;
-(const tmat4x4<float>*)p_projector;
-(id)scene;
-(void)dealloc;
-(id).cxx_construct;
-(id)camera;
-(void)setCamera:(id)arg1 ;
-(tvec3<float>)samples;
@end

