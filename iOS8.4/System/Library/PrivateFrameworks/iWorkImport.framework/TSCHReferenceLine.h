/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSCHStyleOwning.h>
#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport.h>

@class TSCHChartModel, TSCHChartAxisID, TSCHReferenceLineStyle, TSCHReferenceLineNonStyle, NSUUID, NSString, TSCHChartAxis;

@interface TSCHReferenceLine : NSObject <TSCHUnretainedParent, TSCHStyleOwning, TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport> {

	TSCHChartModel* mModel;
	TSCHChartAxisID* mAxisID;
	TSCHReferenceLineStyle* mStyle;
	TSCHReferenceLineNonStyle* mNonStyle;
	NSUUID* mUUID;
	unsigned long long mStyleSwapIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSCHChartAxis * axis; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) BOOL lineShowing; 
@property (nonatomic,readonly) BOOL labelShowing; 
@property (nonatomic,readonly) BOOL valueLabelShowing; 
@property (nonatomic,readonly) unsigned long long styleSwapIndex; 
@property (nonatomic,copy,readonly) TSCHChartAxisID * axisID; 
+(unsigned char)styleOwnerPathType;
+(unsigned long long)styleSwapOrStyleOwnerIndexFromAxisID:(id)arg1 refLineIndex:(unsigned long long)arg2 ;
+(id)p_lineLabelForType:(unsigned long long)arg1 ;
+(unsigned long long)maxNumberOfReferenceLines;
+(id)axisIDFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1 ;
+(unsigned long long)refLineIndexFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1 ;
+(id)defaultNonStyleWithContext:(id)arg1 referenceLineType:(unsigned long long)arg2 axis:(id)arg3 ;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg1 ;
-(id)objectValueForProperty:(int)arg1 ;
-(TSCHChartAxisID *)axisID;
-(int)intValueForProperty:(int)arg1 defaultValue:(int)arg2 ;
-(id)chartInfo;
-(void)clearParent;
-(BOOL)lineShowing;
-(int)defaultPropertyForGeneric:(int)arg1 ;
-(id)p_genericToDefaultPropertyMap;
-(id)drawableInfo;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2 ;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2 ;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg1 ;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 ;
-(float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2 ;
-(id)initWithModel:(id)arg1 axisID:(id)arg2 index:(unsigned long long)arg3 uuid:(id)arg4 ;
-(double)referenceLineAxisValue;
-(id)localizedTypeName;
-(BOOL)labelShowing;
-(BOOL)valueLabelShowing;
-(unsigned long long)styleSwapIndex;
-(void)setStyle:(id)arg1 nonStyle:(id)arg2 ;
-(void)dealloc;
-(id)style;
-(id)context;
-(TSCHChartAxis *)axis;
-(id)model;
-(id)valueForProperty:(int)arg1 ;
-(NSUUID *)uuid;
-(id)defaultProperties;
@end

