/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface UITableTextAccessibilityElement : UIAccessibilityElement {

	id _attributeDelegate;
	SEL _selector;
	id textDelegate;

}

@property (assign,nonatomic) id textDelegate; 
-(char)_accessibilityIsSpeakThisElement;
-(char)_accessibilitySupportsActivateAction;
-(char)_accessibilityIsScannerElement;
-(void)setTextDelegate:(id)arg1 ;
-(void)setAttributeDelegate:(id)arg1 ;
-(id)_accessibilityCustomActions;
-(char)_accessibilityIsInTableCell;
-(id)accessibilityCustomRotorTitles;
-(id)accessibilityCustomRotorItemsAtIndex:(int)arg1 ;
-(char)_accessibilityIsAwayAlertElement;
-(id)_accessibilityEquivalenceTag;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilitySpeakThisString;
-(char)_accessibilityRetainsCustomRotorActionSetting;
-(id)textDelegate;
-(id)_tableViewCellTextDelegate;
-(id)_tableViewCellAttributeDelegate;
-(id)attributeDelegate;
-(id)description;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityLanguage;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(char)accessibilityActivate;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end
