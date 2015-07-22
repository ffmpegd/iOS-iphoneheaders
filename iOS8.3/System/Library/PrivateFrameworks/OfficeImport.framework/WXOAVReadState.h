/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OAVReadState.h>

@class WXReadState, WDParagraph, NSMutableDictionary;

@interface WXOAVReadState : OAVReadState {

	WXReadState* mWxState;
	WDParagraph* mParagraph;
	NSMutableDictionary* mNextVmlShapeIdToTextBoxMap;

}
-(void)dealloc;
-(id)currentParagraph;
-(void)setCurrentParagraph:(id)arg1 ;
-(id)wxReadState;
-(id)nextVmlShapeIdToTextBoxMap;
-(id)initWithWXReadState:(id)arg1 ;
@end
