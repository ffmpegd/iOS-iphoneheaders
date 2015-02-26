/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SBNewsstand : NSObject
+(void)reloadDefaults;
+(BOOL)newsstandEnabled;
+(BOOL)addManyIcons;
+(id)bundleIDToReplicate;
+(BOOL)newsstandStoreIsAvailable;
+(BOOL)addFakeApps;
+(void)openNewsstandAppStore;
+(BOOL)useInternationalAssets;
+(BOOL)alwaysShowIconLabels;
+(void)_checkStoreSupport;
+(void)_availableStoreItemKindsDidChange:(id)arg1 ;
+(void)_iconVisibilityDidChange:(id)arg1 ;
+(BOOL)_newsstandStoreIsSupported;
+(BOOL)_newsstandStoreIsRestricted;
+(void)_updateStoreAvailability;
+(void)noteAppRestrictionsDidChange;
+(BOOL)disableIconSkew;
+(void)initialize;
+(void)_loadDefaults;
@end
