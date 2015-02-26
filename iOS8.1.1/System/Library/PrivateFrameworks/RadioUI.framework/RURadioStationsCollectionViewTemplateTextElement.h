/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIFont, NSString, MPUTextDrawingCache;

@interface RURadioStationsCollectionViewTemplateTextElement : NSObject {

	UIFont* _emphasizedFont;
	UIFont* _regularFont;
	long long _numberOfLines;
	double _scaledFirstBaselineOffset;
	BOOL _wantsAdditionalLineForExtraLargeContentSizes;
	BOOL _wantsEmphasizedStationName;
	NSString* _fontTextStyle;
	double _defaultFirstBaselineOffset;
	long long _defaultNumberOfLines;
	MPUTextDrawingCache* _textDrawingCache;
	MPUTextDrawingCache* _nowPlayingTextDrawingCache;

}

@property (nonatomic,readonly) NSString * fontTextStyle;                                       //@synthesize fontTextStyle=_fontTextStyle - In the implementation block
@property (nonatomic,readonly) double defaultFirstBaselineOffset;                              //@synthesize defaultFirstBaselineOffset=_defaultFirstBaselineOffset - In the implementation block
@property (nonatomic,readonly) long long defaultNumberOfLines;                                 //@synthesize defaultNumberOfLines=_defaultNumberOfLines - In the implementation block
@property (nonatomic,readonly) BOOL wantsAdditionalLineForExtraLargeContentSizes;              //@synthesize wantsAdditionalLineForExtraLargeContentSizes=_wantsAdditionalLineForExtraLargeContentSizes - In the implementation block
@property (nonatomic,readonly) BOOL wantsEmphasizedStationName;                                //@synthesize wantsEmphasizedStationName=_wantsEmphasizedStationName - In the implementation block
@property (nonatomic,readonly) MPUTextDrawingCache * textDrawingCache;                         //@synthesize textDrawingCache=_textDrawingCache - In the implementation block
@property (nonatomic,readonly) MPUTextDrawingCache * nowPlayingTextDrawingCache;               //@synthesize nowPlayingTextDrawingCache=_nowPlayingTextDrawingCache - In the implementation block
@property (nonatomic,readonly) long long numberOfLines; 
@property (nonatomic,readonly) double scaledFirstBaselineOffset; 
@property (nonatomic,readonly) UIFont * tallestFont; 
-(long long)numberOfLines;
-(double)scaledFirstBaselineOffset;
-(MPUTextDrawingCache *)nowPlayingTextDrawingCache;
-(MPUTextDrawingCache *)textDrawingCache;
-(void)updateForPreferredContentSizeChange;
-(UIFont *)tallestFont;
-(id)_newTextDrawingCacheWithStationNameEmphasizer:(BOOL)arg1 ;
-(id)_fontWithEmphasis:(BOOL)arg1 ;
-(void)_updateTextAttributesTextDrawingCache:(id)arg1 ;
-(NSString *)fontTextStyle;
-(id)_textAttributesByReplacingFontInTextAttributes:(id)arg1 withFont:(id)arg2 ;
-(BOOL)wantsEmphasizedStationName;
-(id)initWithFontTextStyle:(id)arg1 defaultFirstBaselineOffset:(double)arg2 defaultNumberOfLines:(long long)arg3 wantsAdditionalLineForExtraLargeContentSizes:(BOOL)arg4 wantsEmphasizedStationName:(BOOL)arg5 ;
-(double)defaultFirstBaselineOffset;
-(long long)defaultNumberOfLines;
-(BOOL)wantsAdditionalLineForExtraLargeContentSizes;
@end
