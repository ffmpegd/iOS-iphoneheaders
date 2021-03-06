/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TIHandwritingStrokes, NSArray, NSString, TIInputManagerHandwriting;

@interface RecognizeDrawingOperation : NSOperation {

	TIHandwritingStrokes* _strokes;
	int _recognitionType;
	NSArray* _candidates;
	NSString* _history;
	TIInputManagerHandwriting* _im;

}

@property (nonatomic,retain) NSArray * candidates;                             //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) TIInputManagerHandwriting * manager;              //@synthesize im=_im - In the implementation block
@property (nonatomic,retain) NSString * history;                               //@synthesize history=_history - In the implementation block
+(id)recognitionResultsForStrokes:(id)arg1 withRecognitionType:(int)arg2 history:(id)arg3 shouldCancel:(/*^block*/ id)arg4 ;
-(void)dealloc;
-(id)candidates;
-(void)setCandidates:(id)arg1 ;
-(void)main;
-(id)manager;
-(void)setManager:(id)arg1 ;
-(id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3 ;
-(id)history;
-(void)setHistory:(id)arg1 ;
@end

