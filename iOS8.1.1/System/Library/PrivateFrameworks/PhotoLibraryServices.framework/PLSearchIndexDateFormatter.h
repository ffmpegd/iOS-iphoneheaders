/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, NSString;

@interface PLSearchIndexDateFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDateFormatter* _dateFormatter;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _displayFormat;
	NSString* _parseFormat;
	BOOL _localeDidChange;

}
-(void)dealloc;
-(id)init;
-(id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(BOOL)arg2 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)_inqUpdateDateFormat:(id)arg1 ;
-(void)_inqSetupDateFormatter;
-(id)_inqNewLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2 ;
@end

