/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>

@class JaliscoAppLibrary, SSAppPurchaseHistoryDatabase;

@interface JaliscoAppsImporter : JaliscoImporter {

	JaliscoAppLibrary* _appCloudLibrary;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;

}
-(void)_importTracksFromItemsResponseData:(id)arg1 ;
-(id)metadataKeys;
-(id)purchaseTokens;
-(id)queryFilter;
-(BOOL)includeFlavors;
-(unsigned)onDiskRevision;
-(id)initWithLibrary:(id)arg1 purchaseHistoryDatabase:(id)arg2 ;
-(id)connection;
-(BOOL)includeHiddenItems;
-(id)handleResponse:(id)arg1 ;
-(void).cxx_destruct;
@end

