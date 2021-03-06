/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface StocksPreferences : NSObject {

	bool _changeColorSwapped;
	unsigned long long _textDirection;
	bool _textAttachmentDirectionIsRightToLeft;

}

@property (getter=isChangeColorSwapped,nonatomic,readonly) bool changeColorSwapped;              //@synthesize changeColorSwapped=_changeColorSwapped - In the implementation block
@property (nonatomic,readonly) unsigned long long textDirection;                                 //@synthesize textDirection=_textDirection - In the implementation block
@property (nonatomic,readonly) bool textAttachmentDirectionIsRightToLeft;                        //@synthesize textAttachmentDirectionIsRightToLeft=_textAttachmentDirectionIsRightToLeft - In the implementation block
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(void)dealloc;
-(id)init;
-(bool)boolForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)synchronize;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)textDirection;
-(bool)textAttachmentDirectionIsRightToLeft;
-(bool)isChangeColorSwapped;
-(void)resetLocale;
@end

