/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSCH3DSceneObjectDelegator.h>
#import <iWorkImport/TSCH3DSceneDelegate.h>

@class TSCH3DChartRep, TSCH3DChartElementAnimationTimeSlice, TSCH3DScene, TSCH3DAnimationTimings, NSMutableDictionary, NSMutableArray, TSCH3DOrderedDictionary, TSCH3DAnimationValueTiming, TSCH3DAnimationTimeSlice, TSCH3DAnimationTiming;

@interface TSCH3DChartAnimation : NSObject <TSCHUnretainedParent, TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate> {

	TSCH3DChartRep* mRep;
	TSCH3DChartElementAnimationTimeSlice* mTimeSlice;
	TSCH3DScene* mScene;
	ChartAnimationTimeRanges mTimeRanges;
	TSCH3DAnimationTimings* mGlobalTimings;
	TSCH3DAnimationTimings* mBackgroundPlaneTimings;
	TSCH3DAnimationTimings* mElementPlaneTimings;
	TSCH3DAnimationTimings* mElementTimings;
	NSMutableDictionary* mTimingContext;
	NSMutableArray* mSceneAnimationClips;
	TSCH3DScene* mLayoutScene;
	TSCH3DOrderedDictionary* mSeparateLayers;
	TSCH3DAnimationValueTiming* mShaderEffectElementsTiming;
	NSMutableArray* mSceneObjectDelegates;

}

@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (nonatomic,readonly) TSCH3DScene * layoutScene; 
@property (nonatomic,readonly) TSCH3DAnimationTimeSlice * timeSlice; 
@property (nonatomic,readonly) TSCH3DAnimationTiming * elementTimings; 
@property (nonatomic,retain) TSCH3DOrderedDictionary * separateLayers; 
+(id)animationFilter;
+(int)chartAnimationType;
+(double)animationFPS;
+(id)animationInfoForBuildType:(int)arg1 ;
+(void)updateScene:(id)arg1 ;
+(void)updateRenderScene:(id)arg1 ;
+(void)updateLayoutScene:(id)arg1 ;
+(bool)dynamicShadowsEnabled;
+(id)animationWithRep:(id)arg1 ;
-(void)addTitleAnimationToClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToValueLabelsTimings:(id)arg1 ;
-(void)addToValueLabelsAnimClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToValueLabelsTimings:(id)arg1 range:(const box<glm::detail::tvec1<float> >*)arg2 ;
-(void)addAllLabelsAnimationToClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)updateRadialTimeRanges;
-(void)updateGrowTimeRanges;
-(void)addToGrowElementTimings:(id)arg1 ;
-(void)addToGrowAnimClips:(id)arg1 sceneObject:(id)arg2 ;
-(id)growGlobalTimingInterpolation;
-(void)updateRotatingGrowTimeRanges;
-(void)addToRotatingGrowElementTimings:(id)arg1 ;
-(bool)p_isStackedBar;
-(bool)p_sequenceInOrder;
-(void)p_updateGrowTimeRangesWithAxesRange:(const box<glm::detail::tvec1<float> >*)arg1 waitTimeAfterAxes:(float)arg2 ;
-(void)p_updateRotatingGrowLabelsRange;
-(bool)p_chunkingStyleHasAxes;
-(void)p_updateAxesOnlyRotatingGrowTimeRanges;
-(void)p_updateAllRotatingGrowTimeRanges;
-(bool)p_usesRotatingGrowEaseOut;
-(void)p_updateNoAxesRotatingGrowTimeRanges;
-(bool)p_growAnimationLinearInterpolation;
-(bool)p_isBar;
-(bool)p_anySeriesHasLabelsEnabled;
-(box<glm::detail::tvec1<float> >)p_timeRangeForGrowElements;
-(void)addToGrowElementTimings:(id)arg1 range:(const box<glm::detail::tvec1<float> >*)arg2 ;
-(void)addToGrowElementTimings:(id)arg1 reserveForLabels:(bool)arg2 ;
-(bool)p_growClipRequiresShaderBasedInterpolation;
-(void)addToShadowBlendTimings:(id)arg1 ;
-(void)addToShadowBlendAnimClips:(id)arg1 ;
-(void)addToShadowBlendAnimClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToChartElementBlendAnimClips:(id)arg1 sceneObject:(id)arg2 shouldUpdateDelayOpaqueFlag:(bool)arg3 shouldUpdateBlendOpaqueFlag:(bool)arg4 shouldUpdateAlwaysRenderFlag:(bool)arg5 needPerElementBlending:(bool)arg6 ;
-(void)addToRadialElementBlendTimings:(id)arg1 ;
-(void)addToZAxisElementBlendTimings:(id)arg1 ;
-(void)addToCraneElementBlendTimings:(id)arg1 ;
-(void)addToChartElementBlendTimings:(id)arg1 range:(const box<glm::detail::tvec1<float> >*)arg2 interpolation:(id)arg3 ;
-(void)addToGrowElementBlendTimings:(id)arg1 ;
-(void)addToRotationBasedElementBlendTimings:(id)arg1 ;
-(void)addToChartRotationAnimationElementBlendAnimClips:(id)arg1 sceneObject:(id)arg2 shouldUpdateAlwaysRenderFlag:(bool)arg3 ;
-(void)addToBackgroundBlendTimings:(id)arg1 ;
-(void)addToBackgroundBlendAnimClips:(id)arg1 scene:(id)arg2 ;
-(void)addStaticBackgroundBlendClipsToClips:(id)arg1 scene:(id)arg2 ;
-(void)addToBackgroundBlendAnimClips:(id)arg1 sceneObject:(id)arg2 ;
-(void)addToRotateAnimClips:(id)arg1 scene:(id)arg2 secondaryAngle:(float)arg3 ;
-(void)addToRotateTimings:(id)arg1 ;
-(box<glm::detail::tvec1<float> >)pieDelayedLabelsRange;
-(id)makeDelegateWithScene:(id)arg1 ;
-(id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2 ;
-(void)willRunForScene:(id)arg1 pipeline:(id)arg2 ;
-(void)didRunForScene:(id)arg1 pipeline:(id)arg2 ;
-(void)clearParent;
-(id)timeSlice;
-(id)initWithRep:(id)arg1 ;
-(void)addAnimationToClips:(id)arg1 forScene:(id)arg2 ;
-(void)addAnimationToClips:(id)arg1 forSceneObject:(id)arg2 scene:(id)arg3 ;
-(id)layoutScene;
-(void)updateTimings;
-(bool)needDynamicShadows;
-(void)p_didUpdateAnimationTime;
-(id)globalTimingInterpolation;
-(void)updateTimeRanges;
-(void)p_addPlaneTimings:(id)arg1 ;
-(void)addToBackgroundPlaneTimings:(id)arg1 ;
-(void)addToElementPlaneTimings:(id)arg1 ;
-(void)addToElementTimings:(id)arg1 ;
-(id)shadowsSelectionBlock;
-(id)gridlineLabelsSelectionBlock;
-(bool)individualValueLabels;
-(CGRect)adjustBodyCanvasBounds:(CGRect)arg1 againstBodyCanvasDrawableFrame:(CGRect)arg2 ;
-(id)separateLayerSceneObjectsSelectionBlocks;
-(id)separateLayers;
-(void)setSeparateLayers:(id)arg1 ;
-(id)elementTimings;
-(id)scene;
-(void)dealloc;
-(id)description;
-(void)update:(float)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(bool)isPie;
@end

