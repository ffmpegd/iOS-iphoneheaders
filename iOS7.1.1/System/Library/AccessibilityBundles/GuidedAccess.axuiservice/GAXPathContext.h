/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@interface GAXPathContext : NSObject {

	CGPathRef _lastSeenCGPath;
	void* _linePointsContexts;
	void* _linePointsIndicesPerElementIndices;

}

@property (nonatomic,readonly) CGPathRef lastSeenCGPath;                              //@synthesize lastSeenCGPath=_lastSeenCGPath - In the implementation block
@property (nonatomic,readonly) void* linePointsContexts;                              //@synthesize linePointsContexts=_linePointsContexts - In the implementation block
@property (nonatomic,readonly) void* linePointsIndicesPerElementIndices;              //@synthesize linePointsIndicesPerElementIndices=_linePointsIndicesPerElementIndices - In the implementation block
-(CGPathRef)lastSeenCGPath;
-(void*)linePointsContexts;
-(void*)linePointsIndicesPerElementIndices;
-(id)initWithLastSeenCGPath:(CGPathRef)arg1 ;
-(void)dealloc;
@end

