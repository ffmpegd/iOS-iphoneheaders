/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassLibraryDelegate <NSObject>
@optional
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
-(void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3;
-(void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(BOOL)arg3;

@end

