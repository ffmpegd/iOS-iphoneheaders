/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface SharedDataMigration : NSObject
+(id)_userCachesDirectoryPath;
+(BOOL)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(BOOL)arg3 ;
+(void)migratePersistentStorageDefaults;
+(BOOL)migrateRecentSearches;
+(BOOL)migrateThumbnails;
@end
