/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject {

	NSMutableSet* _edges;
	long long _indegree;
	CKRecord* _record;

}

@property (nonatomic,copy) NSMutableSet * edges;              //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) long long indegree;              //@synthesize indegree=_indegree - In the implementation block
@property (nonatomic,retain) CKRecord * record;               //@synthesize record=_record - In the implementation block
-(id)init;
-(id)description;
-(void)setEdges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)edges;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)CKPropertiesDescription;
-(long long)indegree;
-(void)setIndegree:(long long)arg1 ;
@end

