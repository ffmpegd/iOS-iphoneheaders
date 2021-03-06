/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityIdentification.h>

@class NSString, NSArray;

@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification>

@property (assign,nonatomic,@dynamic) id accessibilityDelegate; 
@property (assign,nonatomic,@dynamic) CGRect bounds; 
@property (nonatomic,retain) NSArray * accessibilityContainerElements; 
@property (assign,nonatomic,@dynamic) id accessibilityContainer; 
@property (assign,nonatomic,@dynamic) BOOL isAccessibilityElement; 
@property (nonatomic,@dynamic,retain) NSString * accessibilityLabel; 
@property (nonatomic,@dynamic,retain) NSString * accessibilityHint; 
@property (nonatomic,@dynamic,retain) NSString * accessibilityValue; 
@property (assign,nonatomic,@dynamic) CGRect accessibilityFrame; 
@property (assign,nonatomic,@dynamic) unsigned long long accessibilityTraits; 
@property (nonatomic,@dynamic,copy) NSString * accessibilityIdentifier; 
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(id)accessibilityContainerElements;
-(void)setAccessibilityDelegate:(id)arg1 ;
-(id)accessibilityDelegate;
-(void)setTableCellYOffset:(float)arg1 ;
-(void)setDelegate:(id)arg1 forAttribute:(int)arg2 withSelector:(SEL)arg3 ;
-(void)delegateSpecificsForAttribute:(int)arg1 delegate:(id*)arg2 selector:(SEL*)arg3 ;
-(void)setAccessibilityContainerElements:(id)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 ;
@end

