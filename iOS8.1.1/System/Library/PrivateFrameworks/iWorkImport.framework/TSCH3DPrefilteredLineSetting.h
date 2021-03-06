/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDStroke;

@interface TSCH3DPrefilteredLineSetting : NSObject {

	BOOL mDisableColorOutput;
	BOOL mCullBackfaces;
	BOOL mUseNormals;
	tvec4<float> mFilterRadius;
	float mLineWidth;
	tvec4<float> mStrokeColor;
	TSDStroke* mStroke;

}

@property (assign,nonatomic) BOOL useNormals; 
@property (assign,nonatomic) BOOL disableColorOutput; 
@property (assign,nonatomic) BOOL cullBackfaces; 
@property (assign,nonatomic) tvec4<float> filterRadius; 
@property (assign,nonatomic) float lineWidth; 
@property (assign,nonatomic) tvec4<float> strokeColor; 
@property (nonatomic,copy) TSDStroke * stroke; 
+(id)setting;
-(void)setUseNormals:(BOOL)arg1 ;
-(void)setDisableColorOutput:(BOOL)arg1 ;
-(void)setCullBackfaces:(BOOL)arg1 ;
-(void)setFilterRadius:(tvec4<float>)arg1 ;
-(BOOL)useNormals;
-(BOOL)disableColorOutput;
-(BOOL)cullBackfaces;
-(tvec4<float>)filterRadius;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSDStroke *)stroke;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setStrokeColor:(tvec4<float>)arg1 ;
-(tvec4<float>)strokeColor;
-(void)setStroke:(TSDStroke *)arg1 ;
@end

