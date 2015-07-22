/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/NSCopying.h>
#import <StoreKitUI/NSSecureCoding.h>

@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding> {

	UIColor* _backgroundColor;
	UIColor* _highlightedTextColor;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;

}

@property (nonatomic,readonly) int schemeStyle; 
@property (nonatomic,copy) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * highlightedTextColor;              //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,copy) UIColor * primaryTextColor;                  //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryTextColor;                //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
+(char)supportsSecureCoding;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)highlightedTextColor;
-(UIColor *)primaryTextColor;
-(id)initWithColorSchemeDictionary:(id)arg1 ;
-(int)schemeStyle;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
@end
