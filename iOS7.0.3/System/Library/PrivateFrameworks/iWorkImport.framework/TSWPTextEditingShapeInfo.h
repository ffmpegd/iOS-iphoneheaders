/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSWPShapeInfo.h>

@protocol TSWPTextEditingDelegate;
@interface TSWPTextEditingShapeInfo : TSWPShapeInfo {

	<TSWPTextEditingDelegate>* _delegate;

}

@property (assign,nonatomic) <TSWPTextEditingDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(Class)repClass;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(Class)layoutClass;
@end

