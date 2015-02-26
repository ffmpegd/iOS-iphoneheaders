/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DNormalDirectionMapper.h>

@interface TSCH3DPieBevelEdgeNormalDirectionMapper : TSCH3DNormalDirectionMapper {

	long long mTopMeshOffset;
	long long mAngleSteps;
	long long mRadiusSteps;
	long long mAngleLimit;
	long long mRadiusLimit;

}
-(void)mapFromVertexArray:(const tvec3<float>*)arg1 normalArray:(const tvec3<float>*)arg2 normalMatrix:(const tmat3x3<float>*)arg3 numVertices:(long long)arg4 destination:(vector<unsigned char, std::__1::allocator<unsigned char> >*)arg5 ;
-(id)initWithTopMeshOffset:(long long)arg1 angleSteps:(long long)arg2 radiusSteps:(long long)arg3 angleLimit:(long long)arg4 radiusLimit:(long long)arg5 ;
@end
