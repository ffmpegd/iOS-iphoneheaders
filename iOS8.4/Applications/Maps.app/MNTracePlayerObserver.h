/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNTracePlayerObserver <NSObject>
@required
-(void)tracePlayerDidStart:(id)arg1;
-(void)tracePlayerDidPause:(id)arg1;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 stale:(char)arg3;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3;
-(void)tracePlayerDidStayOnRoute:(id)arg1;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3;
-(void)tracePlayerDidStop:(id)arg1;
-(void)tracePlayerDidResume:(id)arg1;

@end

