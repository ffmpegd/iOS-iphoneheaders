/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString;

@interface MachineDataProvisioningOperation : ISOperation {

	unsigned long long _accountID;
	char _allowsBootstrapCellularData;
	char _hidesServerDrivenDialogs;
	NSData* _inputData;
	int _protocolVersion;
	NSString* _userAgent;

}

@property (assign) char allowsBootstrapCellularData; 
@property (assign) char hidesServerDrivenDialogs; 
@property (assign) int protocolVersion; 
@property (copy) NSString * userAgent; 
-(void)setHidesServerDrivenDialogs:(char)arg1 ;
-(id)_newFinishProvisioningOperationWithData:(id)arg1 ;
-(char)_finishProvisioningWithResponse:(id)arg1 sessionID:(unsigned long)arg2 error:(id*)arg3 ;
-(char)hidesServerDrivenDialogs;
-(id)initWithAccountIdentifier:(unsigned long long)arg1 provisioningData:(id)arg2 ;
-(NSString *)userAgent;
-(void)dealloc;
-(void)run;
-(int)protocolVersion;
-(void)setProtocolVersion:(int)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(char)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(char)arg1 ;
@end
