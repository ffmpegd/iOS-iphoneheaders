/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CBXpcConnectionDelegate <NSObject>
@required
-(void)xpcConnectionDidReset:(id)arg1;
-(void)xpcConnectionIsInvalid:(id)arg1;
-(void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
-(void)xpcConnectionDidFinalize:(id)arg1;

@end

