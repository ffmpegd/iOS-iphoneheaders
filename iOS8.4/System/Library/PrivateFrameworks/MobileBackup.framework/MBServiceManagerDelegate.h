/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MBServiceManagerDelegate
@required
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 context:(id)arg4;
-(void)manager:(id)arg1 didFinishRestoreWithContext:(id)arg2;
-(void)manager:(id)arg1 didFailRestoreWithContext:(id)arg2 error:(id)arg3;

@end

